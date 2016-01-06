<?php
/**
 * @file
 * vs_theme_defaults.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vs_theme_defaults_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer blockify'.
  $permissions['administer blockify'] = array(
    'name' => 'administer blockify',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'blockify',
  );

  // Exported permission: 'administer delta blocks'.
  $permissions['administer delta blocks'] = array(
    'name' => 'administer delta blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'delta_blocks',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'system',
  );

  return $permissions;
}
