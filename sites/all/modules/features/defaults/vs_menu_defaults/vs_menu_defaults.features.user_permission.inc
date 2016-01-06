<?php
/**
 * @file
 * vs_menu_defaults.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vs_menu_defaults_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
    'module' => 'menu',
  );

  return $permissions;
}
