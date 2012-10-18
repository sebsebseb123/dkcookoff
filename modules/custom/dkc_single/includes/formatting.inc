<?php

/**
 * @file
 * Formatting functions.
 */

/**
 * Shorthand function to display an animated arrow for form fields.
 */
function dkc_p_arrow() {
  $variables = array(
    'path' => drupal_get_path('module', 'dkc_single') . '/images/prefix_arrow.gif',
    'attributes' => array(
      'class' => array(
        'animated-arrow',
        'prefix-arrow',
      ),
    ),
  );

  return array(
    '#field_prefix' => theme('image', $variables),
  );
}

/**
 * Shorthand function to add prefix and suffix to fields.
 */
function dkc_unused() {
  return array(
    '#prefix' => '<div class="dkc-unused">',
    '#suffix' => '</div>',
  );
}

/**
 * Shorthand function to add prefix and suffix to fieldsets.
 */
function dkc_highlight_fieldset() {
  return array(
    '#prefix' => '<div class="dkc-highlight-fieldset">',
    '#suffix' => '</div>',
  );
}

