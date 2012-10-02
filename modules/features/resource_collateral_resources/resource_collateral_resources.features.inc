<?php
/**
 * @file
 * resource_collateral_resources.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function resource_collateral_resources_ctools_plugin_api() {
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
function resource_collateral_resources_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function resource_collateral_resources_node_info() {
  $items = array(
    'resource_collateral_resources' => array(
      'name' => t('Resource - Collateral Resources'),
      'base' => 'node_content',
      'description' => t('Resource type collateral resources.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
