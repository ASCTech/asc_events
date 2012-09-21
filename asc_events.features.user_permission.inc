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

  // Exported permission: add terms in 7.
  $permissions['add terms in 7'] = array(
    'name' => 'add terms in 7',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Site Administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: add terms in 8.
  $permissions['add terms in 8'] = array(
    'name' => 'add terms in 8',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Site Administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: add terms in 9.
  $permissions['add terms in 9'] = array(
    'name' => 'add terms in 9',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Site Administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'Site Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: create asc_event content.
  $permissions['create asc_event content'] = array(
    'name' => 'create asc_event content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
      2 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any asc_event content.
  $permissions['delete any asc_event content'] = array(
    'name' => 'delete any asc_event content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own asc_event content.
  $permissions['delete own asc_event content'] = array(
    'name' => 'delete own asc_event content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
      2 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 7.
  $permissions['delete terms in 7'] = array(
    'name' => 'delete terms in 7',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 8.
  $permissions['delete terms in 8'] = array(
    'name' => 'delete terms in 8',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 9.
  $permissions['delete terms in 9'] = array(
    'name' => 'delete terms in 9',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any asc_event content.
  $permissions['edit any asc_event content'] = array(
    'name' => 'edit any asc_event content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
      2 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own asc_event content.
  $permissions['edit own asc_event content'] = array(
    'name' => 'edit own asc_event content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
      2 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 7.
  $permissions['edit terms in 7'] = array(
    'name' => 'edit terms in 7',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 8.
  $permissions['edit terms in 8'] = array(
    'name' => 'edit terms in 8',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 9.
  $permissions['edit terms in 9'] = array(
    'name' => 'edit terms in 9',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
