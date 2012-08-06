<?php
/**
 * @file
 * asc_events.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function asc_events_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_titlelink_views_2790fec824f71409f95f23eb80b8c8a9';
  $strongarm->value = array(
    'url' => 'events',
    'display' => 1,
    'title' => '',
  );
  $export['block_titlelink_views_2790fec824f71409f95f23eb80b8c8a9'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_titlelink_views_6267fddf33d11d9a64ac1ac0aa2a9049';
  $strongarm->value = array(
    'url' => 'events',
    'display' => 1,
    'title' => '',
  );
  $export['block_titlelink_views_6267fddf33d11d9a64ac1ac0aa2a9049'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_only';
  $strongarm->value = 'm/d/Y';
  $export['date_format_date_only'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__asc_event';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__asc_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_asc_event';
  $strongarm->value = array();
  $export['menu_options_asc_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_asc_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_asc_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_asc_event';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );
  $export['node_options_asc_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_asc_event';
  $strongarm->value = '1';
  $export['node_preview_asc_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_asc_event';
  $strongarm->value = 1;
  $export['node_submitted_asc_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_asc_event_pattern';
  $strongarm->value = 'events/[node:title]';
  $export['pathauto_node_asc_event_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_event_terms_1_pattern';
  $strongarm->value = 'events/[term:tid]';
  $export['pathauto_taxonomy_term_event_terms_1_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_event_terms_2_pattern';
  $strongarm->value = 'events/[term:tid]';
  $export['pathauto_taxonomy_term_event_terms_2_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_event_terms_3_pattern';
  $strongarm->value = 'events/[term:tid]';
  $export['pathauto_taxonomy_term_event_terms_3_pattern'] = $strongarm;

  return $export;
}
