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
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['element_label_colon'] = FALSE;
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
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_ascevents_datetime']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ascevents_datetime']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ascevents_image']['id'] = 'field_ascevents_image';
  $handler->display->display_options['fields']['field_ascevents_image']['table'] = 'field_data_field_ascevents_image';
  $handler->display->display_options['fields']['field_ascevents_image']['field'] = 'field_ascevents_image';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'asc_events_page');
  $handler->display->display_options['display_description'] = 'Events by Month';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
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
  $handler = $view->new_display('page', 'Page Day', 'page_3');
  $handler->display->display_options['display_description'] = 'Events on a single day.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
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
  $handler->display->display_options['path'] = 'taxonomy/term/%';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Calendar Block */
  $handler = $view->new_display('block', 'Calendar Block', 'block_1');
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

  /* Display: Large Feature */
  $handler = $view->new_display('block', 'Large Feature', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
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
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['element_label_colon'] = FALSE;
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
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_ascevents_datetime']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ascevents_datetime']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ascevents_datetime']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['field_ascevents_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ascevents_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 0,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 0,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 0,
      'ellipsis' => 0,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 0,
    'hide_alter_empty' => 0,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
    'image_link' => '',
    'styles' => array(
      'breakpoint_1' => '',
      'style_1' => '',
      'breakpoint_2' => '',
      'style_2' => '',
      'breakpoint_3' => '',
      'style_3' => '',
      'breakpoint_4' => '',
      'style_4' => '',
      'breakpoint_5' => '',
      'style_5' => '',
      'max_style' => '',
      'fallback_style' => '',
    ),
  );
  $handler->display->display_options['fields']['field_ascevents_image']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_ascevents_datetime.field_ascevents_datetime_value' => 'field_data_field_ascevents_datetime.field_ascevents_datetime_value',
  );
  $export['asc_events'] = $view;

  return $export;
}
