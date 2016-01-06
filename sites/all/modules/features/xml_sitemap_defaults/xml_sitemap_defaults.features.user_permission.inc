<?php
/**
 * @file
 * xml_sitemap_defaults.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function xml_sitemap_defaults_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'xmlsitemap',
  );

  return $permissions;
}
