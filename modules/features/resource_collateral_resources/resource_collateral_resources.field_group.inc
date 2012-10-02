<?php
/**
 * @file
 * resource_collateral_resources.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function resource_collateral_resources_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cr_files|node|resource_collateral_resources|form';
  $field_group->group_name = 'group_cr_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource_collateral_resources';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '9',
    'children' => array(
      0 => 'field_cr_file_entity',
      1 => 'field_cr_thumbnail',
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
  $export['group_cr_files|node|resource_collateral_resources|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cr_options|node|resource_collateral_resources|form';
  $field_group->group_name = 'group_cr_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource_collateral_resources';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '3',
    'children' => array(
      0 => 'field_cr_industry',
      1 => 'field_cr_product',
      2 => 'field_cr_services',
      3 => 'field_cr_type',
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
  $export['group_cr_options|node|resource_collateral_resources|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cr_settings|node|resource_collateral_resources|form';
  $field_group->group_name = 'group_cr_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource_collateral_resources';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '2',
    'children' => array(
      0 => 'field_cr_drill_down_page',
      1 => 'language',
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
  $export['group_cr_settings|node|resource_collateral_resources|form'] = $field_group;

  return $export;
}
