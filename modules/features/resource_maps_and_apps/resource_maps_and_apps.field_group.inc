<?php
/**
 * @file
 * resource_maps_and_apps.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function resource_maps_and_apps_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ma_files|node|resource_maps_and_apps|form';
  $field_group->group_name = 'group_ma_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource_maps_and_apps';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '10',
    'children' => array(
      0 => 'field_ma_image',
      1 => 'field_image_thumbnail_',
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
  $export['group_ma_files|node|resource_maps_and_apps|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ma_options|node|resource_maps_and_apps|form';
  $field_group->group_name = 'group_ma_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource_maps_and_apps';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '3',
    'children' => array(
      0 => 'field_ma_industry',
      1 => 'field_ma_product',
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
  $export['group_ma_options|node|resource_maps_and_apps|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ma_settings|node|resource_maps_and_apps|form';
  $field_group->group_name = 'group_ma_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource_maps_and_apps';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '2',
    'children' => array(
      0 => 'language',
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
  $export['group_ma_settings|node|resource_maps_and_apps|form'] = $field_group;

  return $export;
}
