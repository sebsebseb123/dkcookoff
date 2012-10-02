<?php
/**
 * @file
 * esri_partners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function esri_partners_ctools_plugin_api() {
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
function esri_partners_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function esri_partners_node_info() {
  $items = array(
    'esri_partners' => array(
      'name' => t('Esri - Partners'),
      'base' => 'node_content',
      'description' => t('Resource type Esri Partners.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
