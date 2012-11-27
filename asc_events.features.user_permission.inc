<?php
/**
 * @file
 * asc_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function asc_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: create asc_event content.
  $permissions['create asc_event content'] = array(
    'name' => 'create asc_event content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Content Editor' => 'Content Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any asc_event content.
  $permissions['delete any asc_event content'] = array(
    'name' => 'delete any asc_event content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own asc_event content.
  $permissions['delete own asc_event content'] = array(
    'name' => 'delete own asc_event content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any asc_event content.
  $permissions['edit any asc_event content'] = array(
    'name' => 'edit any asc_event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own asc_event content.
  $permissions['edit own asc_event content'] = array(
    'name' => 'edit own asc_event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
