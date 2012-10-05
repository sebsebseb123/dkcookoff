<?php

/**
 * @file
 * Level 1 - 1.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'type' => 'level',
  'title' => t('Change basic site settings'),
  'description' => t('Change some of the basic site settings.'),
  'level' => 1,
  'sublevel' => 1,
  'start_path' => 'admin/config/system/site-information',
  'form_alter' => 'dkc_level_1_1_form_alter',
  'form_validate' => 'dkc_level_1_1_form_validate',
  'form_submit' => 'dkc_level_1_1_form_submit',
);

function dkc_level_1_1_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'system_site_information_settings') {
    drupal_set_message(t("Great! Welcome to your first level. Follow the instructions below to get started!"));

    // Display the instructions in a fieldset.
    $form['level_info'] = array(
      '#type' => 'fieldset',
      '#weight' => -999,
      '#title' => t('Level Info'),
      '#description' => t('Follow these steps to make your first basic changes to a drupal site.'),
    ) + dkc_highlight_fieldset();
    $form['level_info']['step_1'] = array(
      '#type' => 'item',
      '#title' => t('Step @num', array('@num' => 1)),
      // Since later we check that site_name == "Cookoff" ...
      // We should have that be a variable, since the word could change.
      '#description' => t('Change the "Site name" to be "Cookoff" minus the quotes.'),
    );
    $form['level_info']['step_2'] = array(
      '#type' => 'item',
      '#title' => t('Step @num', array('@num' => 2)),
      '#description' => t('Change the "Slogan" to be "Kids can rock and roll!" minus the quotes.'),
    );

    // Highlight field.
    $form['site_information'] += dkc_highlight_fieldset();
    $form['site_information']['site_name'] += dkc_p_arrow();
    $form['site_information']['site_slogan'] += dkc_p_arrow();

    // Unuse fields.
    $form['site_information']['site_mail'] += dkc_unused();
    $form['front_page'] += dkc_unused();
    $form['error_page'] += dkc_unused();

    // Add generic validate and submit handlers, which will trigger the actual
    // validate and submit handlers for this plugin.
    $form['#validate'][] = 'dkc_single_level_validate_callback';
    $form['#submit'][] = 'dkc_single_level_submit_callback';
    // Set the redirect back to the levels page.
    $form_state['redirect'] = 'start/single'; // TODO: This doesn't redirect... it's not properly saving.
  }
}

function dkc_level_1_1_form_validate($form, &$form_state) {
  // Check to see if they've changed the name and slogan.
  if ($form_state['values']['site_name'] != 'Cookoff') {
    form_set_error('site_name', t('Sorry, you didn\'t properly set the Site name to "Cookoff".'));
  }
  if ($form_state['values']['site_slogan'] != 'Kids can rock and roll!') {
    form_set_error('site_slogan', t('Sorry, you didn\'t properly set the Slogan to "Kids can rock and roll!".'));
  }
}

function dkc_level_1_1_form_submit($form, &$form_state) {
  drupal_set_message(t("Congratulations! You passed level 1!"));
  // TODO: We shouldn't hard code the redirection
  drupal_goto('start/single');
}
