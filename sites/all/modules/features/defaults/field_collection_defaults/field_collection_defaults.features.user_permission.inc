<?php
/**
 * @file
 * field_collection_defaults.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function field_collection_defaults_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  return $permissions;
}
