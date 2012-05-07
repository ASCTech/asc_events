<?php
/**
 * @file
 * asc_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function asc_events_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'events';
  $view->description = 'Views for ASC Events Module';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['css_class'] = 'features-list features';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['id'] = 'field_ascevents_datetime_1';
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['table'] = 'field_data_field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['field'] = 'field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['label'] = '';
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['settings'] = array(
    'format_type' => 'date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ascevents_image']['id'] = 'field_ascevents_image';
  $handler->display->display_options['fields']['field_ascevents_image']['table'] = 'field_data_field_ascevents_image';
  $handler->display->display_options['fields']['field_ascevents_image']['field'] = 'field_ascevents_image';
  $handler->display->display_options['fields']['field_ascevents_image']['label'] = '';
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ascevents_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ascevents_image']['empty'] = '<a href="[path]" title="[title]"><img src=\'/sites/all/themes/q7/datebox/datebox.png.php?t=4&d=[field_ascevents_datetime_1]\' alt="[title]" title="[title]" width="40" height="45" /></a>';
  $handler->display->display_options['fields']['field_ascevents_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_ascevents_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ascevents_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ascevents_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ascevents_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ascevents_datetime']['id'] = 'field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime']['table'] = 'field_data_field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime']['field'] = 'field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ascevents_datetime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ascevents_datetime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ascevents_datetime']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ascevents_datetime']['field_api_classes'] = 0;
  /* Sort criterion: Content: Date -  start date (field_ascevents_datetime) */
  $handler->display->display_options['sorts']['field_ascevents_datetime_value']['id'] = 'field_ascevents_datetime_value';
  $handler->display->display_options['sorts']['field_ascevents_datetime_value']['table'] = 'field_data_field_ascevents_datetime';
  $handler->display->display_options['sorts']['field_ascevents_datetime_value']['field'] = 'field_ascevents_datetime_value';
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
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'events';

  /* Display: Date browser */
  $handler = $view->new_display('date_nav', 'Date browser', 'date_nav_1');

  /* Display: Feature */
  $handler = $view->new_display('block', 'Feature', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'features-list features';
  $handler->display->display_options['display_description'] = 'Front page feature';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['events'] = $view;

  return $export;
}
