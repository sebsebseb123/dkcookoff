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
    $current = t('Currently on: level @level - task @task of @total_tasks',
      array(
        '@level' => $user_score['started']['level'],
        '@task' => $user_score['started']['task'],
        '@total_tasks' => $user_score['started']['total_tasks'],
      )
    );
  }
  else {
    $time = '00:00';
    $level_id = key($user_score['todo']);
    $level = dkc_single_load_level($level_id);

    $current = l(t('Next level: @level',
      array(
        '@level' => $level_id . ' - ' . $user_score['todo'][$level_id],
      )
    ), $level['start_path'], array('query' => array('level' => $level['name'])));
  }

  // Get level info.
  $levels = dkc_single_load_levels();

  // Start output.
  $output = array(
    '#prefix' => '<div class="dkc-score-bar">',
    '#suffix' => '</div>',
  );

  $output['left'] = array(
    '#prefix' => '<div class="dkc-score-left">',
    '#suffix' => '</div>',
  );
  $output['left']['current'] = array(
    '#prefix' => '<span class="dkc-current-level dkc-info">',
    '#markup' => $current,
    '#suffix' => '</span>',
  );

  $output['center'] = array(
    '#prefix' => '<div class="dkc-score-center">',
    '#suffix' => '</div>',
  );
  $output['center']['name'] = array(
    '#prefix' => '<span class="dkc-user-name dkc-info">',
    '#markup' => l($user->name, 'user/' . $user->uid . '/score'),
    '#suffix' => '</span>',
  );

  $output['right'] = array(
    '#prefix' => '<div class="dkc-score-right">',
    '#suffix' => '</div>',
  );
  $output['right']['time'] = array(
    '#prefix' => '<span class="dkc-level-time dkc-info">',
    '#markup' => t('timer:') . ' <span class="dkc-timer">' . $time . '</span>',
    '#suffix' => '</span>',
  );

  return drupal_render($output);
}
