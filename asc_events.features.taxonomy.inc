<?php
/**
 * @file
 * asc_events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function asc_events_taxonomy_default_vocabularies() {
  return array(
    'event_terms_1' => array(
      'name' => 'Event Terms 1',
      'machine_name' => 'event_terms_1',
      'description' => 'Primary vocabulary for Events',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'event_terms_2' => array(
      'name' => 'Event Terms 2',
      'machine_name' => 'event_terms_2',
      'description' => 'Secondary vocabulary for Events',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'event_terms_3' => array(
      'name' => 'Event Terms 3',
      'machine_name' => 'event_terms_3',
      'description' => 'Additional vocabulary for Events',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
