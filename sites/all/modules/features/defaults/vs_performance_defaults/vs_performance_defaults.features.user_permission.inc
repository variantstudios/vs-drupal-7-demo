<?php
/**
 * @file
 * vs_performance_defaults.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vs_performance_defaults_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'bypass advanced aggregation'.
  $permissions['bypass advanced aggregation'] = array(
    'name' => 'bypass advanced aggregation',
    'roles' => array(),
    'module' => 'advagg',
  );

  return $permissions;
}
