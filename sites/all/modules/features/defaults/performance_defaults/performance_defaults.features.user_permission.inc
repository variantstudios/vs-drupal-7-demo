<?php
/**
 * @file
 * performance_defaults.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function performance_defaults_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'bypass advanced aggregation'.
  $permissions['bypass advanced aggregation'] = array(
    'name' => 'bypass advanced aggregation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advagg',
  );

  return $permissions;
}
