<?php

/**
 * @file
 * Settings for the Esri one column layout
 */
function esri_esri_one_panels_layouts() {
  $items['esri_one'] = array(
    'title'    => t('Esri - one column'),
    'category' => t('Esri'),
    'icon'     => 'esri_one.png',
    'theme'    => 'esri_one',
    'admin css' => 'esri_one.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'esri_one_primary'  => t('Primary'),
      'esri_one_secondary'  => t('Secondary'),
    ),
  );
  return $items;
}
