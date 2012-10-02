<?php
/**
 * @file
 * resource_teaching_materials.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function resource_teaching_materials_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'resource_teaching_materials';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resource - Education Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Education Resources';
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
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_cr_subtitle']['id'] = 'field_cr_subtitle';
  $handler->display->display_options['fields']['field_cr_subtitle']['table'] = 'field_data_field_cr_subtitle';
  $handler->display->display_options['fields']['field_cr_subtitle']['field'] = 'field_cr_subtitle';
  $handler->display->display_options['fields']['field_cr_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_cr_subtitle']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cr_subtitle']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_subtitle']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_subtitle']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_subtitle']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_subtitle']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_subtitle']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_subtitle']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_subtitle']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_subtitle']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_subtitle']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_subtitle']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_subtitle']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cr_subtitle']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cr_subtitle']['element_wrapper_class'] = 'use-helvetica';
  $handler->display->display_options['fields']['field_cr_subtitle']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cr_subtitle']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cr_subtitle']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_subtitle']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_subtitle']['field_api_classes'] = 0;
  /* Field: Content: Difficulty Level */
  $handler->display->display_options['fields']['field_tm_difficulty_level']['id'] = 'field_tm_difficulty_level';
  $handler->display->display_options['fields']['field_tm_difficulty_level']['table'] = 'field_data_field_tm_difficulty_level';
  $handler->display->display_options['fields']['field_tm_difficulty_level']['field'] = 'field_tm_difficulty_level';
  $handler->display->display_options['fields']['field_tm_difficulty_level']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tm_difficulty_level']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_tm_difficulty_level']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_tm_difficulty_level']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_tm_difficulty_level']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tm_difficulty_level']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tm_difficulty_level']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_tm_difficulty_level']['field_api_classes'] = 0;
  /* Field: Content: File Type */
  $handler->display->display_options['fields']['field_tm_file_type']['id'] = 'field_tm_file_type';
  $handler->display->display_options['fields']['field_tm_file_type']['table'] = 'field_data_field_tm_file_type';
  $handler->display->display_options['fields']['field_tm_file_type']['field'] = 'field_tm_file_type';
  $handler->display->display_options['fields']['field_tm_file_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tm_file_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tm_file_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tm_file_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tm_file_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tm_file_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tm_file_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tm_file_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tm_file_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tm_file_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tm_file_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tm_file_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tm_file_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tm_file_type']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tm_file_type']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_tm_file_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tm_file_type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_tm_file_type']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_tm_file_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tm_file_type']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_file_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tm_file_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_file_type']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tm_file_type']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_tm_file_type']['field_api_classes'] = 0;
  /* Field: Content: Geographic Focus */
  $handler->display->display_options['fields']['field_tm_geographic_focus']['id'] = 'field_tm_geographic_focus';
  $handler->display->display_options['fields']['field_tm_geographic_focus']['table'] = 'field_data_field_tm_geographic_focus';
  $handler->display->display_options['fields']['field_tm_geographic_focus']['field'] = 'field_tm_geographic_focus';
  $handler->display->display_options['fields']['field_tm_geographic_focus']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tm_geographic_focus']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_tm_geographic_focus']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_tm_geographic_focus']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_tm_geographic_focus']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tm_geographic_focus']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_tm_geographic_focus']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tm_geographic_focus']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_tm_geographic_focus']['field_api_classes'] = 0;
  /* Field: Content: Platform: Education */
  $handler->display->display_options['fields']['field_tm_platform_education']['id'] = 'field_tm_platform_education';
  $handler->display->display_options['fields']['field_tm_platform_education']['table'] = 'field_data_field_tm_platform_education';
  $handler->display->display_options['fields']['field_tm_platform_education']['field'] = 'field_tm_platform_education';
  $handler->display->display_options['fields']['field_tm_platform_education']['label'] = 'Platform';
  $handler->display->display_options['fields']['field_tm_platform_education']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tm_platform_education']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tm_platform_education']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tm_platform_education']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tm_platform_education']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tm_platform_education']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tm_platform_education']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tm_platform_education']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tm_platform_education']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tm_platform_education']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tm_platform_education']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tm_platform_education']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tm_platform_education']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tm_platform_education']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tm_platform_education']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_tm_platform_education']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tm_platform_education']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_tm_platform_education']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_tm_platform_education']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tm_platform_education']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_platform_education']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tm_platform_education']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_platform_education']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tm_platform_education']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_tm_platform_education']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tm_platform_education']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_tm_platform_education']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_tm_platform_education']['field_api_classes'] = 0;
  /* Field: Content: Product: Education */
  $handler->display->display_options['fields']['field_tm_product_education']['id'] = 'field_tm_product_education';
  $handler->display->display_options['fields']['field_tm_product_education']['table'] = 'field_data_field_tm_product_education';
  $handler->display->display_options['fields']['field_tm_product_education']['field'] = 'field_tm_product_education';
  $handler->display->display_options['fields']['field_tm_product_education']['label'] = 'Product';
  $handler->display->display_options['fields']['field_tm_product_education']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tm_product_education']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tm_product_education']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tm_product_education']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tm_product_education']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tm_product_education']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tm_product_education']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tm_product_education']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tm_product_education']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tm_product_education']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tm_product_education']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tm_product_education']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tm_product_education']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tm_product_education']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tm_product_education']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_tm_product_education']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tm_product_education']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_tm_product_education']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_tm_product_education']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tm_product_education']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_product_education']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tm_product_education']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_product_education']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tm_product_education']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_tm_product_education']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_tm_product_education']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tm_product_education']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_tm_product_education']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_tm_product_education']['field_api_classes'] = 0;
  /* Field: Content: Grade */
  $handler->display->display_options['fields']['field_tm_grade']['id'] = 'field_tm_grade';
  $handler->display->display_options['fields']['field_tm_grade']['table'] = 'field_data_field_tm_grade';
  $handler->display->display_options['fields']['field_tm_grade']['field'] = 'field_tm_grade';
  $handler->display->display_options['fields']['field_tm_grade']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tm_grade']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tm_grade']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tm_grade']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tm_grade']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tm_grade']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tm_grade']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tm_grade']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tm_grade']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tm_grade']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tm_grade']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tm_grade']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tm_grade']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tm_grade']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tm_grade']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_tm_grade']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tm_grade']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_tm_grade']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_tm_grade']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tm_grade']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_grade']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tm_grade']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_grade']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tm_grade']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_tm_grade']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_tm_grade']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tm_grade']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_tm_grade']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_tm_grade']['field_api_classes'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_tm_resource_type']['id'] = 'field_tm_resource_type';
  $handler->display->display_options['fields']['field_tm_resource_type']['table'] = 'field_data_field_tm_resource_type';
  $handler->display->display_options['fields']['field_tm_resource_type']['field'] = 'field_tm_resource_type';
  $handler->display->display_options['fields']['field_tm_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_tm_resource_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tm_resource_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tm_resource_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tm_resource_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tm_resource_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tm_resource_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tm_resource_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tm_resource_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tm_resource_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tm_resource_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tm_resource_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tm_resource_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tm_resource_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tm_resource_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tm_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tm_resource_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tm_resource_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tm_resource_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tm_resource_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_resource_type']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tm_resource_type']['field_api_classes'] = 0;
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

if (isset($data->field_field_tm_resource_type) && isset($data->field_field_tm_resource_type[0][\'raw\'][\'tid\'])) {

	//Type Id
	$tid = $data->field_field_tm_resource_type[0][\'raw\'][\'tid\'];

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
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title_field_value']['expose']['label'] = 'Name';
  /* Sort criterion: Content: Type (field_tm_resource_type) */
  $handler->display->display_options['sorts']['field_tm_resource_type_tid']['id'] = 'field_tm_resource_type_tid';
  $handler->display->display_options['sorts']['field_tm_resource_type_tid']['table'] = 'field_data_field_tm_resource_type';
  $handler->display->display_options['sorts']['field_tm_resource_type_tid']['field'] = 'field_tm_resource_type_tid';
  $handler->display->display_options['sorts']['field_tm_resource_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_tm_resource_type_tid']['expose']['label'] = 'Type';
  /* Sort criterion: Content: Platform: Education (field_tm_platform_education) */
  $handler->display->display_options['sorts']['field_tm_platform_education_tid']['id'] = 'field_tm_platform_education_tid';
  $handler->display->display_options['sorts']['field_tm_platform_education_tid']['table'] = 'field_data_field_tm_platform_education';
  $handler->display->display_options['sorts']['field_tm_platform_education_tid']['field'] = 'field_tm_platform_education_tid';
  $handler->display->display_options['sorts']['field_tm_platform_education_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_tm_platform_education_tid']['expose']['label'] = 'Platform';
  /* Sort criterion: Content: File Type (field_tm_file_type) */
  $handler->display->display_options['sorts']['field_tm_file_type_tid']['id'] = 'field_tm_file_type_tid';
  $handler->display->display_options['sorts']['field_tm_file_type_tid']['table'] = 'field_data_field_tm_file_type';
  $handler->display->display_options['sorts']['field_tm_file_type_tid']['field'] = 'field_tm_file_type_tid';
  $handler->display->display_options['sorts']['field_tm_file_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_tm_file_type_tid']['expose']['label'] = 'File Type';
  /* Sort criterion: Content: Difficulty Level (field_tm_difficulty_level) */
  $handler->display->display_options['sorts']['field_tm_difficulty_level_tid']['id'] = 'field_tm_difficulty_level_tid';
  $handler->display->display_options['sorts']['field_tm_difficulty_level_tid']['table'] = 'field_data_field_tm_difficulty_level';
  $handler->display->display_options['sorts']['field_tm_difficulty_level_tid']['field'] = 'field_tm_difficulty_level_tid';
  $handler->display->display_options['sorts']['field_tm_difficulty_level_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_tm_difficulty_level_tid']['expose']['label'] = 'Difficulty Level';
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
    'resource_teaching_materials' => 'resource_teaching_materials',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['keys']['expose']['remember'] = 1;
  /* Filter criterion: Content: Creation Date (field_cr_publication_date) */
  $handler->display->display_options['filters']['field_cr_publication_date_value']['id'] = 'field_cr_publication_date_value';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['table'] = 'field_data_field_cr_publication_date';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['field'] = 'field_cr_publication_date_value';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_cr_publication_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cr_publication_date_value']['expose']['operator_id'] = 'field_cr_publication_date_value_op';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['expose']['label'] = 'On or After this Date';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['expose']['operator'] = 'field_cr_publication_date_value_op';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['expose']['identifier'] = 'field_cr_publication_date_value';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_cr_publication_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['year_range'] = '-6:+1';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['expose']['remember'] = 1;
  /* Filter criterion: Content: Type (field_tm_resource_type) */
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['id'] = 'field_tm_resource_type_tid';
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['table'] = 'field_data_field_tm_resource_type';
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['field'] = 'field_tm_resource_type_tid';
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['expose']['operator_id'] = 'field_tm_resource_type_tid_op';
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['expose']['label'] = 'Types';
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['expose']['operator'] = 'field_tm_resource_type_tid_op';
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['expose']['identifier'] = 'field_tm_resource_type_tid';
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['vocabulary'] = 'teaching_material_type';
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['error_message'] = 0;
  $handler->display->display_options['filters']['field_tm_resource_type_tid']['expose']['remember'] = 1;
  /* Filter criterion: Content: Geographic Focus (field_tm_geographic_focus) */
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['id'] = 'field_tm_geographic_focus_tid';
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['table'] = 'field_data_field_tm_geographic_focus';
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['field'] = 'field_tm_geographic_focus_tid';
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['expose']['operator_id'] = 'field_tm_geographic_focus_tid_op';
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['expose']['label'] = 'Geographic Focus';
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['expose']['operator'] = 'field_tm_geographic_focus_tid_op';
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['expose']['identifier'] = 'field_tm_geographic_focus_tid';
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['vocabulary'] = 'geographic_focus';
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['error_message'] = 0;
  $handler->display->display_options['filters']['field_tm_geographic_focus_tid']['expose']['remember'] = 1;
  /* Filter criterion: Content: Grade (field_tm_grade) */
  $handler->display->display_options['filters']['field_tm_grade_tid']['id'] = 'field_tm_grade_tid';
  $handler->display->display_options['filters']['field_tm_grade_tid']['table'] = 'field_data_field_tm_grade';
  $handler->display->display_options['filters']['field_tm_grade_tid']['field'] = 'field_tm_grade_tid';
  $handler->display->display_options['filters']['field_tm_grade_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tm_grade_tid']['expose']['operator_id'] = 'field_tm_grade_tid_op';
  $handler->display->display_options['filters']['field_tm_grade_tid']['expose']['label'] = 'Grades';
  $handler->display->display_options['filters']['field_tm_grade_tid']['expose']['operator'] = 'field_tm_grade_tid_op';
  $handler->display->display_options['filters']['field_tm_grade_tid']['expose']['identifier'] = 'field_tm_grade_tid';
  $handler->display->display_options['filters']['field_tm_grade_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_tm_grade_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_tm_grade_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_tm_grade_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tm_grade_tid']['vocabulary'] = 'grade';
  $handler->display->display_options['filters']['field_tm_grade_tid']['error_message'] = 0;
  $handler->display->display_options['filters']['field_tm_grade_tid']['expose']['remember'] = 1;
  /* Filter criterion: Content: Platform: Education (field_tm_platform_education) */
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['id'] = 'field_tm_platform_education_tid';
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['table'] = 'field_data_field_tm_platform_education';
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['field'] = 'field_tm_platform_education_tid';
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['expose']['operator_id'] = 'field_tm_platform_education_tid_op';
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['expose']['label'] = 'Platforms';
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['expose']['operator'] = 'field_tm_platform_education_tid_op';
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['expose']['identifier'] = 'field_tm_platform_education_tid';
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['vocabulary'] = 'platform_education';
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['error_message'] = 0;
  $handler->display->display_options['filters']['field_tm_platform_education_tid']['expose']['remember'] = 1;
  /* Filter criterion: Content: Subject Area (field_tm_subject_area) */
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['id'] = 'field_tm_subject_area_tid';
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['table'] = 'field_data_field_tm_subject_area';
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['field'] = 'field_tm_subject_area_tid';
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['expose']['operator_id'] = 'field_tm_subject_area_tid_op';
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['expose']['label'] = 'Subject Areas';
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['expose']['operator'] = 'field_tm_subject_area_tid_op';
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['expose']['identifier'] = 'field_tm_subject_area_tid';
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['vocabulary'] = 'subject_area';
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['error_message'] = 0;
  $handler->display->display_options['filters']['field_tm_subject_area_tid']['expose']['remember'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'resources/education-resources';

  /* Display: Author Info - Content pane */
  $handler = $view->new_display('panel_pane', 'Author Info - Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Author Information';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author Name */
  $handler->display->display_options['fields']['field_tm_author_name']['id'] = 'field_tm_author_name';
  $handler->display->display_options['fields']['field_tm_author_name']['table'] = 'field_data_field_tm_author_name';
  $handler->display->display_options['fields']['field_tm_author_name']['field'] = 'field_tm_author_name';
  $handler->display->display_options['fields']['field_tm_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_tm_author_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tm_author_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tm_author_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tm_author_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tm_author_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tm_author_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tm_author_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tm_author_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tm_author_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tm_author_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tm_author_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tm_author_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tm_author_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tm_author_name']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_tm_author_name']['element_class'] = 'author-name';
  $handler->display->display_options['fields']['field_tm_author_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tm_author_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tm_author_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tm_author_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tm_author_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_author_name']['field_api_classes'] = 0;
  /* Field: Content: Author Organization */
  $handler->display->display_options['fields']['field_tm_author_organization']['id'] = 'field_tm_author_organization';
  $handler->display->display_options['fields']['field_tm_author_organization']['table'] = 'field_data_field_tm_author_organization';
  $handler->display->display_options['fields']['field_tm_author_organization']['field'] = 'field_tm_author_organization';
  $handler->display->display_options['fields']['field_tm_author_organization']['label'] = '';
  $handler->display->display_options['fields']['field_tm_author_organization']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tm_author_organization']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tm_author_organization']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tm_author_organization']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tm_author_organization']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tm_author_organization']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tm_author_organization']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tm_author_organization']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tm_author_organization']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tm_author_organization']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tm_author_organization']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tm_author_organization']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tm_author_organization']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tm_author_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tm_author_organization']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tm_author_organization']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tm_author_organization']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tm_author_organization']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_author_organization']['field_api_classes'] = 0;
  /* Field: Content: Author Contact Information */
  $handler->display->display_options['fields']['field_tm_author_contact']['id'] = 'field_tm_author_contact';
  $handler->display->display_options['fields']['field_tm_author_contact']['table'] = 'field_data_field_tm_author_contact';
  $handler->display->display_options['fields']['field_tm_author_contact']['field'] = 'field_tm_author_contact';
  $handler->display->display_options['fields']['field_tm_author_contact']['label'] = '';
  $handler->display->display_options['fields']['field_tm_author_contact']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tm_author_contact']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tm_author_contact']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tm_author_contact']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tm_author_contact']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tm_author_contact']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tm_author_contact']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tm_author_contact']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tm_author_contact']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tm_author_contact']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tm_author_contact']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tm_author_contact']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tm_author_contact']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tm_author_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tm_author_contact']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tm_author_contact']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tm_author_contact']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tm_author_contact']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tm_author_contact']['field_api_classes'] = 0;
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
  $translatables['resource_teaching_materials'] = array(
    t('Master'),
    t('Education Resources'),
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
    t('Difficulty Level'),
    t('File Type'),
    t('Geographic Focus'),
    t('Platform'),
    t('Product'),
    t('Grade'),
    t('Name'),
    t('Type'),
    t('Language'),
    t('Keywords'),
    t('On or After this Date'),
    t('Types'),
    t('Grades'),
    t('Platforms'),
    t('Subject Areas'),
    t('Page'),
    t('Author Info - Content pane'),
    t('Author Information'),
    t('All'),
    t('View panes'),
  );
  $export['resource_teaching_materials'] = $view;

  return $export;
}
