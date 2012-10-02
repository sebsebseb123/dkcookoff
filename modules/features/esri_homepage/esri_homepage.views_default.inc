<?php
/**
 * @file
 * esri_homepage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function esri_homepage_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'focal_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Focal Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Focal Slider';
  $handler->display->display_options['css_class'] = 'focal-slide';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'slide slide-[counter]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = FALSE;
  $handler->display->display_options['footer']['php']['php_output'] = '<div class="focal-pagination">
<a href="javascript:void(0);" class="focal-prev"><?php print t(\'Prev\') ?></a>
<a href="javascript:void(0);" class="focal-next"><?php print t(\'Next\') ?></a>
</div>';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Focal Large */
  $handler->display->display_options['fields']['field_focal_large']['id'] = 'field_focal_large';
  $handler->display->display_options['fields']['field_focal_large']['table'] = 'field_data_field_focal_large';
  $handler->display->display_options['fields']['field_focal_large']['field'] = 'field_focal_large';
  $handler->display->display_options['fields']['field_focal_large']['label'] = '';
  $handler->display->display_options['fields']['field_focal_large']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_focal_large']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_focal_large']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_focal_large']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_focal_large']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_focal_large']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_focal_large']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_focal_large']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_focal_large']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_focal_large']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_focal_large']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_focal_large']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_focal_large']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_focal_large']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_focal_large']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focal_large']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_focal_large']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_focal_large']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_focal_large']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_focal_large']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_focal_large']['settings'] = array(
    'image_style' => 'focal_large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_focal_large']['field_api_classes'] = 0;
  /* Field: Content: Focal Medium */
  $handler->display->display_options['fields']['field_focal_medium']['id'] = 'field_focal_medium';
  $handler->display->display_options['fields']['field_focal_medium']['table'] = 'field_data_field_focal_medium';
  $handler->display->display_options['fields']['field_focal_medium']['field'] = 'field_focal_medium';
  $handler->display->display_options['fields']['field_focal_medium']['label'] = '';
  $handler->display->display_options['fields']['field_focal_medium']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_focal_medium']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_focal_medium']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_focal_medium']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_focal_medium']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_focal_medium']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_focal_medium']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_focal_medium']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_focal_medium']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_focal_medium']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_focal_medium']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_focal_medium']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_focal_medium']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_focal_medium']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_focal_medium']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focal_medium']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_focal_medium']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_focal_medium']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_focal_medium']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_focal_medium']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_focal_medium']['settings'] = array(
    'image_style' => 'focal_medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_focal_medium']['field_api_classes'] = 0;
  /* Field: Content: Focal Small */
  $handler->display->display_options['fields']['field_focal_small']['id'] = 'field_focal_small';
  $handler->display->display_options['fields']['field_focal_small']['table'] = 'field_data_field_focal_small';
  $handler->display->display_options['fields']['field_focal_small']['field'] = 'field_focal_small';
  $handler->display->display_options['fields']['field_focal_small']['label'] = '';
  $handler->display->display_options['fields']['field_focal_small']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_focal_small']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_focal_small']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_focal_small']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_focal_small']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_focal_small']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_focal_small']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_focal_small']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_focal_small']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_focal_small']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_focal_small']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_focal_small']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_focal_small']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_focal_small']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_focal_small']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focal_small']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_focal_small']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_focal_small']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_focal_small']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_focal_small']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_focal_small']['settings'] = array(
    'image_style' => 'focal_small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_focal_small']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_focal_link']['id'] = 'field_focal_link';
  $handler->display->display_options['fields']['field_focal_link']['table'] = 'field_data_field_focal_link';
  $handler->display->display_options['fields']['field_focal_link']['field'] = 'field_focal_link';
  $handler->display->display_options['fields']['field_focal_link']['label'] = '';
  $handler->display->display_options['fields']['field_focal_link']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_focal_link']['alter']['text'] = '<div class="slide-img-large">
[field_focal_large]
</div>
<div class="slide-img-medium">
[field_focal_medium]
</div>
<div class="slide-img-small">
[field_focal_small] 
</div>';
  $handler->display->display_options['fields']['field_focal_link']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_focal_link']['alter']['path'] = '[field_focal_link-url]';
  $handler->display->display_options['fields']['field_focal_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_focal_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_focal_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_focal_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_focal_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_focal_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_focal_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_focal_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_focal_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_focal_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_focal_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_focal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focal_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_focal_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_focal_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_focal_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_focal_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_focal_link']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_focal_link']['field_api_classes'] = 0;
  /* Sort criterion: Content: Output Order (field_focal_output_order) */
  $handler->display->display_options['sorts']['field_focal_output_order_value']['id'] = 'field_focal_output_order_value';
  $handler->display->display_options['sorts']['field_focal_output_order_value']['table'] = 'field_data_field_focal_output_order';
  $handler->display->display_options['sorts']['field_focal_output_order_value']['field'] = 'field_focal_output_order_value';
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
    'page_focals' => 'page_focals',
  );
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Focal Group (field_focal_group) */
  $handler->display->display_options['filters']['field_focal_group_tid']['id'] = 'field_focal_group_tid';
  $handler->display->display_options['filters']['field_focal_group_tid']['table'] = 'field_data_field_focal_group';
  $handler->display->display_options['filters']['field_focal_group_tid']['field'] = 'field_focal_group_tid';
  $handler->display->display_options['filters']['field_focal_group_tid']['value'] = array(
    132 => '132',
  );
  $handler->display->display_options['filters']['field_focal_group_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_focal_group_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_focal_group_tid']['vocabulary'] = 'page_focal_groups';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Homepage Focal */
  $handler = $view->new_display('block', 'Homepage Focal', 'block_1');
  $handler->display->display_options['display_description'] = 'Focal Used on Homepage';
  $translatables['focal_slider'] = array(
    t('Master'),
    t('Focal Slider'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="slide-img-large">
[field_focal_large]
</div>
<div class="slide-img-medium">
[field_focal_medium]
</div>
<div class="slide-img-small">
[field_focal_small] 
</div>'),
    t('[field_focal_link-url]'),
    t('Block'),
    t('Homepage Focal'),
    t('Focal Used on Homepage'),
  );
  $export['focal_slider'] = $view;

  $view = new view;
  $view->name = 'homepage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Esri Canada';
  $handler->display->display_options['css_class'] = 'homepage-features';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Large Feature - Image */
  $handler->display->display_options['fields']['field_large_feature_image']['id'] = 'field_large_feature_image';
  $handler->display->display_options['fields']['field_large_feature_image']['table'] = 'field_data_field_large_feature_image';
  $handler->display->display_options['fields']['field_large_feature_image']['field'] = 'field_large_feature_image';
  $handler->display->display_options['fields']['field_large_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_large_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_large_feature_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_large_feature_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_large_feature_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_large_feature_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_large_feature_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_large_feature_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_large_feature_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_large_feature_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_large_feature_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_large_feature_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_large_feature_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_large_feature_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_large_feature_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_large_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_large_feature_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_large_feature_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_large_feature_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_large_feature_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_large_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_large_feature_image']['settings'] = array(
    'image_style' => 'feature_large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_large_feature_image']['field_api_classes'] = 0;
  /* Field: Content: Large Feature - Description */
  $handler->display->display_options['fields']['field_large_feature_description']['id'] = 'field_large_feature_description';
  $handler->display->display_options['fields']['field_large_feature_description']['table'] = 'field_data_field_large_feature_description';
  $handler->display->display_options['fields']['field_large_feature_description']['field'] = 'field_large_feature_description';
  $handler->display->display_options['fields']['field_large_feature_description']['label'] = '';
  $handler->display->display_options['fields']['field_large_feature_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_large_feature_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_large_feature_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_large_feature_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_large_feature_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_large_feature_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_large_feature_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_large_feature_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_large_feature_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_large_feature_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_large_feature_description']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_large_feature_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_large_feature_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_large_feature_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_large_feature_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_large_feature_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_large_feature_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_large_feature_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_large_feature_description']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_large_feature_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_large_feature_description']['field_api_classes'] = 0;
  /* Field: Content: Large Feature - Link */
  $handler->display->display_options['fields']['field_large_feature_link']['id'] = 'field_large_feature_link';
  $handler->display->display_options['fields']['field_large_feature_link']['table'] = 'field_data_field_large_feature_link';
  $handler->display->display_options['fields']['field_large_feature_link']['field'] = 'field_large_feature_link';
  $handler->display->display_options['fields']['field_large_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['text'] = '<div class="feature-big-arrow"></div>
<div class="description">[field_large_feature_description]</div>[field_large_feature_image]';
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['path'] = '[field_large_feature_link-url]';
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_large_feature_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_large_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_large_feature_link']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_large_feature_link']['element_wrapper_class'] = 'large-feature';
  $handler->display->display_options['fields']['field_large_feature_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_large_feature_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_large_feature_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_large_feature_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_large_feature_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_large_feature_link']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_large_feature_link']['field_api_classes'] = 0;
  /* Field: Content: Small Feature 1 - Title */
  $handler->display->display_options['fields']['field_small_feature_1_title']['id'] = 'field_small_feature_1_title';
  $handler->display->display_options['fields']['field_small_feature_1_title']['table'] = 'field_data_field_small_feature_1_title';
  $handler->display->display_options['fields']['field_small_feature_1_title']['field'] = 'field_small_feature_1_title';
  $handler->display->display_options['fields']['field_small_feature_1_title']['label'] = '';
  $handler->display->display_options['fields']['field_small_feature_1_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_small_feature_1_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_small_feature_1_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_small_feature_1_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_title']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_small_feature_1_title']['field_api_classes'] = 0;
  /* Field: Content: Small Feature 1 - Description */
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['id'] = 'field_small_feature_1_descriptio';
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['table'] = 'field_data_field_small_feature_1_descriptio';
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['field'] = 'field_small_feature_1_descriptio';
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['label'] = '';
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_small_feature_1_descriptio']['field_api_classes'] = 0;
  /* Field: Content: Small Feature 1 - Image */
  $handler->display->display_options['fields']['field_small_feature_1_image']['id'] = 'field_small_feature_1_image';
  $handler->display->display_options['fields']['field_small_feature_1_image']['table'] = 'field_data_field_small_feature_1_image';
  $handler->display->display_options['fields']['field_small_feature_1_image']['field'] = 'field_small_feature_1_image';
  $handler->display->display_options['fields']['field_small_feature_1_image']['label'] = '';
  $handler->display->display_options['fields']['field_small_feature_1_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_small_feature_1_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_small_feature_1_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_small_feature_1_image']['settings'] = array(
    'image_style' => 'feature_small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_small_feature_1_image']['field_api_classes'] = 0;
  /* Field: Content: Small Feature 1 - Link */
  $handler->display->display_options['fields']['field_small_feature_1_link']['id'] = 'field_small_feature_1_link';
  $handler->display->display_options['fields']['field_small_feature_1_link']['table'] = 'field_data_field_small_feature_1_link';
  $handler->display->display_options['fields']['field_small_feature_1_link']['field'] = 'field_small_feature_1_link';
  $handler->display->display_options['fields']['field_small_feature_1_link']['label'] = '';
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['text'] = '<div class="small-image"><h3 class="title"><span>[field_small_feature_1_title]</span></h3>
<div class="feature-big-arrow"></div>
[field_small_feature_1_image]</div>
<div class="description">
[field_small_feature_1_descriptio]</div>';
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['path'] = '[field_small_feature_1_link-url]';
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_small_feature_1_link']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_small_feature_1_link']['element_wrapper_class'] = 'small-feature small-feature-1';
  $handler->display->display_options['fields']['field_small_feature_1_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_small_feature_1_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_small_feature_1_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_small_feature_1_link']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_small_feature_1_link']['field_api_classes'] = 0;
  /* Field: Content: Small Feature 2 - Title */
  $handler->display->display_options['fields']['field_small_feature_2_title']['id'] = 'field_small_feature_2_title';
  $handler->display->display_options['fields']['field_small_feature_2_title']['table'] = 'field_data_field_small_feature_2_title';
  $handler->display->display_options['fields']['field_small_feature_2_title']['field'] = 'field_small_feature_2_title';
  $handler->display->display_options['fields']['field_small_feature_2_title']['label'] = '';
  $handler->display->display_options['fields']['field_small_feature_2_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_small_feature_2_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_small_feature_2_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_small_feature_2_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_title']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_small_feature_2_title']['field_api_classes'] = 0;
  /* Field: Content: Small Feature 2 - Description */
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['id'] = 'field_small_feature_2_descriptio';
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['table'] = 'field_data_field_small_feature_2_descriptio';
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['field'] = 'field_small_feature_2_descriptio';
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['label'] = '';
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_small_feature_2_descriptio']['field_api_classes'] = 0;
  /* Field: Content: Small Feature 2 - Image */
  $handler->display->display_options['fields']['field_small_feature_2_image']['id'] = 'field_small_feature_2_image';
  $handler->display->display_options['fields']['field_small_feature_2_image']['table'] = 'field_data_field_small_feature_2_image';
  $handler->display->display_options['fields']['field_small_feature_2_image']['field'] = 'field_small_feature_2_image';
  $handler->display->display_options['fields']['field_small_feature_2_image']['label'] = '';
  $handler->display->display_options['fields']['field_small_feature_2_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_small_feature_2_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_small_feature_2_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_small_feature_2_image']['settings'] = array(
    'image_style' => 'feature_small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_small_feature_2_image']['field_api_classes'] = 0;
  /* Field: Content: Small Feature 2 - Link */
  $handler->display->display_options['fields']['field_small_feature_2_link']['id'] = 'field_small_feature_2_link';
  $handler->display->display_options['fields']['field_small_feature_2_link']['table'] = 'field_data_field_small_feature_2_link';
  $handler->display->display_options['fields']['field_small_feature_2_link']['field'] = 'field_small_feature_2_link';
  $handler->display->display_options['fields']['field_small_feature_2_link']['label'] = '';
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['text'] = '<div class="small-image"><h3 class="title"><span>[field_small_feature_2_title]</span></h3>
<div class="feature-big-arrow"></div>
[field_small_feature_2_image]</div>
<div class="description">
[field_small_feature_2_descriptio]</div>';
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['path'] = '[field_small_feature_2_link]';
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_small_feature_2_link']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_small_feature_2_link']['element_wrapper_class'] = 'small-feature small-feature-2';
  $handler->display->display_options['fields']['field_small_feature_2_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_small_feature_2_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_small_feature_2_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_small_feature_2_link']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_small_feature_2_link']['field_api_classes'] = 0;
  /* Sort criterion: Content: Output Order (field_feature_output_order) */
  $handler->display->display_options['sorts']['field_feature_output_order_value']['id'] = 'field_feature_output_order_value';
  $handler->display->display_options['sorts']['field_feature_output_order_value']['table'] = 'field_data_field_feature_output_order';
  $handler->display->display_options['sorts']['field_feature_output_order_value']['field'] = 'field_feature_output_order_value';
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
    'page_features' => 'page_features',
  );
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'homepage';
  $translatables['homepage'] = array(
    t('Master'),
    t('Esri Canada'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="feature-big-arrow"></div>
<div class="description">[field_large_feature_description]</div>[field_large_feature_image]'),
    t('[field_large_feature_link-url]'),
    t('<div class="small-image"><h3 class="title"><span>[field_small_feature_1_title]</span></h3>
<div class="feature-big-arrow"></div>
[field_small_feature_1_image]</div>
<div class="description">
[field_small_feature_1_descriptio]</div>'),
    t('[field_small_feature_1_link-url]'),
    t('<div class="small-image"><h3 class="title"><span>[field_small_feature_2_title]</span></h3>
<div class="feature-big-arrow"></div>
[field_small_feature_2_image]</div>
<div class="description">
[field_small_feature_2_descriptio]</div>'),
    t('[field_small_feature_2_link]'),
    t('Page'),
  );
  $export['homepage'] = $view;

  return $export;
}
