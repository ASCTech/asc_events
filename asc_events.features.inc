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
  return array("api" => "3.0");
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
