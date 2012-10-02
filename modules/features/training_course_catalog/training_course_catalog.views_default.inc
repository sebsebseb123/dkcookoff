<?php
/**
 * @file
 * training_course_catalog.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function training_course_catalog_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'course_catalog';
  $view->description = 'Show list of course category.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course Catalog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Course Catalog';
  $handler->display->display_options['css_class'] = 'course-catalog';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_cd_course_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 0;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'course_category' => 'course_category',
    'boolean' => 0,
    'cities' => 0,
    'resource_type' => 0,
    'delivery_language' => 0,
    'difficulty_level' => 0,
    'file_type' => 0,
    'geographic_focus' => 0,
    'grade' => 0,
    'page_focal_groups' => 0,
    'platform_education' => 0,
    'product_education' => 0,
    'provinces' => 0,
    'resource_industry' => 0,
    'resource_product' => 0,
    'resource_services' => 0,
    'subject_area' => 0,
    'tags' => 0,
    'teaching_material_type' => 0,
    'time_zones' => 0,
    'training_type' => 0,
  );
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Course Category */
  $handler->display->display_options['fields']['field_cd_course_category']['id'] = 'field_cd_course_category';
  $handler->display->display_options['fields']['field_cd_course_category']['table'] = 'field_data_field_cd_course_category';
  $handler->display->display_options['fields']['field_cd_course_category']['field'] = 'field_cd_course_category';
  $handler->display->display_options['fields']['field_cd_course_category']['label'] = '';
  $handler->display->display_options['fields']['field_cd_course_category']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_cd_course_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cd_course_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cd_course_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cd_course_category']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cd_course_category']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cd_course_category']['field_api_classes'] = 0;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'cd' => 'cd',
  );
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Course Category (field_cd_course_category) */
  $handler->display->display_options['filters']['field_cd_course_category_tid']['id'] = 'field_cd_course_category_tid';
  $handler->display->display_options['filters']['field_cd_course_category_tid']['table'] = 'field_data_field_cd_course_category';
  $handler->display->display_options['filters']['field_cd_course_category_tid']['field'] = 'field_cd_course_category_tid';
  $handler->display->display_options['filters']['field_cd_course_category_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_cd_course_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_cd_course_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cd_course_category_tid']['vocabulary'] = 'course_category';
  $handler->display->display_options['filters']['field_cd_course_category_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'course-catalog';
  $translatables['course_catalog'] = array(
    t('Master'),
    t('Course Catalog'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('term'),
    t('Page'),
  );
  $export['course_catalog'] = $view;

  return $export;
}
