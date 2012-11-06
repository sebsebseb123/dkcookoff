<?php

/**
 * @file
 * Theme functions.
 */

/**
 * Implements theme_score_bar().
 *
 * @param
 *   $uid - The User ID of the user we want to render a score bar for.
 *
 * @return
 *   A renderable array representing a user's score.
 */
function theme_score_bar($variables) {
  $uid = $variables['uid'];
  // Load user score.
  $user_score = dkc_single_get_user_score($uid);
  // Load user object.
  if (!empty($uid)) {
    $user = user_load($uid);
  }
  else {
    global $user;
  }

  // Get level info.
  $levels = dkc_single_load_levels();

  // Start output.
  $output = array();

  $output['name'] = array(
    '#prefix' => '<div class="dkc-score-bar">',
    '#markup' => $user->name,
    '#suffix' => '</div>',
  );

  return drupal_render($output);
}
