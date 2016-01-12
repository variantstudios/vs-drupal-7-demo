<?php
/**
 * @file
 * vs_team_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vs_team_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create vs_team content'.
  $permissions['create vs_team content'] = array(
    'name' => 'create vs_team content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any vs_team content'.
  $permissions['delete any vs_team content'] = array(
    'name' => 'delete any vs_team content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own vs_team content'.
  $permissions['delete own vs_team content'] = array(
    'name' => 'delete own vs_team content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any vs_team content'.
  $permissions['edit any vs_team content'] = array(
    'name' => 'edit any vs_team content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own vs_team content'.
  $permissions['edit own vs_team content'] = array(
    'name' => 'edit own vs_team content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
