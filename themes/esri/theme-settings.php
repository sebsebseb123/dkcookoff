<?php

// Form override fo theme settings
function esri_form_system_theme_settings_alter(&$form, $form_state) {

  $form['options_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Theme Specific Settings'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE
  );
  $form['options_settings']['esri_tabs'] = array(
    '#type' => 'checkbox',
    '#title' =>  t('Use the ZEN tabs'),
    '#description'   => t('Check this if you wish to replace the default tabs by the ZEN tabs'),
    '#default_value' => theme_get_setting('esri_tabs'),
  );
  
  $form['options_settings']['esri_breadcrumb'] = array(
    '#type'          => 'fieldset',
    '#title'         => t('Breadcrumb settings'),
    '#attributes'    => array('id' => 'basic-breadcrumb'),
  );
  $form['options_settings']['esri_breadcrumb']['esri_breadcrumb'] = array(
    '#type'          => 'select',
    '#title'         => t('Display breadcrumb'),
    '#default_value' => theme_get_setting('esri_breadcrumb'),
    '#options'       => array(
                          'yes'   => t('Yes'),
                          'admin' => t('Only in admin section'),
                          'no'    => t('No'),
                        ),
  );
  $form['options_settings']['esri_breadcrumb']['esri_breadcrumb_separator'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Breadcrumb separator'),
    '#description'   => t('Text only. Don’t forget to include spaces.'),
    '#default_value' => theme_get_setting('esri_breadcrumb_separator'),
    '#size'          => 5,
    '#maxlength'     => 10,
    '#prefix'        => '<div id="div-basic-breadcrumb-collapse">', // jquery hook to show/hide optional widgets
  );
  $form['options_settings']['esri_breadcrumb']['esri_breadcrumb_home'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Show home page link in breadcrumb'),
    '#default_value' => theme_get_setting('esri_breadcrumb_home'),
  );
  $form['options_settings']['esri_breadcrumb']['esri_breadcrumb_trailing'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Append a separator to the end of the breadcrumb'),
    '#default_value' => theme_get_setting('esri_breadcrumb_trailing'),
    '#description'   => t('Useful when the breadcrumb is placed just before the title.'),
  );
  $form['options_settings']['esri_breadcrumb']['esri_breadcrumb_title'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Append the content title to the end of the breadcrumb'),
    '#default_value' => theme_get_setting('esri_breadcrumb_title'),
    '#description'   => t('Useful when the breadcrumb is not placed just before the title.'),
    '#suffix'        => '</div>', // #div-basic-breadcrumb
  );
  
  $form['options_settings']['wireframe_mode'] = array(
    '#type' => 'checkbox',
    '#title' =>  t('Wireframe Mode - Display borders around main layout elements'),
    '#description'   => t('<a href="!link">Wireframes</a> are useful when prototyping a website.', array('!link' => 'http://www.boxesandarrows.com/view/html_wireframes_and_prototypes_all_gain_and_no_pain')),
    '#default_value' => theme_get_setting('wireframe_mode'),
  );
  $form['options_settings']['clear_registry'] = array(
    '#type' => 'checkbox',
    '#title' =>  t('Rebuild theme registry on every page.'),
    '#description'   =>t('During theme development, it can be very useful to continuously <a href="!link">rebuild the theme registry</a>. WARNING: this is a huge performance penalty and must be turned off on production websites.', array('!link' => 'http://drupal.org/node/173880#theme-registry')),
    '#default_value' => theme_get_setting('clear_registry'),
  );
  
  $form['options_settings']['esri_facebook'] = array(
    '#type' => 'textfield',
    '#title' =>  t('Facebook Link'),
    '#description'   => t('Link to Facebook'),
    '#default_value' => theme_get_setting('esri_facebook'),
    '#size'          => 35
  );

  $form['options_settings']['esri_facebook_fr'] = array(
    '#type' => 'textfield',
    '#title' =>  t('Facebook Link (French)'),
    '#description'   => t('Link to Facebook (French)'),
    '#default_value' => theme_get_setting('esri_facebook_fr'),
    '#size'          => 35
  );

  $form['options_settings']['esri_twitter'] = array(
    '#type' => 'textfield',
    '#title' =>  t('Twitter Link'),
    '#description'   => t('Link to Twitter'),
    '#default_value' => theme_get_setting('esri_twitter'),
    '#size'          => 35
  );

  $form['options_settings']['esri_twitter_fr'] = array(
    '#type' => 'textfield',
    '#title' =>  t('Twitter Link (French)'),
    '#description'   => t('Link to Twitter (French)'),
    '#default_value' => theme_get_setting('esri_twitter_fr'),
    '#size'          => 35
  );

  $form['options_settings']['esri_youtube'] = array(
    '#type' => 'textfield',
    '#title' =>  t('Youtube Link'),
    '#description'   => t('Link to Youtube'),
    '#default_value' => theme_get_setting('esri_youtube'),
    '#size'          => 35
  );

  $form['options_settings']['esri_youtube_fr'] = array(
    '#type' => 'textfield',
    '#title' =>  t('Youtube Link (French)'),
    '#description'   => t('Link to Youtube (French)'),
    '#default_value' => theme_get_setting('esri_youtube_fr'),
    '#size'          => 35
  );

  $form['options_settings']['esri_linkedin'] = array(
    '#type' => 'textfield',
    '#title' =>  t('LinkedIn Link'),
    '#description'   => t('Link to LinkedIn'),
    '#default_value' => theme_get_setting('esri_linkedin'),
    '#size'          => 35
  );

  $form['options_settings']['esri_linkedin_fr'] = array(
    '#type' => 'textfield',
    '#title' =>  t('LinkedIn Link (French)'),
    '#description'   => t('Link to LinkedIn (French)'),
    '#default_value' => theme_get_setting('esri_linkedin_fr'),
    '#size'          => 35
  );
}
