<?php

/**
 * @file
 * DK Cookoff Single Player Pages.
 */

/**
 * Menu callback. Starting page, where you get to pick a level.
 */
function dkc_single_start() {

  // Get level data.
  $levels = dkc_single_get_level_plugins();

  // Build links to levels.
  $links = array();
  foreach ($levels as $level) {
    $links[] = l($level['title'], $level['start_path'], array('query' => array('level' => $level['name'])));
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
    '#title' => t('Levels'),
  );

  return $output;
}
