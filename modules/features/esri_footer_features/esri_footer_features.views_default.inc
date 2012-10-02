<?php
/**
 * @file
 * esri_footer_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function esri_footer_features_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'footer_feature';
  $view->description = 'Display the four featured items in the footer.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Footer Feature';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Footer Feature';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link To */
  $handler->display->display_options['fields']['field_footer_feature_link']['id'] = 'field_footer_feature_link';
  $handler->display->display_options['fields']['field_footer_feature_link']['table'] = 'field_data_field_footer_feature_link';
  $handler->display->display_options['fields']['field_footer_feature_link']['field'] = 'field_footer_feature_link';
  $handler->display->display_options['fields']['field_footer_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_footer_feature_link']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_footer_feature_link']['alter']['text'] = '[field_footer_feature_link-value]';
  $handler->display->display_options['fields']['field_footer_feature_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_footer_feature_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_footer_feature_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_footer_feature_link']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_footer_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_footer_feature_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_footer_feature_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_footer_feature_link']['field_api_classes'] = 0;
  /* Field: Content: Icon */
  $handler->display->display_options['fields']['field_footer_feature_icon']['id'] = 'field_footer_feature_icon';
  $handler->display->display_options['fields']['field_footer_feature_icon']['table'] = 'field_data_field_footer_feature_icon';
  $handler->display->display_options['fields']['field_footer_feature_icon']['field'] = 'field_footer_feature_icon';
  $handler->display->display_options['fields']['field_footer_feature_icon']['label'] = '';
  $handler->display->display_options['fields']['field_footer_feature_icon']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_icon']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_icon']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_icon']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_icon']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_icon']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_icon']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_icon']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_footer_feature_icon']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_footer_feature_icon']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_icon']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_icon']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_icon']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_footer_feature_icon']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_footer_feature_icon']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_icon']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_footer_feature_icon']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_footer_feature_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_footer_feature_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_footer_feature_icon']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['title_field']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_field']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_field']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_field']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_field']['field_api_classes'] = 0;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Body */
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Link To Text */
  $handler->display->display_options['fields']['field_link_to_text']['id'] = 'field_link_to_text';
  $handler->display->display_options['fields']['field_link_to_text']['table'] = 'field_data_field_link_to_text';
  $handler->display->display_options['fields']['field_link_to_text']['field'] = 'field_link_to_text';
  $handler->display->display_options['fields']['field_link_to_text']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_text']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_to_text']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_link_to_text']['alter']['path'] = '[field_footer_feature_link]';
  $handler->display->display_options['fields']['field_link_to_text']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_link_to_text']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_to_text']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_to_text']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link_to_text']['alter']['link_class'] = 'footer-feature-link-inner';
  $handler->display->display_options['fields']['field_link_to_text']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_to_text']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_to_text']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_to_text']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_link_to_text']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_to_text']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_to_text']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_to_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_text']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_link_to_text']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_to_text']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_to_text']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_link_to_text']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'footer_feature' => 'footer_feature',
  );
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['footer_feature'] = array(
    t('Master'),
    t('Footer Feature'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_footer_feature_link-value]'),
    t('[field_footer_feature_link]'),
    t('Block'),
  );
  $export['footer_feature'] = $view;

  return $export;
}
