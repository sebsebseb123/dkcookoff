<?php
/**
 * @file
 * esri_footer_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function esri_footer_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function esri_footer_features_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function esri_footer_features_node_info() {
  $items = array(
    'footer_feature' => array(
      'name' => t('Footer Feature'),
      'base' => 'node_content',
      'description' => t('Feature 4 items in the footer feature area.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
