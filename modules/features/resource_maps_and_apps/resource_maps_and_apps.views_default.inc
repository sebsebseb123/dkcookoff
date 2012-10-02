<?php
/**
 * @file
 * resource_maps_and_apps.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function resource_maps_and_apps_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'resource_maps_and_apps';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resource - Maps and Apps';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Maps and Apps';
  $handler->display->display_options['css_class'] = 'view-resources';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
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
  /* Field: PHP - Center Content Start */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'PHP - Center Content Start';
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
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_field']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_field']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_field']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_field']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_field']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_field']['field_api_classes'] = 0;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_ma_subtitle']['id'] = 'field_ma_subtitle';
  $handler->display->display_options['fields']['field_ma_subtitle']['table'] = 'field_data_field_ma_subtitle';
  $handler->display->display_options['fields']['field_ma_subtitle']['field'] = 'field_ma_subtitle';
  $handler->display->display_options['fields']['field_ma_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_ma_subtitle']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ma_subtitle']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ma_subtitle']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ma_subtitle']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ma_subtitle']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ma_subtitle']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ma_subtitle']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ma_subtitle']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ma_subtitle']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ma_subtitle']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ma_subtitle']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ma_subtitle']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ma_subtitle']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ma_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ma_subtitle']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ma_subtitle']['element_wrapper_class'] = 'use-helvetica resource-subtitle';
  $handler->display->display_options['fields']['field_ma_subtitle']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ma_subtitle']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ma_subtitle']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ma_subtitle']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ma_subtitle']['field_api_classes'] = 0;
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_ma_publication_date']['id'] = 'field_ma_publication_date';
  $handler->display->display_options['fields']['field_ma_publication_date']['table'] = 'field_data_field_ma_publication_date';
  $handler->display->display_options['fields']['field_ma_publication_date']['field'] = 'field_ma_publication_date';
  $handler->display->display_options['fields']['field_ma_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_ma_publication_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ma_publication_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ma_publication_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ma_publication_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ma_publication_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ma_publication_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ma_publication_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ma_publication_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ma_publication_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ma_publication_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ma_publication_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ma_publication_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ma_publication_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ma_publication_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ma_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ma_publication_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ma_publication_date']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_ma_publication_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ma_publication_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ma_publication_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ma_publication_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ma_publication_date']['settings'] = array(
    'format_type' => 'standard',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ma_publication_date']['field_api_classes'] = 0;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_ma_organization']['id'] = 'field_ma_organization';
  $handler->display->display_options['fields']['field_ma_organization']['table'] = 'field_data_field_ma_organization';
  $handler->display->display_options['fields']['field_ma_organization']['field'] = 'field_ma_organization';
  $handler->display->display_options['fields']['field_ma_organization']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ma_organization']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ma_organization']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ma_organization']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ma_organization']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ma_organization']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ma_organization']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ma_organization']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ma_organization']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ma_organization']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ma_organization']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ma_organization']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ma_organization']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ma_organization']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ma_organization']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_ma_organization']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ma_organization']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ma_organization']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_ma_organization']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ma_organization']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_ma_organization']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ma_organization']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ma_organization']['field_api_classes'] = 0;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_ma_industry']['id'] = 'field_ma_industry';
  $handler->display->display_options['fields']['field_ma_industry']['table'] = 'field_data_field_ma_industry';
  $handler->display->display_options['fields']['field_ma_industry']['field'] = 'field_ma_industry';
  $handler->display->display_options['fields']['field_ma_industry']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ma_industry']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_ma_industry']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ma_industry']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ma_industry']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_ma_industry']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ma_industry']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_ma_industry']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ma_industry']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ma_industry']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ma_industry']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ma_industry']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['field_api_classes'] = 0;
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_ma_product']['id'] = 'field_ma_product';
  $handler->display->display_options['fields']['field_ma_product']['table'] = 'field_data_field_ma_product';
  $handler->display->display_options['fields']['field_ma_product']['field'] = 'field_ma_product';
  $handler->display->display_options['fields']['field_ma_product']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ma_product']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ma_product']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ma_product']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_ma_product']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ma_product']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ma_product']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_ma_product']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ma_product']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_ma_product']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ma_product']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ma_product']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ma_product']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ma_product']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]</div>';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '210';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'resource-body';
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: PHP - Center Content End */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['ui_name'] = 'PHP - Center Content End';
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
  /* Field: Content: Image (Thumbnail) */
  $handler->display->display_options['fields']['field_image_thumbnail_']['id'] = 'field_image_thumbnail_';
  $handler->display->display_options['fields']['field_image_thumbnail_']['table'] = 'field_data_field_image_thumbnail_';
  $handler->display->display_options['fields']['field_image_thumbnail_']['field'] = 'field_image_thumbnail_';
  $handler->display->display_options['fields']['field_image_thumbnail_']['label'] = '';
  $handler->display->display_options['fields']['field_image_thumbnail_']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image_thumbnail_']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image_thumbnail_']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image_thumbnail_']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image_thumbnail_']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image_thumbnail_']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image_thumbnail_']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image_thumbnail_']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_thumbnail_']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_thumbnail_']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_image_thumbnail_']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_thumbnail_']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image_thumbnail_']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image_thumbnail_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_thumbnail_']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image_thumbnail_']['element_wrapper_class'] = 'resource-thumb';
  $handler->display->display_options['fields']['field_image_thumbnail_']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image_thumbnail_']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_thumbnail_']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_thumbnail_']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image_thumbnail_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_thumbnail_']['settings'] = array(
    'image_style' => 'resources_maps_apps_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image_thumbnail_']['field_api_classes'] = 0;
  /* Sort criterion: Content: Publication Date (field_ma_publication_date) */
  $handler->display->display_options['sorts']['field_ma_publication_date_value']['id'] = 'field_ma_publication_date_value';
  $handler->display->display_options['sorts']['field_ma_publication_date_value']['table'] = 'field_data_field_ma_publication_date';
  $handler->display->display_options['sorts']['field_ma_publication_date_value']['field'] = 'field_ma_publication_date_value';
  $handler->display->display_options['sorts']['field_ma_publication_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_ma_publication_date_value']['expose']['label'] = 'Date';
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title_field_value']['expose']['label'] = 'Name';
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
    'resource_maps_and_apps' => 'resource_maps_and_apps',
  );
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['keys']['expose']['remember'] = 1;
  /* Filter criterion: Content: Industry (field_ma_industry) */
  $handler->display->display_options['filters']['field_ma_industry_tid']['id'] = 'field_ma_industry_tid';
  $handler->display->display_options['filters']['field_ma_industry_tid']['table'] = 'field_data_field_ma_industry';
  $handler->display->display_options['filters']['field_ma_industry_tid']['field'] = 'field_ma_industry_tid';
  $handler->display->display_options['filters']['field_ma_industry_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ma_industry_tid']['expose']['operator_id'] = 'field_ma_industry_tid_op';
  $handler->display->display_options['filters']['field_ma_industry_tid']['expose']['label'] = 'Industries';
  $handler->display->display_options['filters']['field_ma_industry_tid']['expose']['operator'] = 'field_ma_industry_tid_op';
  $handler->display->display_options['filters']['field_ma_industry_tid']['expose']['identifier'] = 'field_ma_industry_tid';
  $handler->display->display_options['filters']['field_ma_industry_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_ma_industry_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_ma_industry_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ma_industry_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ma_industry_tid']['vocabulary'] = 'resource_industry';
  $handler->display->display_options['filters']['field_ma_industry_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_ma_industry_tid']['error_message'] = 0;
  $handler->display->display_options['filters']['field_ma_industry_tid']['expose']['remember'] = 1;
  /* Filter criterion: Content: Product (field_ma_product) */
  $handler->display->display_options['filters']['field_ma_product_tid']['id'] = 'field_ma_product_tid';
  $handler->display->display_options['filters']['field_ma_product_tid']['table'] = 'field_data_field_ma_product';
  $handler->display->display_options['filters']['field_ma_product_tid']['field'] = 'field_ma_product_tid';
  $handler->display->display_options['filters']['field_ma_product_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ma_product_tid']['expose']['operator_id'] = 'field_ma_product_tid_op';
  $handler->display->display_options['filters']['field_ma_product_tid']['expose']['label'] = 'Products';
  $handler->display->display_options['filters']['field_ma_product_tid']['expose']['operator'] = 'field_ma_product_tid_op';
  $handler->display->display_options['filters']['field_ma_product_tid']['expose']['identifier'] = 'field_ma_product_tid';
  $handler->display->display_options['filters']['field_ma_product_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_ma_product_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_ma_product_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ma_product_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ma_product_tid']['vocabulary'] = 'resource_product';
  $handler->display->display_options['filters']['field_ma_product_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_ma_product_tid']['error_message'] = 0;
  $handler->display->display_options['filters']['field_ma_product_tid']['expose']['remember'] = 1;
  /* Filter criterion: Content: Publication Date (field_ma_publication_date) */
  $handler->display->display_options['filters']['field_ma_publication_date_value']['id'] = 'field_ma_publication_date_value';
  $handler->display->display_options['filters']['field_ma_publication_date_value']['table'] = 'field_data_field_ma_publication_date';
  $handler->display->display_options['filters']['field_ma_publication_date_value']['field'] = 'field_ma_publication_date_value';
  $handler->display->display_options['filters']['field_ma_publication_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_ma_publication_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ma_publication_date_value']['expose']['operator_id'] = 'field_ma_publication_date_value_op';
  $handler->display->display_options['filters']['field_ma_publication_date_value']['expose']['label'] = 'On or After this Date';
  $handler->display->display_options['filters']['field_ma_publication_date_value']['expose']['operator'] = 'field_ma_publication_date_value_op';
  $handler->display->display_options['filters']['field_ma_publication_date_value']['expose']['identifier'] = 'field_ma_publication_date_value';
  $handler->display->display_options['filters']['field_ma_publication_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_ma_publication_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_ma_publication_date_value']['year_range'] = '-6:+1';
  $handler->display->display_options['filters']['field_ma_publication_date_value']['expose']['remember'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'resources/maps-and-apps';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Key Information';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_ma_industry']['id'] = 'field_ma_industry';
  $handler->display->display_options['fields']['field_ma_industry']['table'] = 'field_data_field_ma_industry';
  $handler->display->display_options['fields']['field_ma_industry']['field'] = 'field_ma_industry';
  $handler->display->display_options['fields']['field_ma_industry']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ma_industry']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_ma_industry']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ma_industry']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ma_industry']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_ma_industry']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ma_industry']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_ma_industry']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ma_industry']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ma_industry']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ma_industry']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ma_industry']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ma_industry']['field_api_classes'] = 0;
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_ma_product']['id'] = 'field_ma_product';
  $handler->display->display_options['fields']['field_ma_product']['table'] = 'field_data_field_ma_product';
  $handler->display->display_options['fields']['field_ma_product']['field'] = 'field_ma_product';
  $handler->display->display_options['fields']['field_ma_product']['label'] = 'Products';
  $handler->display->display_options['fields']['field_ma_product']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ma_product']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ma_product']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ma_product']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_ma_product']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ma_product']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ma_product']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_ma_product']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ma_product']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_ma_product']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ma_product']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ma_product']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ma_product']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ma_product']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ma_product']['field_api_classes'] = 0;
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
  $translatables['resource_maps_and_apps'] = array(
    t('Master'),
    t('Maps and Apps'),
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
    t('Organization'),
    t('Industry'),
    t('Product'),
    t('[body]</div>'),
    t('Date'),
    t('Name'),
    t('Keywords'),
    t('Industries'),
    t('Products'),
    t('On or After this Date'),
    t('Page'),
    t('Content pane'),
    t('Key Information'),
    t('Products'),
    t('All'),
    t('View panes'),
  );
  $export['resource_maps_and_apps'] = $view;

  return $export;
}
