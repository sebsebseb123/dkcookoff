<?php
/**
 * @file
 * esri_homepage.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function esri_homepage_taxonomy_default_vocabularies() {
  return array(
    'page_focal_groups' => array(
      'name' => 'Page - Focal Groups',
      'machine_name' => 'page_focal_groups',
      'description' => 'Create group of photos.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
    ),
  );
}
