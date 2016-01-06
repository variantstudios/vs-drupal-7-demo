<?php
/**
 * @file
 * taxonomy_defaults.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function taxonomy_defaults_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
