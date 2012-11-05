<?php
/**
 * @file
 * asc_events.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function asc_events_block_class_features_default_class() {
  return array(
    0 => array(
      'module' => 'views',
      'delta' => '2790fec824f71409f95f23eb80b8c8a9',
      'css_classes' => 'feature-half',
    ),
    1 => array(
      'module' => 'views',
      'delta' => '6267fddf33d11d9a64ac1ac0aa2a9049',
      'css_classes' => 'feature-whole',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function asc_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function asc_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_custom_breadcrumbs_config_features_default_settings().
 */
function asc_events_custom_breadcrumbs_config_features_default_settings() {
  $custom_breadcrumbs_configs = array();

  $custom_breadcrumbs_configs[] = array(
    'asc_events-1689872192' => array(
      'name' => 'Events',
      'machine_name' => 'asc_events-1689872192',
      'titles' => 'Events
[node:title]',
      'paths' => 'events
[node:url:path]',
      'visibility_php' => '',
      'node_type' => 'asc_events',
      'language' => '',
    ),
  );
  return $custom_breadcrumbs_configs;
}

/**
 * Implements hook_custom_breadcrumbs_views_config_features_default_settings().
 */
function asc_events_custom_breadcrumbs_views_config_features_default_settings() {
  $custom_breadcrumbs_views_configs = array();

  $custom_breadcrumbs_views_configs[] = array(
    -124 => array(
      'name' => 'events',
      'machine_name' => 'asc_events-1670042653',
      'titles' => 'Events',
      'paths' => 'events',
      'visibility_php' => '',
      'views_path' => 'events',
      'language' => '',
    ),
  );
  $custom_breadcrumbs_views_configs[] = array(
    -1501275758 => array(
      'name' => 'Events Day',
      'machine_name' => 'asc_events-day-1670042653',
      'titles' => 'Events',
      'paths' => 'events',
      'visibility_php' => '',
      'views_path' => 'events/day',
      'language' => '',
    ),
  );
  $custom_breadcrumbs_views_configs[] = array(
    -1501275758 => array(
      'name' => 'Events Month',
      'machine_name' => 'asc_events-month-1670042653',
      'titles' => 'Events',
      'paths' => 'events',
      'visibility_php' => '',
      'views_path' => 'events/month',
      'language' => '',
    ),
  );
  $custom_breadcrumbs_views_configs[] = array(
    -101466245 => array(
      'name' => 'Events Year',
      'machine_name' => 'asc_events-year-1670042653',
      'titles' => 'Events',
      'paths' => 'events',
      'visibility_php' => '',
      'views_path' => 'events/year',
      'language' => '',
    ),
  );
  return $custom_breadcrumbs_views_configs;
}

/**
 * Implements hook_node_info().
 */
function asc_events_node_info() {
  $items = array(
    'asc_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Events for your organization.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
  );
  $custom_breadcrumbs_views_configs[] = array(
    -101466245 => array(),
  );
  $custom_breadcrumbs_views_configs[] = array(
    -101466245 => array(),
  );
  return $custom_breadcrumbs_views_configs;
}

/**
 * Implements hook_node_info().
 */
function asc_events_node_info() {
  $items = array(
    'asc_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Events for your organization.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
