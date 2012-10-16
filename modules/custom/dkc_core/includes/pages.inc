<?php

/**
 * @file
 * DK Cookoff Core Pages.
 */

/**
 * Menu callback for the intro to the game.
 */
function dkc_core_start() {
  global $user;
  $output = array();

  // If we're logged in, display a different message than if we're not.
  if ($user->uid) {
    $welcome = t('Welcome @name. Ready to get messy in the kitchen?', array('@name' => $user->name));
  }
  else {
    $welcome = t('Welcome to Drupal Kitcken Cookoff. In order to start, you need to create an account. Please do that first.');
  }

  $output['welcome'] = array(
    '#type' => 'item',
    '#description' => $welcome,
  );

  if ($user->uid) {
    $links = array();
    // Add link to single player, if needed.
    if (module_exists('dkc_single') && user_access('play single player')) {
      $links[] = l(t('Single player game'), 'start/single');
    }
    // Add link to multi player, if needed.
    if (module_exists('dkc_multi') && user_access('play multi player')) {
      $links[] = l(t('Multi player game'), 'start/multi');
    }
    // Add link to single player scoreboard.
    if (module_exists('dkc_single') && user_access('play single player')) {
      $links[] = l(t('Score board'), 'user/' . $user->uid . '/score');
    }

    $output['options'] = array(
      '#theme' => 'item_list',
      '#items' => $links,
      '#type' => 'ul',
    );
  }
  else {
    $output['login'] = drupal_get_form('user_login_block');
  }

  return $output;
}
