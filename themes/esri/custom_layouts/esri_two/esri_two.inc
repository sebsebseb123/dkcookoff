<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function esri_esri_two_panels_layouts() {
  $items['esri_two'] = array(
    'title'    => t('Esri - two column'),
    'category' => t('Esri'),
    'icon'     => 'esri_two.png',
    'theme'    => 'esri_two',
    'admin css' => 'esri_two.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'esri_two_primary'    => t('Primary'),
      'esri_two_secondary_first'  => t('Secondary First'),
      'esri_two_secondary_second' => t('Secondary Second'),
    ),
  );

  return $items;
}

/**
 * Preprocess variables for two-50.tpl.php
 */
function template_preprocess_esri_two(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
