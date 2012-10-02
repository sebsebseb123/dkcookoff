<?php
/**
 * @file
 * training_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function training_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function training_content_types_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function training_content_types_node_info() {
  $items = array(
    'cd' => array(
      'name' => t('Training - Description'),
      'base' => 'node_content',
      'description' => t('This is the description and additional information used by Training and Events.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'trainer' => array(
      'name' => t('Training - Trainer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'training' => array(
      'name' => t('Training - Training Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'training_or_event_location' => array(
      'name' => t('Training - Location'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
