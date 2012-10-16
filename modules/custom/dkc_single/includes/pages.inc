<?php

/**
 * @file
 * DK Cookoff Single Player Pages.
 */

/**
 * Menu callback. Starting page, where you get to pick a level.
 */
function dkc_single_start() {
  // Get user score.
  $user_scorecard = dkc_single_get_user_score();
  // Get level data.
  $levels = dkc_single_get_level_plugins();
  // Sort by weight.
  uasort($levels, 'drupal_sort_weight');

  // Build links to levels.
  $links = array();
  foreach ($levels as $level) {
    $level_num = $level['level'];

    // Build level label.
    if (empty($links[$level_num])) {
      $links[$level_num]['data'] = t('Level @num', array('@num' => $level_num));
    }

    // Get level tasks.
    if ($function = ctools_plugin_get_function($level, 'single_player_tasks')) {
      $tasks = $function();
    }

    // Build level link.
    $link = l($level['title'], $level['start_path'], array('query' => array('level' => $level['name'])));
    $task_list = array();
    // Build level fieldset.
    foreach ($tasks as $task_name => $task) {

    }

    // Build level link.
    //$links[$level_num]['children'][] = l($level['title'], $level['start_path'], array('query' => array('level' => $level['name'])));
  }

  // Start output array.
  $output = array();
  $output['desc'] = array(
    '#type' => 'item',
    '#description' => t('Welcome to the single player game. Click on any of the levels below to get started.'),
  );
  $output['list'] = array(
    '#theme' => 'item_list',
    '#items' => $links,
    '#type' => 'ul',
  );

  return $output;
}

/**
 * Callback page, which loads the level info.
 *
 * @param $level
 *   Fully loaded $level var, from plugin.
 *
 * @return Renderable array.
 */
function dkc_single_page($level) {
  // Get args
  $args = func_get_args();
  array_shift($args);

  // Let the level run it's own page callback.
  if ($function = ctools_plugin_get_function($level, 'page_callback')) {
    return $function($args);
  }
}

/**
 * Menu callback. Score page, where you get view your score.
 */
function dkc_single_score() {
  // Get user scorecard data.
  $user_scorecard = dkc_single_get_user_score();

  // Any score yet?
  if (empty($user_scorecard)) {
    return t('You still have yet to complete a level... get to it!');
  }

  // Set header.
  $header = array(t('Completed on'), t('Level'), t('Sublevel'), t('Other metric'));

  // Set rows.
  $rows = array();
  foreach ($user_scorecard['passed'] as $time => $pass) {
    $row = array();

    // Set "Completed on".
    $row[] = date('M jS, Y - g:i:sa', $time);
    // Set level.
    $row[] = $pass['level'];
    // Set sub-level.
    $row[] = $pass['sublevel'] . ' - ' . $pass['description'];
    // Set other metric.
    $row[] = substr(md5($time), 0, 5);

    $rows[] = $row;
  }

  // Start output array.
  $output = array();
  $output['desc'] = array(
    '#type' => 'item',
    '#description' => t('@user\'s score.', array('@user' => $user->name)),
  );
  $output['scorecard'] = array(
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
  );

  return $output;
}
