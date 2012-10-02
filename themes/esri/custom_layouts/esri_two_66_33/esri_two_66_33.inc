<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function esri_esri_two_66_33_panels_layouts() {
  $items['esri_two_66_33'] = array(
    'title' => t('Esri Two column 66/33'),
    'category' => t('Esri'),
    'icon' => 'esri_two_66_33.png',
    'theme' => 'esri_two_66_33',
    'admin css' => 'esri_two_66_33.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'esri_two_66_33_top'    => t('Top (conditional)'),
      'esri_two_66_33_first'  => t('Left'),
      'esri_two_66_33_second' => t('Right'),
      'esri_two_66_33_bottom' => t('Bottom (conditional)'),
      'esri_two_66_33_sec_header' => t('Secondary Header'),
      'esri_two_66_33_sec_first'  => t('Secondary First'),
      'esri_two_66_33_sec_second'  => t('Secondary Second'),
      'esri_two_66_33_sec_third'  => t('Secondary Third'),
    ),
    'css' => 'esri_two_66_33.css',
    // Core
    'type' => 'two',
    'options' => array(
      'two-66-33' => 'default',
      'two-66-33-stack' => 'stack',
    ),
    'styles' => array(
      'two-66-33' => array(
        'css' => array(
          '66' => array('.two-66-33 > .region-two-66-33-first' => 'width:66.666666%'),
          '33' => array('.two-66-33 > .region-two-66-33-second' => 'width:33.333333%'),
        ),
      ),
      'esri-two-66-33-stack' => array(
        'css' => array(
          'fdw' => array('.two-66-33 > .region' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
    ),
  );

  return $items;
}

/**
 * Preprocess variables for esri-two-66-33.php
 */
function template_preprocess_esri_two_66_33(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
