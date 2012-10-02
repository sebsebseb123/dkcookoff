<?php
/**
 * @file
 * resource_maps_and_apps.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function resource_maps_and_apps_ctools_plugin_api() {
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
function resource_maps_and_apps_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function resource_maps_and_apps_image_default_styles() {
  $styles = array();

  // Exported image style: resources_maps_apps.
  $styles['resources_maps_apps'] = array(
    'name' => 'resources_maps_apps',
    'effects' => array(
      2 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => '600',
          'height' => '500',
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: resources_maps_apps_thumb.
  $styles['resources_maps_apps_thumb'] = array(
    'name' => 'resources_maps_apps_thumb',
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
          'width' => '200',
          'height' => '164',
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function resource_maps_and_apps_node_info() {
  $items = array(
    'resource_maps_and_apps' => array(
      'name' => t('Resource - Maps and Apps'),
      'base' => 'node_content',
      'description' => t('Maps and Apps resource content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
