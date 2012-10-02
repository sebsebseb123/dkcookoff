<?php
/**
 * @file
 * esri_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function esri_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-header-menu.
  $menus['menu-header-menu'] = array(
    'menu_name' => 'menu-header-menu',
    'title' => 'Header Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-primary-navigation.
  $menus['menu-primary-navigation'] = array(
    'menu_name' => 'menu-primary-navigation',
    'title' => 'Primary Navigation',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-primary-navigation-fr.
  $menus['menu-primary-navigation-fr'] = array(
    'menu_name' => 'menu-primary-navigation-fr',
    'title' => 'Primary Navigation FR',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu');
  t('Header Menu');
  t('Primary Navigation');
  t('Primary Navigation FR');


  return $menus;
}
