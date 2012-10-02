<?php
/**
 * @file
 * esri_partners.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function esri_partners_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_part_contact|node|esri_partners|form';
  $field_group->group_name = 'group_part_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'esri_partners';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '7',
    'children' => array(
      0 => 'field_part_contact_name',
      1 => 'field_part_contact_position',
      2 => 'field_part_contact_address',
      3 => 'field_part_contact_phone',
      4 => 'field_part_contact_fax',
      5 => 'field_part_contact_email',
      6 => 'field_part_contact_website',
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
  $export['group_part_contact|node|esri_partners|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_part_files|node|esri_partners|form';
  $field_group->group_name = 'group_part_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'esri_partners';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '7',
    'children' => array(
      0 => 'field_part_file_entity',
      1 => 'field_part_logo',
      2 => 'field_part_partner_type',
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
  $export['group_part_files|node|esri_partners|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_part_options|node|esri_partners|form';
  $field_group->group_name = 'group_part_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'esri_partners';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '4',
    'children' => array(
      0 => 'field_part_solution_type',
      1 => 'field_part_services',
      2 => 'field_part_industry',
      3 => 'field_part_program_tier',
      4 => 'language',
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
  $export['group_part_options|node|esri_partners|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_part_settings|node|esri_partners|form';
  $field_group->group_name = 'group_part_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'esri_partners';
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
  $export['group_part_settings|node|esri_partners|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource_author|node|esri_partners|form';
  $field_group->group_name = 'group_resource_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'esri_partners';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Author',
    'weight' => '8',
    'children' => array(
      0 => 'field_part_author_name',
      1 => 'field_part_author_organization',
      2 => 'field_part_author_contact',
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
  $export['group_resource_author|node|esri_partners|form'] = $field_group;

  return $export;
}
