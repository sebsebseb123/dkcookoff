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
  return variable_get('dkc_user_scorecard-' . $user->uid, array());
}
