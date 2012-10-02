<?php
/**
 * @file
 * esri_homepage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function esri_homepage_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feature_large|node|page_features|form';
  $field_group->group_name = 'group_feature_large';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_features';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Feature Block',
    'weight' => '1',
    'children' => array(
      0 => 'field_large_feature_description',
      1 => 'field_large_feature_link',
      2 => 'field_large_feature_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_feature_large|node|page_features|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feature_small_1|node|page_features|form';
  $field_group->group_name = 'group_feature_small_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_features';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Feature Block 1',
    'weight' => '2',
    'children' => array(
      0 => 'field_small_feature_1_title',
      1 => 'field_small_feature_1_link',
      2 => 'field_small_feature_1_descriptio',
      3 => 'field_small_feature_1_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_feature_small_1|node|page_features|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feature_small_2|node|page_features|form';
  $field_group->group_name = 'group_feature_small_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_features';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Feature Block 2',
    'weight' => '3',
    'children' => array(
      0 => 'field_small_feature_2_title',
      1 => 'field_small_feature_2_link',
      2 => 'field_small_feature_2_descriptio',
      3 => 'field_small_feature_2_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_feature_small_2|node|page_features|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focal_image|node|page_focals|form';
  $field_group->group_name = 'group_focal_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_focals';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Focal Image',
    'weight' => '3',
    'children' => array(
      0 => 'field_focal_large',
      1 => 'field_focal_medium',
      2 => 'field_focal_small',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_focal_image|node|page_focals|form'] = $field_group;

  return $export;
}
