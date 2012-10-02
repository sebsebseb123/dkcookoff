<?php

/**
 * @file
 * Settings for the Esri one column layout
 */

function esri_esri_three_panels_layouts() {
$items['esri_three'] = array(
    'title'    => t('Esri - three column'),
    'category' => t('Esri'),
    'icon'     => 'esri_three.png',
    'theme'    => 'esri_three',
    'admin css' => 'esri_three.admin.css',
    'css' => 'esri_three.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'esri_three_primary'  => t('Primary'),
      'esri_three_secondary_header' => t('Secondary Header'),
      'esri_three_secondary_first'  => t('Secondary First'),
      'esri_three_secondary_second'  => t('Secondary Second'),
      'esri_three_secondary_third'  => t('Secondary Third'),
    ),
);

  return $items;
}
