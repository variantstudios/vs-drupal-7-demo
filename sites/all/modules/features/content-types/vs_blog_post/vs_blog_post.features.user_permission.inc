<?php
/**
 * @file
 * vs_blog_post.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vs_blog_post_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create vs_blog_post content'.
  $permissions['create vs_blog_post content'] = array(
    'name' => 'create vs_blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vs_blog_post content'.
  $permissions['delete any vs_blog_post content'] = array(
    'name' => 'delete any vs_blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vs_blog_post content'.
  $permissions['delete own vs_blog_post content'] = array(
    'name' => 'delete own vs_blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vs_blog_post content'.
  $permissions['edit any vs_blog_post content'] = array(
    'name' => 'edit any vs_blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vs_blog_post content'.
  $permissions['edit own vs_blog_post content'] = array(
    'name' => 'edit own vs_blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
