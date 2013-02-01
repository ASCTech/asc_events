<?php
/**
 * @file
 * asc_events.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function asc_events_field_default_fields() {
  $fields = array();

  // Exported field: 'node-asc_event-body'.
  $fields['node-asc_event-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'asc_event',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please enter a descriptive summary.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => '60',
          ),
          'type' => 'text_trimmed',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Description',
      'required' => 1,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-asc_event-field_ascevents_datetime'.
  $fields['node-asc_event-field_ascevents_datetime'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ascevents_datetime',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 1,
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'timezone_db' => 'UTC',
        'todate' => 'optional',
        'tz_handling' => 'site',
      ),
      'translatable' => '0',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'asc_event',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'short',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ascevents_datetime',
      'label' => 'Date',
      'required' => 1,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 1,
          'increment' => '15',
          'input_format' => 'm/d/Y - g:i:sa',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-asc_event-field_ascevents_image'.
  $fields['node-asc_event-field_ascevents_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ascevents_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'asc_event',
      'deleted' => '0',
      'description' => 'Image associated with your event.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '250_square_thumbnail',
          ),
          'type' => 'image',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'thumbnail',
          ),
          'type' => 'image',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'thumbnail',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ascevents_image',
      'label' => 'Image',
      'required' => 1,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'events-images',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'public' => 'public',
          ),
          'allowed_types' => array(
            'image' => 'image',
            'video' => 0,
            0 => 0,
            'audio' => 0,
            'default' => 0,
          ),
          'browser_plugins' => array(),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-asc_event-field_ascevents_location'.
  $fields['node-asc_event-field_ascevents_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ascevents_location',
      'foreign keys' => array(),
      'indexes' => array(
        'lid' => array(
          0 => 'lid',
        ),
      ),
      'locked' => '0',
      'module' => 'location_cck',
      'settings' => array(
        'gmap_macro' => '[gmap ]',
        'gmap_marker' => 'drupal',
        'location_settings' => array(
          'display' => array(
            'hide' => array(
              'additional' => 'additional',
              'city' => 'city',
              'coords' => 'coords',
              'country' => 'country',
              'country_name' => 'country_name',
              'locpick' => 'locpick',
              'map_link' => 'map_link',
              'name' => 0,
              'postal_code' => 'postal_code',
              'province' => 'province',
              'province_name' => 'province_name',
              'street' => 'street',
            ),
          ),
          'form' => array(
            'fields' => array(
              'additional' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '6',
              ),
              'city' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '8',
              ),
              'country' => array(
                'collect' => '4',
                'default' => 'us',
                'weight' => '14',
              ),
              'locpick' => array(
                'collect' => '0',
                'weight' => '20',
              ),
              'name' => array(
                'collect' => '1',
                'default' => '',
                'weight' => '2',
              ),
              'postal_code' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '12',
              ),
              'province' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '10',
                'widget' => 'autocomplete',
              ),
              'street' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '4',
              ),
            ),
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'location',
    ),
    'field_instance' => array(
      'bundle' => 'asc_event',
      'default_value' => array(
        0 => array(
          'location_settings' => array(
            'display' => array(
              'hide' => array(
                'additional' => 'additional',
                'city' => 'city',
                'coords' => 'coords',
                'country' => 'country',
                'country_name' => 'country_name',
                'locpick' => 'locpick',
                'map_link' => 0,
                'name' => 0,
                'postal_code' => 'postal_code',
                'province' => 'province',
                'province_name' => 'province_name',
                'street' => 'street',
              ),
            ),
            'form' => array(
              'fields' => array(
                'additional' => array(
                  '#parents' => array(
                    0 => 'field_ascevents_location',
                    1 => 'und',
                    2 => 0,
                  ),
                  'collect' => '1',
                  'default' => '',
                  'weight' => '6',
                ),
                'city' => array(
                  '#parents' => array(
                    0 => 'field_ascevents_location',
                    1 => 'und',
                    2 => 0,
                  ),
                  'collect' => '1',
                  'default' => '',
                  'weight' => '8',
                ),
                'country' => array(
                  '#parents' => array(
                    0 => 'field_ascevents_location',
                    1 => 'und',
                    2 => 0,
                  ),
                  'collect' => '1',
                  'default' => 'us',
                  'weight' => '14',
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'lid' => array(
                  'default' => FALSE,
                ),
                'locpick' => array(
                  '#parents' => array(
                    0 => 'field_ascevents_location',
                    1 => 'und',
                    2 => 0,
                  ),
                  'collect' => '1',
                  'default' => FALSE,
                  'nodiff' => TRUE,
                  'weight' => '20',
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'name' => array(
                  '#parents' => array(
                    0 => 'field_ascevents_location',
                    1 => 'und',
                    2 => 0,
                  ),
                  'collect' => '1',
                  'default' => '',
                  'weight' => '2',
                ),
                'postal_code' => array(
                  '#parents' => array(
                    0 => 'field_ascevents_location',
                    1 => 'und',
                    2 => 0,
                  ),
                  'collect' => '1',
                  'default' => '',
                  'weight' => '12',
                ),
                'province' => array(
                  '#parents' => array(
                    0 => 'field_ascevents_location',
                    1 => 'und',
                    2 => 0,
                  ),
                  'collect' => '1',
                  'default' => '',
                  'weight' => '10',
                  'widget' => 'autocomplete',
                ),
                'source' => array(
                  'default' => 0,
                ),
                'street' => array(
                  '#parents' => array(
                    0 => 'field_ascevents_location',
                    1 => 'und',
                    2 => 0,
                  ),
                  'collect' => '1',
                  'default' => '',
                  'weight' => '4',
                ),
              ),
            ),
          ),
          'name' => 'TBA',
          'street' => '',
          'additional' => '',
          'city' => '',
          'province' => '',
          'postal_code' => '',
          'country' => 'us',
          'locpick' => array(
            'user_latitude' => '',
            'user_longitude' => '',
          ),
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'location_cck',
          'settings' => array(),
          'type' => 'location_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'location_cck',
          'settings' => array(),
          'type' => 'location_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ascevents_location',
      'label' => 'Location',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-asc_event-field_ascevents_terms_1'.
  $fields['node-asc_event-field_ascevents_terms_1'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ascevents_terms_1',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'event_terms_1',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'asc_event',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'asc_taxonomy_filter',
          'settings' => array(),
          'type' => 'asc_taxonomy_filter_term_reference_link',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ascevents_terms_1',
      'label' => 'Event Terms 1',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-asc_event-field_ascevents_terms_2'.
  $fields['node-asc_event-field_ascevents_terms_2'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ascevents_terms_2',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'event_terms_2',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'asc_event',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'asc_taxonomy_filter',
          'settings' => array(),
          'type' => 'asc_taxonomy_filter_term_reference_link',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ascevents_terms_2',
      'label' => 'Event Terms 2',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-asc_event-field_ascevents_terms_3'.
  $fields['node-asc_event-field_ascevents_terms_3'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ascevents_terms_3',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'event_terms_3',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'asc_event',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'asc_taxonomy_filter',
          'settings' => array(),
          'type' => 'asc_taxonomy_filter_term_reference_link',
          'weight' => '7',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ascevents_terms_3',
      'label' => 'Event Terms 3',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '7',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Date');
  t('Description');
  t('Event Terms 1');
  t('Event Terms 2');
  t('Event Terms 3');
  t('Image');
  t('Image associated with your event.');
  t('Location');
  t('Please enter a descriptive summary.');

  return $fields;
}
