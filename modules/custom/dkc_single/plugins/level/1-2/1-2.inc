<?php

/**
 * @file
 * Level 1 - 2.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'type' => 'level',
  'title' => t('Change other settings'),
  'description' => t('Change some of the other settings.'),
  'level' => 1,
  'sublevel' => 2,
  'weight' => 10,
  'start_path' => 'admin/appearance',
);
