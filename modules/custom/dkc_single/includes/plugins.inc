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
 */
function dkc_single_ctools_plugin_type() {
  return array(
    'level' => array(),
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
 * Fetch metadata for all level plugins.
 *
 * @param $file
 *   String - The filename to load.
 *
 * @param $plugin
 *   String - The plugin machine name to load from, or rather the directory
 *   where the plugin is located.
 */
function dkc_single_level_include($file, $plugin) {
  module_load_include('', 'dkc_single', 'includes/plugins/level/' . $plugin . '/includes/' . $file);
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

    // If we're submitting, the player has passed the level. So,
    // let's make note of it.
    global $user;
    // This is not a real solution for keeping user score info. This is here
    // as a basic, proof of concept.
    $user_scorecard = variable_get('dkc_user_scorecard-' . $user->uid, array());
    // Here's where we save the player's progress. I like the "keyed by time"
    // array. So, if the player attempts a level a second time, we would keep
    // track of that too. It might also be nice to keep some metrics... like,
    // if the player made an error (aka, form_set_error), then we could
    // keep track of that and keep that info here. So, on harder levels where
    // a player may require mulitple attempts to pass, they can see that each
    // time was a little better. Maybe even keep time taken as a metric?
    $user_scorecard['passed'][time()] = $level;
    variable_set('dkc_user_scorecard-' . $user->uid, $user_scorecard);

    // Let the level run it's own form alter.
    if ($function = ctools_plugin_get_function($level, 'form_submit')) {
      $function($form, $form_state);
    }
  }
}
