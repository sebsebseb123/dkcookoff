<?php
/**
 * @file
 * esri_partners.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function esri_partners_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'esri_partners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Esri Partners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Esri Partners';
  $handler->display->display_options['css_class'] = 'view-resources';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascending';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Descending';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No resources were found with the given criteria.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content translation: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['language']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['language']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['language']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['language']['alter']['external'] = 0;
  $handler->display->display_options['fields']['language']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['language']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['language']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['language']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['language']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['language']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['language']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['language']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['language']['alter']['html'] = 0;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['language']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['language']['hide_empty'] = 0;
  $handler->display->display_options['fields']['language']['empty_zero'] = 0;
  $handler->display->display_options['fields']['language']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['language']['link_to_node'] = 0;
  $handler->display->display_options['fields']['language']['native_language'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<div class="resource-content"><div class="resource-content-inner">';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Solution Type */
  $handler->display->display_options['fields']['field_part_solution_type']['id'] = 'field_part_solution_type';
  $handler->display->display_options['fields']['field_part_solution_type']['table'] = 'field_data_field_part_solution_type';
  $handler->display->display_options['fields']['field_part_solution_type']['field'] = 'field_part_solution_type';
  $handler->display->display_options['fields']['field_part_solution_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_part_solution_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_part_solution_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_part_solution_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_part_solution_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_part_solution_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_part_solution_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_part_solution_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_part_solution_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_part_solution_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_part_solution_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_part_solution_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_part_solution_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_part_solution_type']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_part_solution_type']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_part_solution_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_part_solution_type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_part_solution_type']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_part_solution_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_part_solution_type']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_part_solution_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_part_solution_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_part_solution_type']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_part_solution_type']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_part_solution_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_part_solution_type']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_part_solution_type']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_part_solution_type']['field_api_classes'] = 0;
  /* Field: Content: Partner Type */
  $handler->display->display_options['fields']['field_part_partner_type']['id'] = 'field_part_partner_type';
  $handler->display->display_options['fields']['field_part_partner_type']['table'] = 'field_data_field_part_partner_type';
  $handler->display->display_options['fields']['field_part_partner_type']['field'] = 'field_part_partner_type';
  $handler->display->display_options['fields']['field_part_partner_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_part_partner_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_part_partner_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_part_partner_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_part_partner_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_part_partner_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_part_partner_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_part_partner_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_part_partner_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_part_partner_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_part_partner_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_part_partner_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_part_partner_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_part_partner_type']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_part_partner_type']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_part_partner_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_part_partner_type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_part_partner_type']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_part_partner_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_part_partner_type']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_part_partner_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_part_partner_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_part_partner_type']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_part_partner_type']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_part_partner_type']['field_api_classes'] = 0;
  /* Field: Content: Services */
  $handler->display->display_options['fields']['field_part_services']['id'] = 'field_part_services';
  $handler->display->display_options['fields']['field_part_services']['table'] = 'field_data_field_part_services';
  $handler->display->display_options['fields']['field_part_services']['field'] = 'field_part_services';
  $handler->display->display_options['fields']['field_part_services']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_part_services']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_part_services']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_part_services']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_part_services']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_part_services']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_part_services']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_part_services']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_part_services']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_part_services']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_part_services']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_part_services']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_part_services']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_part_services']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_part_services']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_part_services']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_part_services']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_part_services']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_part_services']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_part_services']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_part_services']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_part_services']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_part_services']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_part_services']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_part_services']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_part_services']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_part_services']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_part_services']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_part_services']['field_api_classes'] = 0;
  /* Field: Content: Program Tier */
  $handler->display->display_options['fields']['field_part_program_tier']['id'] = 'field_part_program_tier';
  $handler->display->display_options['fields']['field_part_program_tier']['table'] = 'field_data_field_part_program_tier';
  $handler->display->display_options['fields']['field_part_program_tier']['field'] = 'field_part_program_tier';
  $handler->display->display_options['fields']['field_part_program_tier']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_part_program_tier']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_part_program_tier']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_part_program_tier']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_part_program_tier']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_part_program_tier']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_part_program_tier']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_part_program_tier']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_part_program_tier']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_part_program_tier']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_part_program_tier']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_part_program_tier']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_part_program_tier']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_part_program_tier']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_part_program_tier']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_part_program_tier']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_part_program_tier']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_part_program_tier']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_part_program_tier']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_part_program_tier']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_part_program_tier']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_part_program_tier']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_part_program_tier']['field_api_classes'] = 0;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_part_industry']['id'] = 'field_part_industry';
  $handler->display->display_options['fields']['field_part_industry']['table'] = 'field_data_field_part_industry';
  $handler->display->display_options['fields']['field_part_industry']['field'] = 'field_part_industry';
  $handler->display->display_options['fields']['field_part_industry']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_part_industry']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_part_industry']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_part_industry']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_part_industry']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_part_industry']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_part_industry']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_part_industry']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_part_industry']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_part_industry']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_part_industry']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_part_industry']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_part_industry']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_part_industry']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_part_industry']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_part_industry']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_part_industry']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_part_industry']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_part_industry']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_part_industry']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_part_industry']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_part_industry']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_part_industry']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_part_industry']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_part_industry']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_part_industry']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_part_industry']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_part_industry']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_part_industry']['field_api_classes'] = 0;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'resource-body';
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = '';
  $handler->display->display_options['fields']['php_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_3']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_3']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '</div></div>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['php_1']['element_wrapper_class'] = 'resource-icon';
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php

if (isset($data->field_field_part_resource_type) && isset($data->field_field_part_resource_type[0][\'raw\'][\'tid\'])) {

	//Type Id
	$tid = $data->field_field_part_resource_type[0][\'raw\'][\'tid\'];

	if ($tid!=NULL && $tid!=\'\') {
		$currentTerm = taxonomy_term_load($tid);
		$currentTermName = i18n_string_translate(\'taxonomy:term:\' . $tid . \':name\', $currentTerm->name);
		$output = \'\';

		//If Image Then Attach
		if (!empty($currentTerm->field_resource_icon)) {
			$fileUrl = file_create_url($currentTerm->field_resource_icon[\'und\'][0][\'uri\']);

			$output .= \'<span class="icon"><img src="\' . $fileUrl . \'" alt="\' . $currentTerm->name . \' icon" /></span>\';
		}

		//Name
		$output .= \'<span class="title">\' . $currentTermName . \'</span>\';

		print $output;
	}
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_part_logo']['id'] = 'field_part_logo';
  $handler->display->display_options['fields']['field_part_logo']['table'] = 'field_data_field_part_logo';
  $handler->display->display_options['fields']['field_part_logo']['field'] = 'field_part_logo';
  $handler->display->display_options['fields']['field_part_logo']['label'] = '';
  $handler->display->display_options['fields']['field_part_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_part_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_part_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_part_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_part_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_part_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_part_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_part_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_part_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_part_logo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_part_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_part_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_part_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_part_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_part_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_part_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_part_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_part_logo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_part_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_part_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_part_logo']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_part_logo']['field_api_classes'] = 0;
  /* Sort criterion: Content: Program Tier (field_part_program_tier) */
  $handler->display->display_options['sorts']['field_part_program_tier_value']['id'] = 'field_part_program_tier_value';
  $handler->display->display_options['sorts']['field_part_program_tier_value']['table'] = 'field_data_field_part_program_tier';
  $handler->display->display_options['sorts']['field_part_program_tier_value']['field'] = 'field_part_program_tier_value';
  $handler->display->display_options['sorts']['field_part_program_tier_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_part_program_tier_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_part_program_tier_value']['expose']['label'] = 'Program Tier';
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title_field_value']['expose']['label'] = 'Name';
  /* Sort criterion: Content: Solution Type (field_part_solution_type) */
  $handler->display->display_options['sorts']['field_part_solution_type_tid']['id'] = 'field_part_solution_type_tid';
  $handler->display->display_options['sorts']['field_part_solution_type_tid']['table'] = 'field_data_field_part_solution_type';
  $handler->display->display_options['sorts']['field_part_solution_type_tid']['field'] = 'field_part_solution_type_tid';
  $handler->display->display_options['sorts']['field_part_solution_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_part_solution_type_tid']['expose']['label'] = 'Solution Type';
  /* Sort criterion: Content: Services (field_part_services) */
  $handler->display->display_options['sorts']['field_part_services_tid']['id'] = 'field_part_services_tid';
  $handler->display->display_options['sorts']['field_part_services_tid']['table'] = 'field_data_field_part_services';
  $handler->display->display_options['sorts']['field_part_services_tid']['field'] = 'field_part_services_tid';
  $handler->display->display_options['sorts']['field_part_services_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_part_services_tid']['expose']['label'] = 'Services';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'esri_partners' => 'esri_partners',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Services (field_part_services) */
  $handler->display->display_options['filters']['field_part_services_tid']['id'] = 'field_part_services_tid';
  $handler->display->display_options['filters']['field_part_services_tid']['table'] = 'field_data_field_part_services';
  $handler->display->display_options['filters']['field_part_services_tid']['field'] = 'field_part_services_tid';
  $handler->display->display_options['filters']['field_part_services_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_part_services_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_part_services_tid']['expose']['operator_id'] = 'field_part_services_tid_op';
  $handler->display->display_options['filters']['field_part_services_tid']['expose']['label'] = 'Services';
  $handler->display->display_options['filters']['field_part_services_tid']['expose']['operator'] = 'field_part_services_tid_op';
  $handler->display->display_options['filters']['field_part_services_tid']['expose']['identifier'] = 'field_part_services_tid';
  $handler->display->display_options['filters']['field_part_services_tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_part_services_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_part_services_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_part_services_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_part_services_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_part_services_tid']['vocabulary'] = 'resource_services';
  $handler->display->display_options['filters']['field_part_services_tid']['error_message'] = 0;
  /* Filter criterion: Content: Industry (field_part_industry) */
  $handler->display->display_options['filters']['field_part_industry_tid']['id'] = 'field_part_industry_tid';
  $handler->display->display_options['filters']['field_part_industry_tid']['table'] = 'field_data_field_part_industry';
  $handler->display->display_options['filters']['field_part_industry_tid']['field'] = 'field_part_industry_tid';
  $handler->display->display_options['filters']['field_part_industry_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_part_industry_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_part_industry_tid']['expose']['operator_id'] = 'field_part_industry_tid_op';
  $handler->display->display_options['filters']['field_part_industry_tid']['expose']['label'] = 'Industrys';
  $handler->display->display_options['filters']['field_part_industry_tid']['expose']['operator'] = 'field_part_industry_tid_op';
  $handler->display->display_options['filters']['field_part_industry_tid']['expose']['identifier'] = 'field_part_industry_tid';
  $handler->display->display_options['filters']['field_part_industry_tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_part_industry_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_part_industry_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_part_industry_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_part_industry_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_part_industry_tid']['vocabulary'] = 'resource_industry';
  $handler->display->display_options['filters']['field_part_industry_tid']['error_message'] = 0;
  /* Filter criterion: Content: Solution Type (field_part_solution_type) */
  $handler->display->display_options['filters']['field_part_solution_type_tid']['id'] = 'field_part_solution_type_tid';
  $handler->display->display_options['filters']['field_part_solution_type_tid']['table'] = 'field_data_field_part_solution_type';
  $handler->display->display_options['filters']['field_part_solution_type_tid']['field'] = 'field_part_solution_type_tid';
  $handler->display->display_options['filters']['field_part_solution_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_part_solution_type_tid']['expose']['operator_id'] = 'field_part_solution_type_tid_op';
  $handler->display->display_options['filters']['field_part_solution_type_tid']['expose']['label'] = 'Solution Type';
  $handler->display->display_options['filters']['field_part_solution_type_tid']['expose']['operator'] = 'field_part_solution_type_tid_op';
  $handler->display->display_options['filters']['field_part_solution_type_tid']['expose']['identifier'] = 'field_part_solution_type_tid';
  $handler->display->display_options['filters']['field_part_solution_type_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_part_solution_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_part_solution_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_part_solution_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_part_solution_type_tid']['vocabulary'] = 'solution_type';
  $handler->display->display_options['filters']['field_part_solution_type_tid']['error_message'] = 1;
  /* Filter criterion: Content: Program Tier (field_part_program_tier) */
  $handler->display->display_options['filters']['field_part_program_tier_value']['id'] = 'field_part_program_tier_value';
  $handler->display->display_options['filters']['field_part_program_tier_value']['table'] = 'field_data_field_part_program_tier';
  $handler->display->display_options['filters']['field_part_program_tier_value']['field'] = 'field_part_program_tier_value';
  $handler->display->display_options['filters']['field_part_program_tier_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_part_program_tier_value']['expose']['operator_id'] = 'field_part_program_tier_value_op';
  $handler->display->display_options['filters']['field_part_program_tier_value']['expose']['label'] = 'Program Tier';
  $handler->display->display_options['filters']['field_part_program_tier_value']['expose']['operator'] = 'field_part_program_tier_value_op';
  $handler->display->display_options['filters']['field_part_program_tier_value']['expose']['identifier'] = 'field_part_program_tier_value';
  $handler->display->display_options['filters']['field_part_program_tier_value']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_part_program_tier_value']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'partners';

  /* Display: Contact Info - Content pane */
  $handler = $view->new_display('panel_pane', 'Contact Info - Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contact Information';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Contact Address */
  $handler->display->display_options['fields']['field_part_contact_address']['id'] = 'field_part_contact_address';
  $handler->display->display_options['fields']['field_part_contact_address']['table'] = 'field_data_field_part_contact_address';
  $handler->display->display_options['fields']['field_part_contact_address']['field'] = 'field_part_contact_address';
  $handler->display->display_options['fields']['field_part_contact_address']['label'] = '';
  $handler->display->display_options['fields']['field_part_contact_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_part_contact_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_part_contact_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_part_contact_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_part_contact_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_part_contact_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_part_contact_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_part_contact_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_part_contact_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_part_contact_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_part_contact_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_part_contact_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_part_contact_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_part_contact_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_part_contact_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_part_contact_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_part_contact_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_part_contact_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_part_contact_address']['field_api_classes'] = 0;
  /* Field: Content: Contact Email */
  $handler->display->display_options['fields']['field_part_contact_email']['id'] = 'field_part_contact_email';
  $handler->display->display_options['fields']['field_part_contact_email']['table'] = 'field_data_field_part_contact_email';
  $handler->display->display_options['fields']['field_part_contact_email']['field'] = 'field_part_contact_email';
  $handler->display->display_options['fields']['field_part_contact_email']['label'] = '';
  $handler->display->display_options['fields']['field_part_contact_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_part_contact_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_part_contact_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_part_contact_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_part_contact_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_part_contact_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_part_contact_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_part_contact_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_part_contact_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_part_contact_email']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_part_contact_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_part_contact_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_part_contact_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_part_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_part_contact_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_part_contact_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_part_contact_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_part_contact_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_part_contact_email']['field_api_classes'] = 0;
  /* Field: Content: Contact Fax */
  $handler->display->display_options['fields']['field_part_contact_fax']['id'] = 'field_part_contact_fax';
  $handler->display->display_options['fields']['field_part_contact_fax']['table'] = 'field_data_field_part_contact_fax';
  $handler->display->display_options['fields']['field_part_contact_fax']['field'] = 'field_part_contact_fax';
  $handler->display->display_options['fields']['field_part_contact_fax']['label'] = '';
  $handler->display->display_options['fields']['field_part_contact_fax']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_part_contact_fax']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_part_contact_fax']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_part_contact_fax']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_part_contact_fax']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_part_contact_fax']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_part_contact_fax']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_part_contact_fax']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_part_contact_fax']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_part_contact_fax']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_part_contact_fax']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_part_contact_fax']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_part_contact_fax']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_part_contact_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_part_contact_fax']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_part_contact_fax']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_part_contact_fax']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_part_contact_fax']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_part_contact_fax']['field_api_classes'] = 0;
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_part_contact_name']['id'] = 'field_part_contact_name';
  $handler->display->display_options['fields']['field_part_contact_name']['table'] = 'field_data_field_part_contact_name';
  $handler->display->display_options['fields']['field_part_contact_name']['field'] = 'field_part_contact_name';
  $handler->display->display_options['fields']['field_part_contact_name']['label'] = '';
  $handler->display->display_options['fields']['field_part_contact_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_part_contact_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_part_contact_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_part_contact_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_part_contact_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_part_contact_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_part_contact_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_part_contact_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_part_contact_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_part_contact_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_part_contact_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_part_contact_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_part_contact_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_part_contact_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_part_contact_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_part_contact_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_part_contact_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_part_contact_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_part_contact_name']['field_api_classes'] = 0;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_part_contact_phone']['id'] = 'field_part_contact_phone';
  $handler->display->display_options['fields']['field_part_contact_phone']['table'] = 'field_data_field_part_contact_phone';
  $handler->display->display_options['fields']['field_part_contact_phone']['field'] = 'field_part_contact_phone';
  $handler->display->display_options['fields']['field_part_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_part_contact_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_part_contact_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_part_contact_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_part_contact_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_part_contact_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_part_contact_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_part_contact_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_part_contact_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_part_contact_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_part_contact_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_part_contact_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_part_contact_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_part_contact_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_part_contact_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_part_contact_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_part_contact_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_part_contact_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_part_contact_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_part_contact_phone']['field_api_classes'] = 0;
  /* Field: Content: Contact Position */
  $handler->display->display_options['fields']['field_part_contact_position']['id'] = 'field_part_contact_position';
  $handler->display->display_options['fields']['field_part_contact_position']['table'] = 'field_data_field_part_contact_position';
  $handler->display->display_options['fields']['field_part_contact_position']['field'] = 'field_part_contact_position';
  $handler->display->display_options['fields']['field_part_contact_position']['label'] = '';
  $handler->display->display_options['fields']['field_part_contact_position']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_part_contact_position']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_part_contact_position']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_part_contact_position']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_part_contact_position']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_part_contact_position']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_part_contact_position']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_part_contact_position']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_part_contact_position']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_part_contact_position']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_part_contact_position']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_part_contact_position']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_part_contact_position']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_part_contact_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_part_contact_position']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_part_contact_position']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_part_contact_position']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_part_contact_position']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_part_contact_position']['field_api_classes'] = 0;
  /* Field: Content: Contact Website */
  $handler->display->display_options['fields']['field_part_contact_website']['id'] = 'field_part_contact_website';
  $handler->display->display_options['fields']['field_part_contact_website']['table'] = 'field_data_field_part_contact_website';
  $handler->display->display_options['fields']['field_part_contact_website']['field'] = 'field_part_contact_website';
  $handler->display->display_options['fields']['field_part_contact_website']['label'] = '';
  $handler->display->display_options['fields']['field_part_contact_website']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_part_contact_website']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_part_contact_website']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_part_contact_website']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_part_contact_website']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_part_contact_website']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_part_contact_website']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_part_contact_website']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_part_contact_website']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_part_contact_website']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_part_contact_website']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_part_contact_website']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_part_contact_website']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_part_contact_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_part_contact_website']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_part_contact_website']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_part_contact_website']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_part_contact_website']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_part_contact_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_part_contact_website']['field_api_classes'] = 0;
  /* Field: Content: Link to profile */
  $handler->display->display_options['fields']['field_part_link_to_profile']['id'] = 'field_part_link_to_profile';
  $handler->display->display_options['fields']['field_part_link_to_profile']['table'] = 'field_data_field_part_link_to_profile';
  $handler->display->display_options['fields']['field_part_link_to_profile']['field'] = 'field_part_link_to_profile';
  $handler->display->display_options['fields']['field_part_link_to_profile']['label'] = '';
  $handler->display->display_options['fields']['field_part_link_to_profile']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_part_link_to_profile']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_part_link_to_profile']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_part_link_to_profile']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_part_link_to_profile']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_part_link_to_profile']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_part_link_to_profile']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_part_link_to_profile']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_part_link_to_profile']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_part_link_to_profile']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_part_link_to_profile']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_part_link_to_profile']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_part_link_to_profile']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_part_link_to_profile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_part_link_to_profile']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_part_link_to_profile']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_part_link_to_profile']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_part_link_to_profile']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_part_link_to_profile']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_part_link_to_profile']['type'] = 'link_title_link';
  $handler->display->display_options['fields']['field_part_link_to_profile']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $translatables['esri_partners'] = array(
    t('Master'),
    t('Esri Partners'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Ascending'),
    t('Descending'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('No resources were found with the given criteria.'),
    t('Solution Type'),
    t('Partner Type'),
    t('Services'),
    t('Program Tier'),
    t('Industry'),
    t('Name'),
    t('Keywords'),
    t('Industrys'),
    t('Page'),
    t('Contact Info - Content pane'),
    t('Contact Information'),
    t('All'),
    t('View panes'),
  );
  $export['esri_partners'] = $view;

  return $export;
}
