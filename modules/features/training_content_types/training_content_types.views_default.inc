<?php
/**
 * @file
 * training_content_types.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function training_content_types_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'training_events_related_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Training and Events Related Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Classes';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = FALSE;
  $handler->display->display_options['footer']['php']['php_output'] = '<?php

global $language;

$current_nid = arg(1);

?>

<a href="/<?php print $language->language; ?>/training-and-events/course/<?php print $current_nid; ?>" class="download-button"><?php print t(\'Browse All\') ?></a>
';
  /* Relationship: Content: Course Information (field_training_course) */
  $handler->display->display_options['relationships']['field_training_course_nid']['id'] = 'field_training_course_nid';
  $handler->display->display_options['relationships']['field_training_course_nid']['table'] = 'field_data_field_training_course';
  $handler->display->display_options['relationships']['field_training_course_nid']['field'] = 'field_training_course_nid';
  $handler->display->display_options['relationships']['field_training_course_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_training_course_nid']['delta'] = '-1';
  /* Relationship: Content: Location (field_training_location) */
  $handler->display->display_options['relationships']['field_training_location_nid']['id'] = 'field_training_location_nid';
  $handler->display->display_options['relationships']['field_training_location_nid']['table'] = 'field_data_field_training_location';
  $handler->display->display_options['relationships']['field_training_location_nid']['field'] = 'field_training_location_nid';
  $handler->display->display_options['relationships']['field_training_location_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_training_location_nid']['delta'] = '-1';
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_training_events_featured']['id'] = 'field_training_events_featured';
  $handler->display->display_options['fields']['field_training_events_featured']['table'] = 'field_data_field_training_events_featured';
  $handler->display->display_options['fields']['field_training_events_featured']['field'] = 'field_training_events_featured';
  $handler->display->display_options['fields']['field_training_events_featured']['label'] = '';
  $handler->display->display_options['fields']['field_training_events_featured']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_events_featured']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_training_events_featured']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_training_events_featured']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_training_events_featured']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_training_events_featured']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_training_events_featured']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_training_events_featured']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_training_events_featured']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_training_events_featured']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_training_events_featured']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_training_events_featured']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_training_events_featured']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_training_events_featured']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_training_events_featured']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_events_featured']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_training_events_featured']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_training_events_featured']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_events_featured']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_training_events_featured']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_training_course_nid';
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
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_training_start_date']['id'] = 'field_training_start_date';
  $handler->display->display_options['fields']['field_training_start_date']['table'] = 'field_data_field_training_start_date';
  $handler->display->display_options['fields']['field_training_start_date']['field'] = 'field_training_start_date';
  $handler->display->display_options['fields']['field_training_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_training_start_date']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_training_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_start_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_training_start_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_training_start_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_training_start_date']['settings'] = array(
    'format_type' => 'standard',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_training_start_date']['field_api_classes'] = 0;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['relationship'] = 'field_training_location_nid';
  $handler->display->display_options['fields']['field_location_city']['label'] = '';
  $handler->display->display_options['fields']['field_location_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_city']['alter']['alter_text'] = 0;
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
  $handler->display->display_options['fields']['field_location_city']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_location_province']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_location_province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_province']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_province']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_province']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_province']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_province']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_location_province']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<div class="featured-title">[field_training_events_featured]</div>
  <span class="related-content-title">[title]</span>
  [field_training_start_date]
  <span class="related-content-location">[field_location_city], [field_location_province]</span>';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'related-content-node [field_training_events_featured]';
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  /* Sort criterion: Content: Featured (field_training_events_featured) */
  $handler->display->display_options['sorts']['field_training_events_featured_value']['id'] = 'field_training_events_featured_value';
  $handler->display->display_options['sorts']['field_training_events_featured_value']['table'] = 'field_data_field_training_events_featured';
  $handler->display->display_options['sorts']['field_training_events_featured_value']['field'] = 'field_training_events_featured_value';
  $handler->display->display_options['sorts']['field_training_events_featured_value']['order'] = 'DESC';
  /* Sort criterion: Content: Start Date -  start date (field_training_start_date) */
  $handler->display->display_options['sorts']['field_training_start_date_value']['id'] = 'field_training_start_date_value';
  $handler->display->display_options['sorts']['field_training_start_date_value']['table'] = 'field_data_field_training_start_date';
  $handler->display->display_options['sorts']['field_training_start_date_value']['field'] = 'field_training_start_date_value';
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
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'events' => 'events',
    'training' => 'training',
  );
  /* Filter criterion: Content: Start Date -  start date (field_training_start_date) */
  $handler->display->display_options['filters']['field_training_start_date_value']['id'] = 'field_training_start_date_value';
  $handler->display->display_options['filters']['field_training_start_date_value']['table'] = 'field_data_field_training_start_date';
  $handler->display->display_options['filters']['field_training_start_date_value']['field'] = 'field_training_start_date_value';
  $handler->display->display_options['filters']['field_training_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_training_start_date_value']['expose']['operator_id'] = 'field_training_start_date_value_op';
  $handler->display->display_options['filters']['field_training_start_date_value']['expose']['label'] = 'Start Date -  start date (field_training_start_date)';
  $handler->display->display_options['filters']['field_training_start_date_value']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['field_training_start_date_value']['expose']['operator'] = 'field_training_start_date_value_op';
  $handler->display->display_options['filters']['field_training_start_date_value']['expose']['identifier'] = 'field_training_start_date_value';
  $handler->display->display_options['filters']['field_training_start_date_value']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_training_start_date_value']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_training_start_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_training_start_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_training_start_date_value']['year_range'] = '-0:+3';
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Training & Events';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = FALSE;
  $handler->display->display_options['footer']['php']['php_output'] = '<?php

global $language;

$output_link = \'/\' . $language->language . \'/training-and-events?keys=&\';

if (arg(0) == \'node\' && is_numeric(arg(1))) {
  $node = node_load(arg(1));

  if ($node) {

    // grab terms
    $node_terms = array();

    $term_fieldnames = array(
      \'field_gp_term_industry\' => \'field_cd_typeindustry_tid\', 
      \'field_gp_term_product\' => \'field_cd_typeproduct_tid\',
      );

    foreach ($term_fieldnames as $term_fieldname => $term_equiv) {
      $terms = field_get_items(\'node\', $node, $term_fieldname);
      if ($terms) {
        foreach ($terms as $term_array) {
          $node_terms[$term_equiv][] = $term_array[\'tid\'];
        }
      }
    }
  }

  if (!empty($node_terms[\'field_cd_typeindustry_tid\'])) {
    foreach ($node_terms[\'field_cd_typeindustry_tid\'] as $current_tid) {
      $output_link .= \'field_cd_typeindustry_tid%5B%5D=\' . $current_tid . \'&\';
    }
  }

  if (!empty($node_terms[\'field_cd_typeproduct_tid\'])) {
    foreach ($node_terms[\'field_cd_typeproduct_tid\'] as $current_tid) {
      $output_link .= \'field_cd_typeproduct_tid%5B%5D=\' . $current_tid . \'&\';
    }
  }

}

$output_link .= \'field_training_start_date_value%5Bvalue%5D%5Bdate%5D=2012-09-26&field_training_start_date_value2%5Bvalue%5D%5Bdate%5D=&sort_by=field_training_start_date_value&sort_order=ASC\';

?>

<a href="<?php print $output_link; ?>" class="all"><?php print t(\'Browse All\') ?></a>';
  $handler->display->display_options['pane_title'] = 'Related Training and Events';

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = FALSE;
  $handler->display->display_options['footer']['php']['php_output'] = '<?php

global $language;

$current_nid = arg(1);

?>

<a href="/<?php print $language->language; ?>/training-and-events/course/<?php print $current_nid; ?>" class="all"><?php print t(\'Browse All\') ?></a>
';
  $handler->display->display_options['pane_title'] = 'Upcoming Classes';
  $translatables['training_events_related_content'] = array(
    t('Master'),
    t('Upcoming Classes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_training_course'),
    t('field_training_location'),
    t('<div class="featured-title">[field_training_events_featured]</div>
  <span class="related-content-title">[title]</span>
  [field_training_start_date]
  <span class="related-content-location">[field_location_city], [field_location_province]</span>'),
    t('[title]'),
    t('All'),
    t('Start Date -  start date (field_training_start_date)'),
    t('Content pane'),
    t('Upcoming Training & Events'),
    t('Related Training and Events'),
    t('View panes'),
    t('Content pane 2'),
  );
  $export['training_events_related_content'] = $view;

  return $export;
}
