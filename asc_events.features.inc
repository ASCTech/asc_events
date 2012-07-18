<?php
/**
 * @file
 * asc_events.features.inc
 */

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
