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
  $view->name = 'asc_events';
  $view->description = 'Views for ASC Events';
  $view->tag = 'ASC';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = '+';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ascevents_image']['id'] = 'field_ascevents_image';
  $handler->display->display_options['fields']['field_ascevents_image']['table'] = 'field_data_field_ascevents_image';
  $handler->display->display_options['fields']['field_ascevents_image']['field'] = 'field_ascevents_image';
  $handler->display->display_options['fields']['field_ascevents_image']['label'] = '';
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['alter_text'] = 0;
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
  $handler->display->display_options['fields']['field_ascevents_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ascevents_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ascevents_image']['settings'] = array(
    'image_style' => 'news_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ascevents_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Event';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ascevents_datetime']['id'] = 'field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime']['table'] = 'field_data_field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime']['field'] = 'field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime']['label'] = 'When';
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
  $handler->display->display_options['fields']['field_ascevents_datetime']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ascevents_datetime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ascevents_datetime']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ascevents_datetime']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['field_api_classes'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_ascevents_location']['id'] = 'field_ascevents_location';
  $handler->display->display_options['fields']['field_ascevents_location']['table'] = 'field_data_field_ascevents_location';
  $handler->display->display_options['fields']['field_ascevents_location']['field'] = 'field_ascevents_location';
  $handler->display->display_options['fields']['field_ascevents_location']['label'] = 'Where';
  $handler->display->display_options['fields']['field_ascevents_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ascevents_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ascevents_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ascevents_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ascevents_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ascevents_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ascevents_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ascevents_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ascevents_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ascevents_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ascevents_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ascevents_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ascevents_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ascevents_location']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ascevents_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ascevents_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ascevents_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ascevents_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ascevents_location']['field_api_classes'] = 0;
  /* Sort criterion: Content: Date -  start date (field_ascevents_datetime) */
  $handler->display->display_options['sorts']['field_ascevents_datetime_value']['id'] = 'field_ascevents_datetime_value';
  $handler->display->display_options['sorts']['field_ascevents_datetime_value']['table'] = 'field_data_field_ascevents_datetime';
  $handler->display->display_options['sorts']['field_ascevents_datetime_value']['field'] = 'field_ascevents_datetime_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asc_event' => 'asc_event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'asc_events_page');
  $handler->display->display_options['display_description'] = 'Events by Month';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ascevents_datetime' => 'field_ascevents_datetime',
    'field_ascevents_image' => 'field_ascevents_image',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ascevents_datetime' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ascevents_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_ascevents_datetime.field_ascevents_datetime_value' => 'field_data_field_ascevents_datetime.field_ascevents_datetime_value',
  );
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Page Day */
  $handler = $view->new_display('page', 'Page Day', 'asc_events_page_day');
  $handler->display->display_options['display_description'] = 'Events on a single day.';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_ascevents_image' => 'field_ascevents_image',
    'title' => 'title',
    'field_ascevents_datetime' => 'field_ascevents_datetime',
    'field_ascevents_location' => 'field_ascevents_location',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_ascevents_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ascevents_datetime' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ascevents_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_ascevents_datetime.field_ascevents_datetime_value' => 'field_data_field_ascevents_datetime.field_ascevents_datetime_value',
  );
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['path'] = 'events/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Calendar Block */
  $handler = $view->new_display('block', 'Calendar Block', 'asc_events_cal_block');
  $handler->display->display_options['display_description'] = 'Calendar Block for Events Page';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_ascevents_datetime.field_ascevents_datetime_value' => 'field_data_field_ascevents_datetime.field_ascevents_datetime_value',
  );
  $handler->display->display_options['block_description'] = 'Events Calendar Block';

  /* Display: Small Feature */
  $handler = $view->new_display('block', 'Small Feature', 'asc_events_feature_small');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['id'] = 'field_ascevents_datetime_2';
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['table'] = 'field_data_field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['field'] = 'field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['label'] = '';
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ascevents_datetime_2']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ascevents_datetime']['id'] = 'field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime']['table'] = 'field_data_field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime']['field'] = 'field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['text'] = '<img src=\'http://standarddemo-d.asc.ohio-state.edu/profiles/asc/themes/q7/datebox/datebox.png.php?t=4&d=[field_ascevents_datetime_2]\' alt="[title]" title="[title]" width="40" height="45" />';
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
  $handler->display->display_options['fields']['field_ascevents_datetime']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_ascevents_datetime']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ascevents_datetime']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ascevents_datetime']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['id'] = 'field_ascevents_datetime_1';
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['table'] = 'field_data_field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['field'] = 'field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['label'] = '';
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['alter']['alter_text'] = 0;
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
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ascevents_datetime_1']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asc_event' => 'asc_event',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Date - end date (field_ascevents_datetime:value2) */
  $handler->display->display_options['filters']['field_ascevents_datetime_value2']['id'] = 'field_ascevents_datetime_value2';
  $handler->display->display_options['filters']['field_ascevents_datetime_value2']['table'] = 'field_data_field_ascevents_datetime';
  $handler->display->display_options['filters']['field_ascevents_datetime_value2']['field'] = 'field_ascevents_datetime_value2';
  $handler->display->display_options['filters']['field_ascevents_datetime_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_ascevents_datetime_value2']['default_date'] = 'now';
  $handler->display->display_options['block_description'] = 'Events Small Feature';

  /* Display: Large Feature */
  $handler = $view->new_display('block', 'Large Feature', 'asc_events_feature_large');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ascevents_image']['id'] = 'field_ascevents_image';
  $handler->display->display_options['fields']['field_ascevents_image']['table'] = 'field_data_field_ascevents_image';
  $handler->display->display_options['fields']['field_ascevents_image']['field'] = 'field_ascevents_image';
  $handler->display->display_options['fields']['field_ascevents_image']['label'] = '';
  $handler->display->display_options['fields']['field_ascevents_image']['alter']['alter_text'] = 0;
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
  $handler->display->display_options['fields']['field_ascevents_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ascevents_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ascevents_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ascevents_image']['settings'] = array(
    'image_style' => 'news_thumb',
    'image_link' => '',
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
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '45',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['field_ascevents_datetime']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ascevents_datetime']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ascevents_datetime']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Date - end date (field_ascevents_datetime:value2) */
  $handler->display->display_options['filters']['field_ascevents_datetime_value2']['id'] = 'field_ascevents_datetime_value2';
  $handler->display->display_options['filters']['field_ascevents_datetime_value2']['table'] = 'field_data_field_ascevents_datetime';
  $handler->display->display_options['filters']['field_ascevents_datetime_value2']['field'] = 'field_ascevents_datetime_value2';
  $handler->display->display_options['filters']['field_ascevents_datetime_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_ascevents_datetime_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asc_event' => 'asc_event',
  );
  $handler->display->display_options['block_description'] = 'Events Large Feature';

  /* Display: Large Feature Right */
  $handler = $view->new_display('attachment', 'Large Feature Right', 'asc_events_feature_right');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Event';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ascevents_datetime']['id'] = 'field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime']['table'] = 'field_data_field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime']['field'] = 'field_ascevents_datetime';
  $handler->display->display_options['fields']['field_ascevents_datetime']['label'] = 'When';
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
  $handler->display->display_options['fields']['field_ascevents_datetime']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ascevents_datetime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ascevents_datetime']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ascevents_datetime']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asc_event' => 'asc_event',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['displays'] = array(
    'asc_events_feature_large' => 'asc_events_feature_large',
    'default' => 0,
    'asc_events_page' => 0,
    'asc_events_page_day' => 0,
    'asc_events_cal_block' => 0,
    'asc_events_feature_small' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['asc_events'] = $view;

  return $export;
}
