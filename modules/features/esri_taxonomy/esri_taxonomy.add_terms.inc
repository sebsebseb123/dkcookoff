<?php

/**
 * @file
 * Install, update and uninstall functions for the the theme_config_feature.
 */

/**
 * Helper function, which "sets the stage" for adding taxo terms, by ensuring
 *   that all of our vocabs have been added, and the fields have been set.
 */
function esri_taxonomy_pre_term_save() {
  // Get our vocabularies.
  module_load_include('inc', 'esri_taxonomy', 'esri_taxonomy.features.taxonomy');
  $our_vocabs = esri_taxonomy_taxonomy_default_vocabularies();

  // Get all the vocabularies to compare with.
  $all_vocabs = array();
  foreach (taxonomy_vocabulary_load_multiple(FALSE) as $vocab) {
    $all_vocabs[] = $vocab->machine_name;
  }

  foreach ($our_vocabs as $machine_name => $vocab) {
    // Check if it exists.
    if (!in_array($machine_name, $all_vocabs)) {
      // Save it.
      taxonomy_vocabulary_save((object) $vocab);
    }
  }

  // Get our fields.
  module_load_include('inc', 'esri_taxonomy', 'esri_taxonomy.features.field');
  $our_fields = esri_taxonomy_field_default_fields();

  foreach ($our_fields as $field) {
    // Check if it exists.
    if (!field_info_field($field['field_config']['field_name'])) {
      // Create the field.
      field_create_field($field['field_config']);
      // Create the instance.
      field_create_instance($field['field_instance']);
    }
  }

  // Clear all caches.
  cache_clear_all();
}

/**
 * Save the term to the vocabulary if it doesn't already exist.
 *
 * @param $terms
 *   Array - Array of term names.
 *
 * @param $vocab
 *   Object - Vocab object.
 *
 * @param $image
 *   Bool - Default FALSE - Whether or not we're trying to save a
 *     resource icon to this term.
 */
function esri_taxonomy_save_terms($terms, $vocab, $image = FALSE) {
  if (empty($terms)) {
    return;
  }

  foreach ($terms as $term_name) {
    // Try to find any matches for this term name.
    $matches = taxonomy_get_term_by_name($term_name, $vocab->machine_name);

    // If none, let's create it.
    if (empty($matches)) {
      $term = array(
        'vid' => $vocab->vid,
        'name' => $term_name,
      );

      // If we need to attach an image...
      if ($image) {

        // Get the file name for the image.
        $image_name = strtolower(str_replace(' ', '-', $term_name));

        // Add the file info to the term.
        $term['field_resource_icon'][LANGUAGE_NONE][0] = (array) file_copy((object) array(
          'uid' => 1,
          'uri' => drupal_get_path('module', 'esri_taxonomy').'/images/'.$image_name.'.png',
          'status' => 1,
          'display' => 1,
        ), 'public://', FILE_EXISTS_REPLACE);
      }

      // Make it an object.
      $term = (object) $term;

      // Save it.
      taxonomy_term_save((object) $term);
    }
  }
}
