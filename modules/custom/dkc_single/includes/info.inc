<?php

/**
 * @file
 * Info getting functions.
 */

/**
 * Helper function to get the players score info.
 *
 * @param $uid
 *   Int (Optional) - User ID to retrieve a score of. Or, if none then
 *   get the score of the current user.
 *
 * @return A "score-card" array.
 */
function dkc_single_get_user_score($uid = NULL) {
  // Get the proper user.
  if (!empty($uid) && is_numeric($uid)) {
    $user = user_load($uid);
  }
  else {
    global $user;
  }

  // Get user scorecard data.
  if ($score_card = variable_get('dkc_user_scorecard-' . $user->uid, FALSE) && 0) {
    return $score_card;
  }
  else {
    return dkc_single_init_user_score($user);
  }
}

/**
 * Initialize a user's score card.
 *
 * @param $user
 *   Object - A user object, which we will create a score card for.
 */
function dkc_single_init_user_score($user) {

  // Get levels.
  $levels = dkc_single_load_levels();
  // Sort by weight.
  uasort($levels, 'drupal_sort_weight');
  $levels = array_values($levels);

  // Init the array.
  $score_card = array(
    'started' => FALSE,
    'passed' => array(),
    'todo' => array(
      $levels[0]['name'] => $levels[0]['title']
    ),
  );

  // Set the var.
  variable_set('dkc_user_scorecard-' . $user->uid, $score_card);

  // Return the card.
  return $score_card;
}

/**
 * Helper function to load all levels... using caching!
 *
 * @param $level_id
 *   String - Optional - Level ID to load.
 *
 * @param $reset
 *   Bool - Optional - Pull a fresh list... not from cache.
 *
 * @return
 *   An array of levels.
 */
function dkc_single_load_levels($level_id = NULL, $reset = NULL) {
  return dkc_single_get_level_plugins($level_id, $reset);
}

/**
 * Helper function to load all levels
 *
 * @param $level_id
 *   String - The Level ID to load.
 *
 * @param $reset
 *   Bool - Optional - Pull a fresh list... not from cache.
 *
 * @return
 *   A loaded level array.
 */
function dkc_single_load_level($level_id, $reset = NULL) {
  return dkc_single_get_level_plugin($level_id, $reset);
}

/**
 * Level loading function.
 *
 * @return
 *   A loaded level array.
 */
function dkc_level_load($level_id) {
  return dkc_single_get_level_plugin($level_id);
}
