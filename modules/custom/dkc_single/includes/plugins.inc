<?php

/**
 * @file
 * Plugin functions and definitions for ctools.
 */

/**
 * Implements hook_ctools_plugin_directory().
 */
function dkc_single_ctools_plugin_directory($module, $plugin) {
  if ($module == 'dkc_single' && !empty($plugin)) {
    return "plugins/$plugin";
  }
}

/**
 * Implements hook_ctools_plugin_type().
 *
 * ...is this seriously undocumented in the guilde to create plugins?
 *
 */
function dkc_single_ctools_plugin_type() {
  return array(
    'level' => array(
    ),
  );
}

/**
 * Fetch metadata for a particular plugin.
 *
 * @param $type
 *   String - The plug in type.
 *
 * @param $id
 *   String - The plug in id.
 *
 * @return
 *   An array with information about the particular target plugin.
 */
function dkc_single_get_plugin ($type, $id) {
  ctools_include('plugins');
  return ctools_get_plugins('dkc_single', $type, $id);
}

/**
 * Helper function to load the plugin data
 *
 * @param $type
 *   String - The plugin type to load.
 *
 * @param $node
 *   Object - The campaign node to get the data from.
 *
 * @param $id
 *   String - Optional - The plug in id.
 *
 * @return An array containing the unserialized data.
 */
function dkc_single_get_plugin_data($type, $node, $id = NULL) {
  $value = dkc_single_get_campaign_info($node, $type);
  $data = unserialize($value[0]['value']);
  if (empty($id)) {
    return $data;
  }
  else {
    return $data[$id];
  }
}

/**
 * Fetch metadata for a particular level plugin.
 *
 * @param $id
 *   String - The plug in id.
 *
 * @return
 *   An array with information about the particular level plugin.
 */
function dkc_single_get_level_plugin($id) {
  ctools_include('plugins');
  return ctools_get_plugins('dkc_single', 'level', $id);
}

/**
 * Fetch metadata for all level plugins.
 *
 * @return
 *   An array of arrays with information about all available level plugins.
 */
function dkc_single_get_level_plugins() {
  ctools_include('plugins');
  return ctools_get_plugins('dkc_single', 'level');
}

/**
 * Generic validate callback for level plugins, which in turn calls
 * the proper validate callback.
 */
function dkc_single_level_validate_callback($form, &$form_state) {
  // Check for a level.
  if (!empty($form_state['dkc_level'])) {
    // Load the level.
    $level = $form_state['dkc_level'];

    // Let the level run it's own form alter.
    if ($function = ctools_plugin_get_function($level, 'form_validate')) {
      $function($form, $form_state);
    }
  }
}

/**
 * Generic submit callback for level plugins, which in turn calls
 * the proper submitcallback.
 */
function dkc_single_level_submit_callback($form, &$form_state) {
  // Check for a level.
  if (!empty($form_state['dkc_level'])) {
    // Load the level.
    $level = $form_state['dkc_level'];

    // Let the level run it's own form alter.
    if ($function = ctools_plugin_get_function($level, 'form_submit')) {
      $function($form, $form_state);
    }
  }
}
