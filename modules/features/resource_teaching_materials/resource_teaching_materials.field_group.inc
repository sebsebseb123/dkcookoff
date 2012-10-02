<?php
/**
 * @file
 * resource_teaching_materials.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function resource_teaching_materials_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cr_files|node|resource_teaching_materials|form';
  $field_group->group_name = 'group_cr_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource_teaching_materials';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '7',
    'children' => array(
      0 => 'field_cr_file_entity',
      1 => 'field_cr_thumbnail',
      2 => 'field_tm_file_type',
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
  $export['group_cr_files|node|resource_teaching_materials|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cr_options|node|resource_teaching_materials|form';
  $field_group->group_name = 'group_cr_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource_teaching_materials';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '3',
    'children' => array(
      0 => 'field_tm_resource_type',
      1 => 'field_tm_subject_area',
      2 => 'field_tm_grade',
      3 => 'field_tm_geographic_focus',
      4 => 'field_tm_difficulty_level',
      5 => 'field_tm_platform_education',
      6 => 'field_tm_product_education',
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
  $export['group_cr_options|node|resource_teaching_materials|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cr_settings|node|resource_teaching_materials|form';
  $field_group->group_name = 'group_cr_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource_teaching_materials';
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
  $export['group_cr_settings|node|resource_teaching_materials|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource_author|node|resource_teaching_materials|form';
  $field_group->group_name = 'group_resource_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource_teaching_materials';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Author',
    'weight' => '8',
    'children' => array(
      0 => 'field_tm_author_name',
      1 => 'field_tm_author_organization',
      2 => 'field_tm_author_contact',
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
  $export['group_resource_author|node|resource_teaching_materials|form'] = $field_group;

  return $export;
}
