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

  // Get the time if there is one.
  if (!empty($user_score['started'])) {
    $time = date('i:s', (time() - $user_score['started']['time']));
    $current = t('Currently on level @level - task @task of @total_tasks',
      array(
        '@level' => $user_score['started']['level'],
        '@task' => $user_score['started']['task'],
        '@total_tasks' => $user_score['started']['total_tasks'],
      )
    );
  }
  else {
    $time = '00:00';
  }

  // Get level info.
  $levels = dkc_single_load_levels();

  // Start output.
  $output = array(
    '#prefix' => '<div class="dkc-score-bar">',
    '#suffix' => '</div>',
  );
  $output['name'] = array(
    '#prefix' => '<span class="dkc-user-name">',
    '#markup' => $user->name,
    '#suffix' => '</span>',
  );
  $output['time'] = array(
    '#prefix' => '<span class="dkc-level-time">',
    '#markup' => $time,
    '#suffix' => '</span>',
  );
  $output['current'] = array(
    '#prefix' => '<span class="dkc-level-time">',
    '#markup' => $time,
    '#suffix' => '</span>',
  );

  return drupal_render($output);
}
