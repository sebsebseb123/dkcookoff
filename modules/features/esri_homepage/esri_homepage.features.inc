<?php
/**
 * @file
 * esri_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function esri_homepage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
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
function esri_homepage_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function esri_homepage_image_default_styles() {
  $styles = array();

  // Exported image style: feature_large.
  $styles['feature_large'] = array(
    'name' => 'feature_large',
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
          'width' => '900',
          'height' => '503',
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: feature_small.
  $styles['feature_small'] = array(
    'name' => 'feature_small',
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
          'width' => '218',
          'height' => '170',
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: focal_large.
  $styles['focal_large'] = array(
    'name' => 'focal_large',
    'effects' => array(
      3 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => '1200',
          'height' => '460',
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: focal_medium.
  $styles['focal_medium'] = array(
    'name' => 'focal_medium',
    'effects' => array(
      4 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => '1040',
          'height' => '350',
          'strength' => 'medium',
          'fallback' => 'smartcrop',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: focal_small.
  $styles['focal_small'] = array(
    'name' => 'focal_small',
    'effects' => array(
      5 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => '550',
          'height' => '300',
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
function esri_homepage_node_info() {
  $items = array(
    'page_features' => array(
      'name' => t('Page - Homepage Features'),
      'base' => 'node_content',
      'description' => t('Featured blocks, like the ones used on the homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page_focals' => array(
      'name' => t('Page - Focals'),
      'base' => 'node_content',
      'description' => t('Images used for page sliders.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
