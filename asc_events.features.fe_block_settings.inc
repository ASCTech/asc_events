<?php
/**
 * @file
 * asc_events.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function asc_events_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['asc_taxonomy_filter-event_terms_1'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'event_terms_1',
    'module' => 'asc_taxonomy_filter',
    'node_types' => array(),
    'pages' => 'events
events/day*
events/month*
events/year*
events/filter*',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'q7',
        'weight' => -32,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['asc_taxonomy_filter-event_terms_2'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'event_terms_2',
    'module' => 'asc_taxonomy_filter',
    'node_types' => array(),
    'pages' => 'events
events/day*
events/month*
events/year*
events/filter*',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'q7',
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['asc_taxonomy_filter-event_terms_3'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'event_terms_3',
    'module' => 'asc_taxonomy_filter',
    'node_types' => array(),
    'pages' => 'events
events/day*
events/month*
events/year*
events/filter*',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'q7',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-2790fec824f71409f95f23eb80b8c8a9'] = array(
    'cache' => -1,
    'css_class' => 'feature-half',
    'custom' => 0,
    'delta' => '2790fec824f71409f95f23eb80b8c8a9',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'q7',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-6267fddf33d11d9a64ac1ac0aa2a9049'] = array(
    'cache' => -1,
    'css_class' => 'feature-whole',
    'custom' => 0,
    'delta' => '6267fddf33d11d9a64ac1ac0aa2a9049',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'q7',
        'weight' => -33,
      ),
    ),
    'title' => 'Events',
    'visibility' => 1,
  );

  $export['views-asc_events-asc_events_cal_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'asc_events-asc_events_cal_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'event*',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'q7',
        'weight' => -30,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
