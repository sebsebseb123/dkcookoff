<?php
/**
 * @file
 * training_and_events_list_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function training_and_events_list_view_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'training_and_events_list_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Training and Events List View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Training & Events';
  $handler->display->display_options['css_class'] = 'view-resources';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php

if (is_numeric($view->args[0])) :

global $language;
$return_link = \'/\' . $language->language . \'/training-and-events\';
$current_nid = arg(1);
$current_node = node_load($view->args[0]);
$current_title = $current_node->title;

?>
<div class="list-message clearfix">
	<p>You are currently viewing training classes of <strong><?php print $current_title ?></strong> only. <a href="<?php print $return_link ?>"><?php print t(\'Reset listing to show all training and events.\') ?></a></p>
	
</div>

<?php endif; ?>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No training and events were found with the given criteria.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Content: Location (field_training_location) */
  $handler->display->display_options['relationships']['field_training_location_nid']['id'] = 'field_training_location_nid';
  $handler->display->display_options['relationships']['field_training_location_nid']['table'] = 'field_data_field_training_location';
  $handler->display->display_options['relationships']['field_training_location_nid']['field'] = 'field_training_location_nid';
  $handler->display->display_options['relationships']['field_training_location_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_training_location_nid']['delta'] = '-1';
  /* Relationship: Content: Trainer (field_training_trainer) */
  $handler->display->display_options['relationships']['field_training_trainer_nid']['id'] = 'field_training_trainer_nid';
  $handler->display->display_options['relationships']['field_training_trainer_nid']['table'] = 'field_data_field_training_trainer';
  $handler->display->display_options['relationships']['field_training_trainer_nid']['field'] = 'field_training_trainer_nid';
  $handler->display->display_options['relationships']['field_training_trainer_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_training_trainer_nid']['delta'] = '-1';
  /* Relationship: Content: Course Information (field_training_course) */
  $handler->display->display_options['relationships']['field_training_course_nid']['id'] = 'field_training_course_nid';
  $handler->display->display_options['relationships']['field_training_course_nid']['table'] = 'field_data_field_training_course';
  $handler->display->display_options['relationships']['field_training_course_nid']['field'] = 'field_training_course_nid';
  $handler->display->display_options['relationships']['field_training_course_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_training_course_nid']['delta'] = '-1';
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
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_training_type']['id'] = 'field_training_type';
  $handler->display->display_options['fields']['field_training_type']['table'] = 'field_data_field_training_type';
  $handler->display->display_options['fields']['field_training_type']['field'] = 'field_training_type';
  $handler->display->display_options['fields']['field_training_type']['label'] = '';
  $handler->display->display_options['fields']['field_training_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_training_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_training_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_training_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_training_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_training_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_training_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_training_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_training_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_training_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_training_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_training_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_training_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_training_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_training_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_training_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_training_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_training_type']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_training_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_training_type']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_training_type']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_training_type']['field_api_classes'] = 0;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_location_city_1']['id'] = 'field_location_city_1';
  $handler->display->display_options['fields']['field_location_city_1']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city_1']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city_1']['relationship'] = 'field_training_location_nid';
  $handler->display->display_options['fields']['field_location_city_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_city_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_city_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_city_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_city_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_city_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_city_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_city_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_city_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_city_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_city_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_city_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_city_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_city_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_city_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_city_1']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_location_city_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_location_city_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location_city_1']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_location_city_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_city_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_location_city_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_city_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_city_1']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_location_city_1']['field_api_classes'] = 0;
  /* Field: PHP - Center Content Start */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'PHP - Center Content Start';
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
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<div class="resource-content"><div class="resource-content-inner">';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: PHP - Title */
  $handler->display->display_options['fields']['php_6']['id'] = 'php_6';
  $handler->display->display_options['fields']['php_6']['table'] = 'views';
  $handler->display->display_options['fields']['php_6']['field'] = 'php';
  $handler->display->display_options['fields']['php_6']['ui_name'] = 'PHP - Title';
  $handler->display->display_options['fields']['php_6']['label'] = '';
  $handler->display->display_options['fields']['php_6']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php_6']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_6']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_6']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_6']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_6']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_6']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_6']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_6']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_6']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_6']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_6']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_6']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_6']['element_type'] = 'h3';
  $handler->display->display_options['fields']['php_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_6']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_6']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_6']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_6']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_6']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_6']['php_output'] = '<?php

  $node_title = $data->_field_data[\'node_field_data_field_training_course_nid\'][\'entity\']->title;

  $nid = $data->_field_data[\'nid\'][\'entity\']->nid;

print l($node_title, \'node/\'.$nid);

?>';
  $handler->display->display_options['fields']['php_6']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_6']['php_click_sortable'] = '';
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_cd_subtitle']['id'] = 'field_cd_subtitle';
  $handler->display->display_options['fields']['field_cd_subtitle']['table'] = 'field_data_field_cd_subtitle';
  $handler->display->display_options['fields']['field_cd_subtitle']['field'] = 'field_cd_subtitle';
  $handler->display->display_options['fields']['field_cd_subtitle']['relationship'] = 'field_training_course_nid';
  $handler->display->display_options['fields']['field_cd_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_cd_subtitle']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cd_subtitle']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cd_subtitle']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cd_subtitle']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cd_subtitle']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cd_subtitle']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cd_subtitle']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cd_subtitle']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cd_subtitle']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cd_subtitle']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cd_subtitle']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cd_subtitle']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cd_subtitle']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cd_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cd_subtitle']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cd_subtitle']['element_wrapper_class'] = 'use-helvetica resource-subtitle';
  $handler->display->display_options['fields']['field_cd_subtitle']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cd_subtitle']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cd_subtitle']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cd_subtitle']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cd_subtitle']['field_api_classes'] = 0;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_training_start_date']['id'] = 'field_training_start_date';
  $handler->display->display_options['fields']['field_training_start_date']['table'] = 'field_data_field_training_start_date';
  $handler->display->display_options['fields']['field_training_start_date']['field'] = 'field_training_start_date';
  $handler->display->display_options['fields']['field_training_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_training_start_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_training_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_start_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_training_start_date']['element_wrapper_class'] = 'block-float use-helvetica block-float-pair';
  $handler->display->display_options['fields']['field_training_start_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_training_start_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_training_start_date']['settings'] = array(
    'format_type' => 'standard_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_training_start_date']['field_api_classes'] = 0;
  /* Field: Content: Time Zone */
  $handler->display->display_options['fields']['field_training_time_zone']['id'] = 'field_training_time_zone';
  $handler->display->display_options['fields']['field_training_time_zone']['table'] = 'field_data_field_training_time_zone';
  $handler->display->display_options['fields']['field_training_time_zone']['field'] = 'field_training_time_zone';
  $handler->display->display_options['fields']['field_training_time_zone']['label'] = '';
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['text'] = '([field_training_time_zone])';
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_training_time_zone']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_training_time_zone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_time_zone']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_training_time_zone']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_training_time_zone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_training_time_zone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_training_time_zone']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_training_time_zone']['field_api_classes'] = 0;
  /* Field: Break */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'Break';
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
  $handler->display->display_options['fields']['php_2']['php_output'] = '<div class="break-up">&nbsp;</div>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: Delivery Language */
  $handler->display->display_options['fields']['field_training_delivery_language']['id'] = 'field_training_delivery_language';
  $handler->display->display_options['fields']['field_training_delivery_language']['table'] = 'field_data_field_training_delivery_language';
  $handler->display->display_options['fields']['field_training_delivery_language']['field'] = 'field_training_delivery_language';
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_training_delivery_language']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_training_delivery_language']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_training_delivery_language']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_training_delivery_language']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_training_delivery_language']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_training_delivery_language']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_training_delivery_language']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_training_delivery_language']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_training_delivery_language']['field_api_classes'] = 0;
  /* Field: Content: Province */
  $handler->display->display_options['fields']['field_location_province']['id'] = 'field_location_province';
  $handler->display->display_options['fields']['field_location_province']['table'] = 'field_data_field_location_province';
  $handler->display->display_options['fields']['field_location_province']['field'] = 'field_location_province';
  $handler->display->display_options['fields']['field_location_province']['relationship'] = 'field_training_location_nid';
  $handler->display->display_options['fields']['field_location_province']['label'] = 'Location';
  $handler->display->display_options['fields']['field_location_province']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_location_province']['alter']['text'] = '[field_location_city_1], [field_location_province]';
  $handler->display->display_options['fields']['field_location_province']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_province']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_province']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_province']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_province']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_location_province']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_location_province']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location_province']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_location_province']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_province']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_province']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_province']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_province']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_location_province']['field_api_classes'] = 0;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_cd_typeindustry']['id'] = 'field_cd_typeindustry';
  $handler->display->display_options['fields']['field_cd_typeindustry']['table'] = 'field_data_field_cd_typeindustry';
  $handler->display->display_options['fields']['field_cd_typeindustry']['field'] = 'field_cd_typeindustry';
  $handler->display->display_options['fields']['field_cd_typeindustry']['relationship'] = 'field_training_course_nid';
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cd_typeindustry']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_cd_typeindustry']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cd_typeindustry']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cd_typeindustry']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_cd_typeindustry']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cd_typeindustry']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cd_typeindustry']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cd_typeindustry']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cd_typeindustry']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_cd_typeindustry']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cd_typeindustry']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['field_api_classes'] = 0;
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_cd_typeproduct']['id'] = 'field_cd_typeproduct';
  $handler->display->display_options['fields']['field_cd_typeproduct']['table'] = 'field_data_field_cd_typeproduct';
  $handler->display->display_options['fields']['field_cd_typeproduct']['field'] = 'field_cd_typeproduct';
  $handler->display->display_options['fields']['field_cd_typeproduct']['relationship'] = 'field_training_course_nid';
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cd_typeproduct']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_cd_typeproduct']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cd_typeproduct']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cd_typeproduct']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_cd_typeproduct']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cd_typeproduct']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cd_typeproduct']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cd_typeproduct']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cd_typeproduct']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_cd_typeproduct']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cd_typeproduct']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['field_api_classes'] = 0;
  /* Field: Content: Service */
  $handler->display->display_options['fields']['field_event_service']['id'] = 'field_event_service';
  $handler->display->display_options['fields']['field_event_service']['table'] = 'field_data_field_event_service';
  $handler->display->display_options['fields']['field_event_service']['field'] = 'field_event_service';
  $handler->display->display_options['fields']['field_event_service']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_service']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_service']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_service']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_service']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_service']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_service']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_service']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_service']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_service']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_service']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_service']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_service']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_event_service']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_event_service']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_service']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_service']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_event_service']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_service']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_event_service']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_service']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_service']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_service']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_event_service']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_service']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_service']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_event_service']['field_api_classes'] = 0;
  /* Field: PHP - Center Content End */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'PHP - Center Content End';
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
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '</div></div>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: PHP - RegOnline or Training URL */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['ui_name'] = 'PHP - RegOnline or Training URL';
  $handler->display->display_options['fields']['php_4']['label'] = '';
  $handler->display->display_options['fields']['php_4']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php_4']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_4']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_4']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_4']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_4']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_4']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_4']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_4']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_4']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_4']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_4']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_4']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_4']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['php_4']['element_wrapper_class'] = 'resource-btn';
  $handler->display->display_options['fields']['php_4']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_4']['hide_empty'] = 1;
  $handler->display->display_options['fields']['php_4']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_4']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php

global $language;

if (isset($data->field_field_training_register_link) && !empty($data->field_field_training_register_link)) {
	$current_entity_id = $data->field_field_training_register_link[0][\'raw\'][\'value\'];

	// Link Information
	$reg_link = \'\';
	$reg_text = \'\';

	// If there\'s a regonline Id
	if (isset($data->field_field_training_register_link[0][\'rendered\'][\'entity\'][\'field_collection_item\'][$current_entity_id][\'field_training_regonline_id\']) ) {

		$reg_link = \'/\' . $language->language . \'/register/training/\'. $data->nid . \'/\' . $data->field_field_training_register_link[0][\'rendered\'][\'entity\'][\'field_collection_item\'][$current_entity_id][\'field_training_regonline_id\'][\'#items\'][0][\'value\'];
		$reg_text = t(\'Register\');

	}
	// Training URL
	elseif(isset($data->field_field_training_register_link[0][\'rendered\'][\'entity\'][\'field_collection_item\'][$current_entity_id][\'field_training_url\'])) {

		$reg_link = $data->field_field_training_register_link[0][\'rendered\'][\'entity\'][\'field_collection_item\'][$current_entity_id][\'field_training_url\'][\'#items\'][0][\'url\'];
		$reg_text = $data->field_field_training_register_link[0][\'rendered\'][\'entity\'][\'field_collection_item\'][$current_entity_id][\'field_training_url\'][\'#items\'][0][\'title\'];
	}

	$output = \'<a href="\' .  $reg_link . \'" class="btn-orange">\' . $reg_text . \'</a>\';

	print $output;
}

?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: PHP - RegOnline or Event URL */
  $handler->display->display_options['fields']['php_5']['id'] = 'php_5';
  $handler->display->display_options['fields']['php_5']['table'] = 'views';
  $handler->display->display_options['fields']['php_5']['field'] = 'php';
  $handler->display->display_options['fields']['php_5']['ui_name'] = 'PHP - RegOnline or Event URL';
  $handler->display->display_options['fields']['php_5']['label'] = '';
  $handler->display->display_options['fields']['php_5']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php_5']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_5']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_5']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_5']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_5']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_5']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_5']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_5']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_5']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_5']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_5']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_5']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_5']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['php_5']['element_wrapper_class'] = 'resource-btn';
  $handler->display->display_options['fields']['php_5']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_5']['hide_empty'] = 1;
  $handler->display->display_options['fields']['php_5']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_5']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_5']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_5']['php_output'] = '<?php

global $language;

if (isset($data->field_field_event_register_link) && !empty($data->field_field_event_register_link)) {
	$current_entity_id = $data->field_field_event_register_link[0][\'raw\'][\'value\'];

	// Link Information
	$reg_link = \'\';
	$reg_text = \'\';

	// If there\'s a regonline Id
	if (isset($data->field_field_event_register_link[0][\'rendered\'][\'entity\'][\'field_collection_item\'][$current_entity_id][\'field_event_regonline_id\']) ) {

		$reg_link = \'/\' . $language->language . \'/register/event/\'. $data->nid . \'/\' . $data->field_field_event_register_link[0][\'rendered\'][\'entity\'][\'field_collection_item\'][$current_entity_id][\'field_event_regonline_id\'][\'#items\'][0][\'value\'];
		$reg_text = t(\'Register\');

	}
	// Event URL
	elseif(isset($data->field_field_event_register_link[0][\'rendered\'][\'entity\'][\'field_collection_item\'][$current_entity_id][\'field_event_event_url\'])) {

		$reg_link = $data->field_field_event_register_link[0][\'rendered\'][\'entity\'][\'field_collection_item\'][$current_entity_id][\'field_event_event_url\'][\'#items\'][0][\'url\'];
		$reg_text = $data->field_field_event_register_link[0][\'rendered\'][\'entity\'][\'field_collection_item\'][$current_entity_id][\'field_event_event_url\'][\'#items\'][0][\'title\'];
	}

	$output = \'<a href="\' .  $reg_link . \'" class="btn-orange">\' . $reg_text . \'</a>\';

	print $output;
}

?>';
  $handler->display->display_options['fields']['php_5']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_5']['php_click_sortable'] = '';
  /* Field: PHP - Type Output */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['ui_name'] = 'PHP - Type Output';
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
  $handler->display->display_options['fields']['php_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['php_3']['element_wrapper_class'] = 'resource-icon';
  $handler->display->display_options['fields']['php_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_3']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php

if (isset($data->field_field_training_type) && isset($data->field_field_training_type[0][\'raw\'][\'tid\'])) {

	//Type Id
	$nodeType = $data->field_field_training_type[0][\'raw\'][\'tid\'];

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
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Content: Register Link */
  $handler->display->display_options['fields']['field_training_register_link']['id'] = 'field_training_register_link';
  $handler->display->display_options['fields']['field_training_register_link']['table'] = 'field_data_field_training_register_link';
  $handler->display->display_options['fields']['field_training_register_link']['field'] = 'field_training_register_link';
  $handler->display->display_options['fields']['field_training_register_link']['label'] = 'Register Link Training';
  $handler->display->display_options['fields']['field_training_register_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_register_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_training_register_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_training_register_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_training_register_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_training_register_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_training_register_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_training_register_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_training_register_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_training_register_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_training_register_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_training_register_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_training_register_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_training_register_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_training_register_link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_training_register_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_training_register_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_training_register_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_register_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_training_register_link']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_training_register_link']['field_api_classes'] = 0;
  /* Field: Content: Register Link */
  $handler->display->display_options['fields']['field_event_register_link']['id'] = 'field_event_register_link';
  $handler->display->display_options['fields']['field_event_register_link']['table'] = 'field_data_field_event_register_link';
  $handler->display->display_options['fields']['field_event_register_link']['field'] = 'field_event_register_link';
  $handler->display->display_options['fields']['field_event_register_link']['label'] = 'Register Link Events';
  $handler->display->display_options['fields']['field_event_register_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_register_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_register_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_register_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_register_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_register_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_register_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_register_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_register_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_register_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_register_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_register_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_register_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_register_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_register_link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_register_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_register_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_register_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_register_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_register_link']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_event_register_link']['field_api_classes'] = 0;
  /* Sort criterion: Content: Start Date -  start date (field_training_start_date) */
  $handler->display->display_options['sorts']['field_training_start_date_value']['id'] = 'field_training_start_date_value';
  $handler->display->display_options['sorts']['field_training_start_date_value']['table'] = 'field_data_field_training_start_date';
  $handler->display->display_options['sorts']['field_training_start_date_value']['field'] = 'field_training_start_date_value';
  $handler->display->display_options['sorts']['field_training_start_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_training_start_date_value']['expose']['label'] = 'Start Date';
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title_field_value']['expose']['label'] = 'Name';
  /* Sort criterion: Content: Type (field_training_type) */
  $handler->display->display_options['sorts']['field_training_type_tid']['id'] = 'field_training_type_tid';
  $handler->display->display_options['sorts']['field_training_type_tid']['table'] = 'field_data_field_training_type';
  $handler->display->display_options['sorts']['field_training_type_tid']['field'] = 'field_training_type_tid';
  $handler->display->display_options['sorts']['field_training_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_training_type_tid']['expose']['label'] = 'Type';
  /* Sort criterion: Content: Course Category (field_cd_course_category) */
  $handler->display->display_options['sorts']['field_cd_course_category_tid']['id'] = 'field_cd_course_category_tid';
  $handler->display->display_options['sorts']['field_cd_course_category_tid']['table'] = 'field_data_field_cd_course_category';
  $handler->display->display_options['sorts']['field_cd_course_category_tid']['field'] = 'field_cd_course_category_tid';
  $handler->display->display_options['sorts']['field_cd_course_category_tid']['relationship'] = 'field_training_course_nid';
  $handler->display->display_options['sorts']['field_cd_course_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_cd_course_category_tid']['expose']['label'] = 'Course';
  /* Sort criterion: Content: Time Zone (field_training_time_zone) */
  $handler->display->display_options['sorts']['field_training_time_zone_tid']['id'] = 'field_training_time_zone_tid';
  $handler->display->display_options['sorts']['field_training_time_zone_tid']['table'] = 'field_data_field_training_time_zone';
  $handler->display->display_options['sorts']['field_training_time_zone_tid']['field'] = 'field_training_time_zone_tid';
  $handler->display->display_options['sorts']['field_training_time_zone_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_training_time_zone_tid']['expose']['label'] = 'Time Zone';
  /* Contextual filter: Content: Course Information (field_training_course) */
  $handler->display->display_options['arguments']['field_training_course_nid']['id'] = 'field_training_course_nid';
  $handler->display->display_options['arguments']['field_training_course_nid']['table'] = 'field_data_field_training_course';
  $handler->display->display_options['arguments']['field_training_course_nid']['field'] = 'field_training_course_nid';
  $handler->display->display_options['arguments']['field_training_course_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_training_course_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_training_course_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_training_course_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_training_course_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_training_course_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_training_course_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_training_course_nid']['not'] = 0;
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
    'events' => 'events',
    'training' => 'training',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['relationship'] = 'field_training_course_nid';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type (field_training_type) */
  $handler->display->display_options['filters']['field_training_type_tid']['id'] = 'field_training_type_tid';
  $handler->display->display_options['filters']['field_training_type_tid']['table'] = 'field_data_field_training_type';
  $handler->display->display_options['filters']['field_training_type_tid']['field'] = 'field_training_type_tid';
  $handler->display->display_options['filters']['field_training_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_training_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['operator_id'] = 'field_training_type_tid_op';
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['operator'] = 'field_training_type_tid_op';
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['identifier'] = 'field_training_type_tid';
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_training_type_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_training_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_training_type_tid']['vocabulary'] = 'training_type';
  $handler->display->display_options['filters']['field_training_type_tid']['error_message'] = 0;
  /* Filter criterion: Content: Industry (field_cd_typeindustry) */
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['id'] = 'field_cd_typeindustry_tid';
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['table'] = 'field_data_field_cd_typeindustry';
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['field'] = 'field_cd_typeindustry_tid';
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['relationship'] = 'field_training_course_nid';
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['expose']['operator_id'] = 'field_cd_typeindustry_tid_op';
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['expose']['label'] = 'Industry';
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['expose']['operator'] = 'field_cd_typeindustry_tid_op';
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['expose']['identifier'] = 'field_cd_typeindustry_tid';
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['vocabulary'] = 'resource_industry';
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_cd_typeindustry_tid']['error_message'] = 0;
  /* Filter criterion: Content: Product (field_cd_typeproduct) */
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['id'] = 'field_cd_typeproduct_tid';
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['table'] = 'field_data_field_cd_typeproduct';
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['field'] = 'field_cd_typeproduct_tid';
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['relationship'] = 'field_training_course_nid';
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['expose']['operator_id'] = 'field_cd_typeproduct_tid_op';
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['expose']['label'] = 'Product';
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['expose']['operator'] = 'field_cd_typeproduct_tid_op';
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['expose']['identifier'] = 'field_cd_typeproduct_tid';
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['vocabulary'] = 'resource_product';
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_cd_typeproduct_tid']['error_message'] = 0;
  /* Filter criterion: Content: City (field_location_city) */
  $handler->display->display_options['filters']['field_location_city_tid']['id'] = 'field_location_city_tid';
  $handler->display->display_options['filters']['field_location_city_tid']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['filters']['field_location_city_tid']['field'] = 'field_location_city_tid';
  $handler->display->display_options['filters']['field_location_city_tid']['relationship'] = 'field_training_location_nid';
  $handler->display->display_options['filters']['field_location_city_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_city_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_city_tid']['expose']['operator_id'] = 'field_location_city_tid_op';
  $handler->display->display_options['filters']['field_location_city_tid']['expose']['label'] = 'In These Cities';
  $handler->display->display_options['filters']['field_location_city_tid']['expose']['operator'] = 'field_location_city_tid_op';
  $handler->display->display_options['filters']['field_location_city_tid']['expose']['identifier'] = 'field_location_city_tid';
  $handler->display->display_options['filters']['field_location_city_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_location_city_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_location_city_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_location_city_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_city_tid']['vocabulary'] = 'cities';
  $handler->display->display_options['filters']['field_location_city_tid']['error_message'] = 0;
  /* Filter criterion: Content: Delivery Language (field_training_delivery_language) */
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['id'] = 'field_training_delivery_language_tid';
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['table'] = 'field_data_field_training_delivery_language';
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['field'] = 'field_training_delivery_language_tid';
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['expose']['operator_id'] = 'field_training_delivery_language_tid_op';
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['expose']['label'] = 'In These Languages';
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['expose']['operator'] = 'field_training_delivery_language_tid_op';
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['expose']['identifier'] = 'field_training_delivery_language_tid';
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['vocabulary'] = 'delivery_language';
  $handler->display->display_options['filters']['field_training_delivery_language_tid']['error_message'] = 0;
  /* Filter criterion: Content: Start Date -  start date (field_training_start_date) */
  $handler->display->display_options['filters']['field_training_start_date_value']['id'] = 'field_training_start_date_value';
  $handler->display->display_options['filters']['field_training_start_date_value']['table'] = 'field_data_field_training_start_date';
  $handler->display->display_options['filters']['field_training_start_date_value']['field'] = 'field_training_start_date_value';
  $handler->display->display_options['filters']['field_training_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_training_start_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_training_start_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_start_date_value']['expose']['operator_id'] = 'field_training_start_date_value_op';
  $handler->display->display_options['filters']['field_training_start_date_value']['expose']['label'] = 'Start Date';
  $handler->display->display_options['filters']['field_training_start_date_value']['expose']['operator'] = 'field_training_start_date_value_op';
  $handler->display->display_options['filters']['field_training_start_date_value']['expose']['identifier'] = 'field_training_start_date_value';
  $handler->display->display_options['filters']['field_training_start_date_value']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_training_start_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_training_start_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_training_start_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_training_start_date_value']['year_range'] = '-1:+3';
  /* Filter criterion: Content: Start Date -  start date (field_training_start_date) */
  $handler->display->display_options['filters']['field_training_start_date_value_1']['id'] = 'field_training_start_date_value_1';
  $handler->display->display_options['filters']['field_training_start_date_value_1']['table'] = 'field_data_field_training_start_date';
  $handler->display->display_options['filters']['field_training_start_date_value_1']['field'] = 'field_training_start_date_value';
  $handler->display->display_options['filters']['field_training_start_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_training_start_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_training_start_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_start_date_value_1']['expose']['operator_id'] = 'field_training_start_date_value_1_op';
  $handler->display->display_options['filters']['field_training_start_date_value_1']['expose']['label'] = 'End Date';
  $handler->display->display_options['filters']['field_training_start_date_value_1']['expose']['operator'] = 'field_training_start_date_value_1_op';
  $handler->display->display_options['filters']['field_training_start_date_value_1']['expose']['identifier'] = 'field_training_start_date_value_1';
  $handler->display->display_options['filters']['field_training_start_date_value_1']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_training_start_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_training_start_date_value_1']['default_date'] = '+2 years';
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'training-and-events';

  /* Display: Page - Course Preset */
  $handler = $view->new_display('page', 'Page - Course Preset', 'page_1');
  $handler->display->display_options['path'] = 'training-and-events/course/%';
  $translatables['training_and_events_list_view'] = array(
    t('Master'),
    t('Training & Events'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('No training and events were found with the given criteria.'),
    t('field_training_location'),
    t('field_training_trainer'),
    t('field_training_course'),
    t('City'),
    t('([field_training_time_zone])'),
    t('Delivery Language'),
    t('Location'),
    t('[field_location_city_1], [field_location_province]'),
    t('Industry'),
    t('Product'),
    t('Service'),
    t('Register Link Training'),
    t('Register Link Events'),
    t('Start Date'),
    t('Name'),
    t('Type'),
    t('Course'),
    t('Time Zone'),
    t('All'),
    t('Keywords'),
    t('In These Cities'),
    t('In These Languages'),
    t('End Date'),
    t('Page'),
    t('Page - Course Preset'),
  );
  $export['training_and_events_list_view'] = $view;

  $view = new view;
  $view->name = 'training_important_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Training Important Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Key Information';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Course Information (field_training_course) */
  $handler->display->display_options['relationships']['field_training_course_nid']['id'] = 'field_training_course_nid';
  $handler->display->display_options['relationships']['field_training_course_nid']['table'] = 'field_data_field_training_course';
  $handler->display->display_options['relationships']['field_training_course_nid']['field'] = 'field_training_course_nid';
  $handler->display->display_options['relationships']['field_training_course_nid']['label'] = 'training_course';
  $handler->display->display_options['relationships']['field_training_course_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_training_course_nid']['delta'] = '-1';
  /* Field: Content: Delivery Language */
  $handler->display->display_options['fields']['field_training_delivery_language']['id'] = 'field_training_delivery_language';
  $handler->display->display_options['fields']['field_training_delivery_language']['table'] = 'field_data_field_training_delivery_language';
  $handler->display->display_options['fields']['field_training_delivery_language']['field'] = 'field_training_delivery_language';
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_training_delivery_language']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_training_delivery_language']['element_label_class'] = 'strong';
  $handler->display->display_options['fields']['field_training_delivery_language']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_training_delivery_language']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_training_delivery_language']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_delivery_language']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_training_delivery_language']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_training_delivery_language']['field_api_classes'] = 0;
  /* Field: Content: Time Zone */
  $handler->display->display_options['fields']['field_training_time_zone']['id'] = 'field_training_time_zone';
  $handler->display->display_options['fields']['field_training_time_zone']['table'] = 'field_data_field_training_time_zone';
  $handler->display->display_options['fields']['field_training_time_zone']['field'] = 'field_training_time_zone';
  $handler->display->display_options['fields']['field_training_time_zone']['label'] = '';
  $handler->display->display_options['fields']['field_training_time_zone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_time_zone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_training_time_zone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_time_zone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_training_time_zone']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_training_time_zone']['field_api_classes'] = 0;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_training_start_date']['id'] = 'field_training_start_date';
  $handler->display->display_options['fields']['field_training_start_date']['table'] = 'field_data_field_training_start_date';
  $handler->display->display_options['fields']['field_training_start_date']['field'] = 'field_training_start_date';
  $handler->display->display_options['fields']['field_training_start_date']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['text'] = '[field_training_start_date] [field_training_time_zone]';
  $handler->display->display_options['fields']['field_training_start_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_training_start_date']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_training_start_date']['element_label_class'] = 'strong';
  $handler->display->display_options['fields']['field_training_start_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_training_start_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_training_start_date']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_training_start_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_training_start_date']['settings'] = array(
    'format_type' => 'abbv',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_training_start_date']['field_api_classes'] = 0;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_training_start_date_1']['id'] = 'field_training_start_date_1';
  $handler->display->display_options['fields']['field_training_start_date_1']['table'] = 'field_data_field_training_start_date';
  $handler->display->display_options['fields']['field_training_start_date_1']['field'] = 'field_training_start_date';
  $handler->display->display_options['fields']['field_training_start_date_1']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_training_start_date_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_training_start_date_1']['alter']['text'] = '[field_training_start_date_1] [field_training_time_zone]';
  $handler->display->display_options['fields']['field_training_start_date_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_training_start_date_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_training_start_date_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_training_start_date_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_training_start_date_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_training_start_date_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_training_start_date_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_training_start_date_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_training_start_date_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_training_start_date_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_training_start_date_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_training_start_date_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_training_start_date_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_training_start_date_1']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_training_start_date_1']['element_label_class'] = 'strong';
  $handler->display->display_options['fields']['field_training_start_date_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_training_start_date_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_training_start_date_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_training_start_date_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_start_date_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_training_start_date_1']['settings'] = array(
    'format_type' => 'abbv',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_training_start_date_1']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="views-spacer"></div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Course Category */
  $handler->display->display_options['fields']['field_cd_course_category']['id'] = 'field_cd_course_category';
  $handler->display->display_options['fields']['field_cd_course_category']['table'] = 'field_data_field_cd_course_category';
  $handler->display->display_options['fields']['field_cd_course_category']['field'] = 'field_cd_course_category';
  $handler->display->display_options['fields']['field_cd_course_category']['relationship'] = 'field_training_course_nid';
  $handler->display->display_options['fields']['field_cd_course_category']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cd_course_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cd_course_category']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cd_course_category']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_cd_course_category']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cd_course_category']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cd_course_category']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_cd_course_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cd_course_category']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cd_course_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cd_course_category']['field_api_classes'] = 0;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_cd_typeindustry']['id'] = 'field_cd_typeindustry';
  $handler->display->display_options['fields']['field_cd_typeindustry']['table'] = 'field_data_field_cd_typeindustry';
  $handler->display->display_options['fields']['field_cd_typeindustry']['field'] = 'field_cd_typeindustry';
  $handler->display->display_options['fields']['field_cd_typeindustry']['relationship'] = 'field_training_course_nid';
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cd_typeindustry']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_cd_typeindustry']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cd_typeindustry']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cd_typeindustry']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_cd_typeindustry']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cd_typeindustry']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cd_typeindustry']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cd_typeindustry']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cd_typeindustry']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_cd_typeindustry']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cd_typeindustry']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_cd_typeindustry']['field_api_classes'] = 0;
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_cd_typeproduct']['id'] = 'field_cd_typeproduct';
  $handler->display->display_options['fields']['field_cd_typeproduct']['table'] = 'field_data_field_cd_typeproduct';
  $handler->display->display_options['fields']['field_cd_typeproduct']['field'] = 'field_cd_typeproduct';
  $handler->display->display_options['fields']['field_cd_typeproduct']['relationship'] = 'field_training_course_nid';
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cd_typeproduct']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_cd_typeproduct']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cd_typeproduct']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_cd_typeproduct']['element_wrapper_class'] = 'block-float use-helvetica';
  $handler->display->display_options['fields']['field_cd_typeproduct']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cd_typeproduct']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_cd_typeproduct']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cd_typeproduct']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cd_typeproduct']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_cd_typeproduct']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cd_typeproduct']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_cd_typeproduct']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'training' => 'training',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['training_important_info'] = array(
    t('Master'),
    t('Key Information'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('training_course'),
    t('Delivery Language'),
    t('Start Date'),
    t('[field_training_start_date] [field_training_time_zone]'),
    t('End Date'),
    t('[field_training_start_date_1] [field_training_time_zone]'),
    t('<div class="views-spacer"></div>'),
    t('Course Category'),
    t('Industry'),
    t('Product'),
    t('All'),
    t('Block'),
  );
  $export['training_important_info'] = $view;

  $view = new view;
  $view->name = 'training_location_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Training Location Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Location';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Location (field_training_location) */
  $handler->display->display_options['relationships']['field_training_location_nid']['id'] = 'field_training_location_nid';
  $handler->display->display_options['relationships']['field_training_location_nid']['table'] = 'field_data_field_training_location';
  $handler->display->display_options['relationships']['field_training_location_nid']['field'] = 'field_training_location_nid';
  $handler->display->display_options['relationships']['field_training_location_nid']['label'] = 'training_location';
  $handler->display->display_options['relationships']['field_training_location_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_training_location_nid']['delta'] = '-1';
  /* Field: Content: Map Embed Code */
  $handler->display->display_options['fields']['field_location_map_embed_code']['id'] = 'field_location_map_embed_code';
  $handler->display->display_options['fields']['field_location_map_embed_code']['table'] = 'field_data_field_location_map_embed_code';
  $handler->display->display_options['fields']['field_location_map_embed_code']['field'] = 'field_location_map_embed_code';
  $handler->display->display_options['fields']['field_location_map_embed_code']['relationship'] = 'field_training_location_nid';
  $handler->display->display_options['fields']['field_location_map_embed_code']['label'] = '';
  $handler->display->display_options['fields']['field_location_map_embed_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_map_embed_code']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_map_embed_code']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_map_embed_code']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_map_embed_code']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_map_embed_code']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_map_embed_code']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_map_embed_code']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_map_embed_code']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_map_embed_code']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_map_embed_code']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_map_embed_code']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_map_embed_code']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_map_embed_code']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_map_embed_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_map_embed_code']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_map_embed_code']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_map_embed_code']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_map_embed_code']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_map_embed_code']['field_api_classes'] = 0;
  /* Field: Content: Map Embed Code Thumbnail */
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['id'] = 'field_location_embed_thumbnail';
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['table'] = 'field_data_field_location_embed_thumbnail';
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['field'] = 'field_location_embed_thumbnail';
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['relationship'] = 'field_training_location_nid';
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['path'] = '[field_location_map_embed_code]';
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['element_class'] = 'resource-thumb';
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['settings'] = array(
    'image_style' => 'resources_maps_apps',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_location_embed_thumbnail']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_training_location_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'location-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Address 1 */
  $handler->display->display_options['fields']['field_location_address_1']['id'] = 'field_location_address_1';
  $handler->display->display_options['fields']['field_location_address_1']['table'] = 'field_data_field_location_address_1';
  $handler->display->display_options['fields']['field_location_address_1']['field'] = 'field_location_address_1';
  $handler->display->display_options['fields']['field_location_address_1']['relationship'] = 'field_training_location_nid';
  $handler->display->display_options['fields']['field_location_address_1']['label'] = '';
  $handler->display->display_options['fields']['field_location_address_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_address_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_address_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_address_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_address_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_address_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_address_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_address_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_address_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_address_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_address_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_address_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_address_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_address_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_location_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_address_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_address_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_address_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_address_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_address_1']['field_api_classes'] = 0;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['relationship'] = 'field_training_location_nid';
  $handler->display->display_options['fields']['field_location_city']['label'] = '';
  $handler->display->display_options['fields']['field_location_city']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_location_city']['alter']['text'] = '[field_location_city],';
  $handler->display->display_options['fields']['field_location_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_city']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_city']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_location_city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_city']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_location_city']['field_api_classes'] = 0;
  /* Field: Content: Province */
  $handler->display->display_options['fields']['field_location_province']['id'] = 'field_location_province';
  $handler->display->display_options['fields']['field_location_province']['table'] = 'field_data_field_location_province';
  $handler->display->display_options['fields']['field_location_province']['field'] = 'field_location_province';
  $handler->display->display_options['fields']['field_location_province']['relationship'] = 'field_training_location_nid';
  $handler->display->display_options['fields']['field_location_province']['label'] = '';
  $handler->display->display_options['fields']['field_location_province']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_province']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_province']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_province']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_province']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_province']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_location_province']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_province']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_province']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_province']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_province']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_location_province']['field_api_classes'] = 0;
  /* Field: Content: Postal Code */
  $handler->display->display_options['fields']['field_location_postal_code']['id'] = 'field_location_postal_code';
  $handler->display->display_options['fields']['field_location_postal_code']['table'] = 'field_data_field_location_postal_code';
  $handler->display->display_options['fields']['field_location_postal_code']['field'] = 'field_location_postal_code';
  $handler->display->display_options['fields']['field_location_postal_code']['relationship'] = 'field_training_location_nid';
  $handler->display->display_options['fields']['field_location_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_location_postal_code']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_postal_code']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_postal_code']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_postal_code']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_postal_code']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_postal_code']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_postal_code']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_postal_code']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_postal_code']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_postal_code']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_postal_code']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_postal_code']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_postal_code']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_postal_code']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_postal_code']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_location_postal_code']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_postal_code']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_postal_code']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_postal_code']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_postal_code']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'events' => 'events',
    'training' => 'training',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['training_location_details'] = array(
    t('Master'),
    t('Location'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('training_location'),
    t('[field_location_map_embed_code]'),
    t('_blank'),
    t('[field_location_city],'),
    t('All'),
    t('Block'),
  );
  $export['training_location_details'] = $view;

  return $export;
}
