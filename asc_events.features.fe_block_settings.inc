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

  // q7
  $theme = array();

  $theme['views-2790fec824f71409f95f23eb80b8c8a9'] = array(
    'module' => 'views',
    'delta' => '2790fec824f71409f95f23eb80b8c8a9',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '2',
    'region' => 'postscript_second',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-6267fddf33d11d9a64ac1ac0aa2a9049'] = array(
    'module' => 'views',
    'delta' => '6267fddf33d11d9a64ac1ac0aa2a9049',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-22',
    'region' => 'preface_second',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-asc_events-asc_events_cal_block'] = array(
    'module' => 'views',
    'delta' => 'asc_events-asc_events_cal_block',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'events*',
    'title' => '',
    'cache' => -1,
  );

  $export['q7'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}