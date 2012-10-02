<?php
/**
 * @file
 * events_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function events_content_type_ctools_plugin_api() {
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
 * Implements hook_image_default_styles().
 */
function events_content_type_image_default_styles() {
  $styles = array();

  // Exported image style: events_focal.
  $styles['events_focal'] = array(
    'name' => 'events_focal',
    'effects' => array(
      1 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => '710',
          'height' => '245',
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function events_content_type_node_info() {
  $items = array(
    'events' => array(
      'name' => t('Training - Generic Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('This title field will only be shown on administration pages. When this page is being viewed, it will pull the title to display from the "Training - Description" reference.'),
    ),
  );
  return $items;
}
