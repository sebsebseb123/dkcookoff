<?php
/**
 * @file
 * resource_collateral_resources.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function resource_collateral_resources_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'resource_collateral_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resource - Collateral Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collateral Resources';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_cr_type']['id'] = 'field_cr_type';
  $handler->display->display_options['fields']['field_cr_type']['table'] = 'field_data_field_cr_type';
  $handler->display->display_options['fields']['field_cr_type']['field'] = 'field_cr_type';
  $handler->display->display_options['fields']['field_cr_type']['label'] = '';
  $handler->display->display_options['fields']['field_cr_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cr_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cr_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cr_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_type']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cr_type']['field_api_classes'] = 0;
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
  /* Field: Content: Drill Down Page */
  $handler->display->display_options['fields']['field_cr_drill_down_page']['id'] = 'field_cr_drill_down_page';
  $handler->display->display_options['fields']['field_cr_drill_down_page']['table'] = 'field_data_field_cr_drill_down_page';
  $handler->display->display_options['fields']['field_cr_drill_down_page']['field'] = 'field_cr_drill_down_page';
  $handler->display->display_options['fields']['field_cr_drill_down_page']['label'] = '';
  $handler->display->display_options['fields']['field_cr_drill_down_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['alter']['text'] = 'testtest';
  $handler->display->display_options['fields']['field_cr_drill_down_page']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_drill_down_page']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cr_drill_down_page']['field_api_classes'] = 0;
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
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_type'] = 'h3';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 1;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '
<?php

//Drill Down Options
$drilldown = $data->field_field_cr_drill_down_page[0][\'rendered\'][\'#markup\'];

//Link
$nodeLink = $data->node_language . \'/\' . drupal_lookup_path(\'alias\', \'node/\' . $row->nid);

//Make Title A Link
if ($drilldown==\'TRUE\') {
	$output = \'<a href="/\' . $nodeLink . \'">\' . $row->title . \'</a>\';
} else {
	$output = $row->title;
}

print_r($output);

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
  /* Field: Content: Publication Name */
  $handler->display->display_options['fields']['field_cr_publication_name']['id'] = 'field_cr_publication_name';
  $handler->display->display_options['fields']['field_cr_publication_name']['table'] = 'field_data_field_cr_publication_name';
  $handler->display->display_options['fields']['field_cr_publication_name']['field'] = 'field_cr_publication_name';
  $handler->display->display_options['fields']['field_cr_publication_name']['label'] = 'Publication';
  $handler->display->display_options['fields']['field_cr_publication_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_publication_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_publication_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_publication_name']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_publication_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cr_publication_name']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cr_publication_name']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_cr_publication_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cr_publication_name']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_publication_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_publication_name']['field_api_classes'] = 0;
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_cr_publication_date']['id'] = 'field_cr_publication_date';
  $handler->display->display_options['fields']['field_cr_publication_date']['table'] = 'field_data_field_cr_publication_date';
  $handler->display->display_options['fields']['field_cr_publication_date']['field'] = 'field_cr_publication_date';
  $handler->display->display_options['fields']['field_cr_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_cr_publication_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_publication_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_publication_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cr_publication_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cr_publication_date']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_cr_publication_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cr_publication_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_publication_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_publication_date']['settings'] = array(
    'format_type' => 'standard',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_cr_publication_date']['field_api_classes'] = 0;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_organization']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_organization']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_organization']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_organization']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_organization']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_organization']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_organization']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_organization']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_organization']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_organization']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_organization']['field_api_classes'] = 0;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_cr_industry']['id'] = 'field_cr_industry';
  $handler->display->display_options['fields']['field_cr_industry']['table'] = 'field_data_field_cr_industry';
  $handler->display->display_options['fields']['field_cr_industry']['field'] = 'field_cr_industry';
  $handler->display->display_options['fields']['field_cr_industry']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_industry']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_industry']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cr_industry']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cr_industry']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_cr_industry']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cr_industry']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_industry']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_industry']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cr_industry']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_cr_industry']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cr_industry']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['field_api_classes'] = 0;
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_cr_product']['id'] = 'field_cr_product';
  $handler->display->display_options['fields']['field_cr_product']['table'] = 'field_data_field_cr_product';
  $handler->display->display_options['fields']['field_cr_product']['field'] = 'field_cr_product';
  $handler->display->display_options['fields']['field_cr_product']['label'] = 'Products';
  $handler->display->display_options['fields']['field_cr_product']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_product']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_product']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_product']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_product']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cr_product']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cr_product']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_cr_product']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cr_product']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_product']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_product']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cr_product']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_cr_product']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cr_product']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['field_api_classes'] = 0;
  /* Field: Content: Services */
  $handler->display->display_options['fields']['field_cr_services']['id'] = 'field_cr_services';
  $handler->display->display_options['fields']['field_cr_services']['table'] = 'field_data_field_cr_services';
  $handler->display->display_options['fields']['field_cr_services']['field'] = 'field_cr_services';
  $handler->display->display_options['fields']['field_cr_services']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_services']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_services']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_services']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_services']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cr_services']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cr_services']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_cr_services']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cr_services']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_services']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_services']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cr_services']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_cr_services']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cr_services']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '700';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 0;
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
  /* Field: Resource URL - Well formatted, but always hidden */
  $handler->display->display_options['fields']['field_cr_resource_url']['id'] = 'field_cr_resource_url';
  $handler->display->display_options['fields']['field_cr_resource_url']['table'] = 'field_data_field_cr_resource_url';
  $handler->display->display_options['fields']['field_cr_resource_url']['field'] = 'field_cr_resource_url';
  $handler->display->display_options['fields']['field_cr_resource_url']['ui_name'] = 'Resource URL - Well formatted, but always hidden';
  $handler->display->display_options['fields']['field_cr_resource_url']['label'] = 'Resource Url';
  $handler->display->display_options['fields']['field_cr_resource_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cr_resource_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_resource_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_resource_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_resource_url']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_resource_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cr_resource_url']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cr_resource_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cr_resource_url']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_resource_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_resource_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cr_resource_url']['field_api_classes'] = 0;
  /* Field: Resource URL - Hide if empty OR Show the other resource URL */
  $handler->display->display_options['fields']['field_cr_resource_url_1']['id'] = 'field_cr_resource_url_1';
  $handler->display->display_options['fields']['field_cr_resource_url_1']['table'] = 'field_data_field_cr_resource_url';
  $handler->display->display_options['fields']['field_cr_resource_url_1']['field'] = 'field_cr_resource_url';
  $handler->display->display_options['fields']['field_cr_resource_url_1']['ui_name'] = 'Resource URL - Hide if empty OR Show the other resource URL';
  $handler->display->display_options['fields']['field_cr_resource_url_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['alter']['text'] = '[field_cr_resource_url]';
  $handler->display->display_options['fields']['field_cr_resource_url_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_resource_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cr_resource_url_1']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_cr_resource_url_1']['field_api_classes'] = 0;
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

if (isset($data->field_field_cr_type) && isset($data->field_field_cr_type[0][\'raw\'][\'tid\'])) {

	//Type Id
	$nodeType = $data->field_field_cr_type[0][\'raw\'][\'tid\'];

	if ($nodeType!=NULL && $nodeType!=\'\') {
		$currentTerm = taxonomy_term_load($nodeType);
		$currentTermName = i18n_string_translate(\'taxonomy:term:\' . $nodeType . \':name\', $currentTerm->name);
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
  /* Field: Content: File Entity */
  $handler->display->display_options['fields']['field_cr_file_entity']['id'] = 'field_cr_file_entity';
  $handler->display->display_options['fields']['field_cr_file_entity']['table'] = 'field_data_field_cr_file_entity';
  $handler->display->display_options['fields']['field_cr_file_entity']['field'] = 'field_cr_file_entity';
  $handler->display->display_options['fields']['field_cr_file_entity']['label'] = '';
  $handler->display->display_options['fields']['field_cr_file_entity']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_cr_file_entity']['alter']['text'] = '<a href="[field_cr_file_entity]" title="Download File" class="btn-orange btn-download">Download</a>';
  $handler->display->display_options['fields']['field_cr_file_entity']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_file_entity']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_file_entity']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_file_entity']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_file_entity']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_file_entity']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_file_entity']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_file_entity']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_file_entity']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_file_entity']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_file_entity']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_file_entity']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_file_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cr_file_entity']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cr_file_entity']['element_wrapper_class'] = 'resource-btn';
  $handler->display->display_options['fields']['field_cr_file_entity']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cr_file_entity']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cr_file_entity']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_file_entity']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_file_entity']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cr_file_entity']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_cr_file_entity']['field_api_classes'] = 0;
  /* Sort criterion: Content: Publication Date (field_cr_publication_date) */
  $handler->display->display_options['sorts']['field_cr_publication_date_value']['id'] = 'field_cr_publication_date_value';
  $handler->display->display_options['sorts']['field_cr_publication_date_value']['table'] = 'field_data_field_cr_publication_date';
  $handler->display->display_options['sorts']['field_cr_publication_date_value']['field'] = 'field_cr_publication_date_value';
  $handler->display->display_options['sorts']['field_cr_publication_date_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_cr_publication_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_cr_publication_date_value']['expose']['label'] = 'Date';
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title_field_value']['expose']['label'] = 'Name';
  /* Sort criterion: Content: Type (field_cr_type) */
  $handler->display->display_options['sorts']['field_cr_type_tid']['id'] = 'field_cr_type_tid';
  $handler->display->display_options['sorts']['field_cr_type_tid']['table'] = 'field_data_field_cr_type';
  $handler->display->display_options['sorts']['field_cr_type_tid']['field'] = 'field_cr_type_tid';
  $handler->display->display_options['sorts']['field_cr_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_cr_type_tid']['expose']['label'] = 'Type';
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
    'resource_collateral_resources' => 'resource_collateral_resources',
  );
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['reduce'] = 0;
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
  /* Filter criterion: Content: Type (field_cr_type) */
  $handler->display->display_options['filters']['field_cr_type_tid']['id'] = 'field_cr_type_tid';
  $handler->display->display_options['filters']['field_cr_type_tid']['table'] = 'field_data_field_cr_type';
  $handler->display->display_options['filters']['field_cr_type_tid']['field'] = 'field_cr_type_tid';
  $handler->display->display_options['filters']['field_cr_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cr_type_tid']['expose']['operator_id'] = 'field_cr_type_tid_op';
  $handler->display->display_options['filters']['field_cr_type_tid']['expose']['label'] = 'Types';
  $handler->display->display_options['filters']['field_cr_type_tid']['expose']['operator'] = 'field_cr_type_tid_op';
  $handler->display->display_options['filters']['field_cr_type_tid']['expose']['identifier'] = 'field_cr_type_tid';
  $handler->display->display_options['filters']['field_cr_type_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_cr_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_cr_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_cr_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cr_type_tid']['vocabulary'] = 'resource_type';
  $handler->display->display_options['filters']['field_cr_type_tid']['error_message'] = 0;
  $handler->display->display_options['filters']['field_cr_type_tid']['expose']['remember'] = 1;
  /* Filter criterion: Content: Industry (field_cr_industry) */
  $handler->display->display_options['filters']['field_cr_industry_tid']['id'] = 'field_cr_industry_tid';
  $handler->display->display_options['filters']['field_cr_industry_tid']['table'] = 'field_data_field_cr_industry';
  $handler->display->display_options['filters']['field_cr_industry_tid']['field'] = 'field_cr_industry_tid';
  $handler->display->display_options['filters']['field_cr_industry_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cr_industry_tid']['expose']['operator_id'] = 'field_cr_industry_tid_op';
  $handler->display->display_options['filters']['field_cr_industry_tid']['expose']['label'] = 'Industries';
  $handler->display->display_options['filters']['field_cr_industry_tid']['expose']['operator'] = 'field_cr_industry_tid_op';
  $handler->display->display_options['filters']['field_cr_industry_tid']['expose']['identifier'] = 'field_cr_industry_tid';
  $handler->display->display_options['filters']['field_cr_industry_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_cr_industry_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_cr_industry_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_cr_industry_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cr_industry_tid']['vocabulary'] = 'resource_industry';
  $handler->display->display_options['filters']['field_cr_industry_tid']['error_message'] = 0;
  $handler->display->display_options['filters']['field_cr_industry_tid']['expose']['remember'] = 1;
  /* Filter criterion: Content: Product (field_cr_product) */
  $handler->display->display_options['filters']['field_cr_product_tid']['id'] = 'field_cr_product_tid';
  $handler->display->display_options['filters']['field_cr_product_tid']['table'] = 'field_data_field_cr_product';
  $handler->display->display_options['filters']['field_cr_product_tid']['field'] = 'field_cr_product_tid';
  $handler->display->display_options['filters']['field_cr_product_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cr_product_tid']['expose']['operator_id'] = 'field_cr_product_tid_op';
  $handler->display->display_options['filters']['field_cr_product_tid']['expose']['label'] = 'Products';
  $handler->display->display_options['filters']['field_cr_product_tid']['expose']['operator'] = 'field_cr_product_tid_op';
  $handler->display->display_options['filters']['field_cr_product_tid']['expose']['identifier'] = 'field_cr_product_tid';
  $handler->display->display_options['filters']['field_cr_product_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_cr_product_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_cr_product_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_cr_product_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cr_product_tid']['vocabulary'] = 'resource_product';
  $handler->display->display_options['filters']['field_cr_product_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_cr_product_tid']['error_message'] = 0;
  $handler->display->display_options['filters']['field_cr_product_tid']['expose']['remember'] = 1;
  /* Filter criterion: Content: Services (field_cr_services) */
  $handler->display->display_options['filters']['field_cr_services_tid']['id'] = 'field_cr_services_tid';
  $handler->display->display_options['filters']['field_cr_services_tid']['table'] = 'field_data_field_cr_services';
  $handler->display->display_options['filters']['field_cr_services_tid']['field'] = 'field_cr_services_tid';
  $handler->display->display_options['filters']['field_cr_services_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cr_services_tid']['expose']['operator_id'] = 'field_cr_services_tid_op';
  $handler->display->display_options['filters']['field_cr_services_tid']['expose']['label'] = 'Services';
  $handler->display->display_options['filters']['field_cr_services_tid']['expose']['operator'] = 'field_cr_services_tid_op';
  $handler->display->display_options['filters']['field_cr_services_tid']['expose']['identifier'] = 'field_cr_services_tid';
  $handler->display->display_options['filters']['field_cr_services_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_cr_services_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_cr_services_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_cr_services_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cr_services_tid']['vocabulary'] = 'resource_services';
  $handler->display->display_options['filters']['field_cr_services_tid']['error_message'] = 0;
  $handler->display->display_options['filters']['field_cr_services_tid']['expose']['remember'] = 1;
  /* Filter criterion: Content: Publication Date (field_cr_publication_date) */
  $handler->display->display_options['filters']['field_cr_publication_date_value']['id'] = 'field_cr_publication_date_value';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['table'] = 'field_data_field_cr_publication_date';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['field'] = 'field_cr_publication_date_value';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cr_publication_date_value']['expose']['operator_id'] = 'field_cr_publication_date_value_op';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['expose']['label'] = 'On or After this Date';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['expose']['operator'] = 'field_cr_publication_date_value_op';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['expose']['identifier'] = 'field_cr_publication_date_value';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_cr_publication_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['year_range'] = '-6:+1';
  $handler->display->display_options['filters']['field_cr_publication_date_value']['expose']['remember'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'resources/collateral-resources';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Key Information';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_cr_type']['id'] = 'field_cr_type';
  $handler->display->display_options['fields']['field_cr_type']['table'] = 'field_data_field_cr_type';
  $handler->display->display_options['fields']['field_cr_type']['field'] = 'field_cr_type';
  $handler->display->display_options['fields']['field_cr_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_type']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cr_type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cr_type']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_cr_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cr_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cr_type']['field_api_classes'] = 0;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_cr_industry']['id'] = 'field_cr_industry';
  $handler->display->display_options['fields']['field_cr_industry']['table'] = 'field_data_field_cr_industry';
  $handler->display->display_options['fields']['field_cr_industry']['field'] = 'field_cr_industry';
  $handler->display->display_options['fields']['field_cr_industry']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_industry']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_industry']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cr_industry']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cr_industry']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_cr_industry']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cr_industry']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_industry']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_industry']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cr_industry']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_cr_industry']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cr_industry']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_cr_industry']['field_api_classes'] = 0;
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_cr_product']['id'] = 'field_cr_product';
  $handler->display->display_options['fields']['field_cr_product']['table'] = 'field_data_field_cr_product';
  $handler->display->display_options['fields']['field_cr_product']['field'] = 'field_cr_product';
  $handler->display->display_options['fields']['field_cr_product']['label'] = 'Products';
  $handler->display->display_options['fields']['field_cr_product']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_product']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_product']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_product']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_product']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cr_product']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cr_product']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_cr_product']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cr_product']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_product']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_product']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cr_product']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_cr_product']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cr_product']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_cr_product']['field_api_classes'] = 0;
  /* Field: Content: Services */
  $handler->display->display_options['fields']['field_cr_services']['id'] = 'field_cr_services';
  $handler->display->display_options['fields']['field_cr_services']['table'] = 'field_data_field_cr_services';
  $handler->display->display_options['fields']['field_cr_services']['field'] = 'field_cr_services';
  $handler->display->display_options['fields']['field_cr_services']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cr_services']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cr_services']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_services']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_cr_services']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cr_services']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cr_services']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_cr_services']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cr_services']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_services']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cr_services']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cr_services']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_cr_services']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cr_services']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_cr_services']['field_api_classes'] = 0;
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
  $translatables['resource_collateral_resources'] = array(
    t('Master'),
    t('Collateral Resources'),
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
    t('testtest'),
    t('Publication'),
    t('Organization'),
    t('Industry'),
    t('Products'),
    t('Services'),
    t('[body]</div>'),
    t('Resource Url'),
    t('Resource URL'),
    t('[field_cr_resource_url]'),
    t('<a href="[field_cr_file_entity]" title="Download File" class="btn-orange btn-download">Download</a>'),
    t('Date'),
    t('Name'),
    t('Type'),
    t('Language'),
    t('Keywords'),
    t('Types'),
    t('Industries'),
    t('Products'),
    t('Services'),
    t('On or After this Date'),
    t('Page'),
    t('Content pane'),
    t('Key Information'),
    t('All'),
    t('View panes'),
  );
  $export['resource_collateral_resources'] = $view;

  return $export;
}
