<?php
/**
 * @file
 * role_defaults.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function role_defaults_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_administrator_bypass_defaults';
  $strongarm->value = array(
    'up_edit' => 'up_edit',
    'up_name' => 0,
    'up_mail' => 0,
    'up_pass' => 0,
    'up_status' => 0,
    'up_roles' => 0,
    'up_openid' => 0,
    'up_cancel' => 0,
  );
  $export['userprotect_administrator_bypass_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_autoprotect';
  $strongarm->value = 0;
  $export['userprotect_autoprotect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_protection_defaults';
  $strongarm->value = array(
    'up_status' => 'up_status',
    'up_cancel' => 'up_cancel',
    'up_edit' => 'up_edit',
    'up_name' => 0,
    'up_mail' => 0,
    'up_pass' => 0,
    'up_roles' => 0,
    'up_openid' => 0,
  );
  $export['userprotect_protection_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_role_protections';
  $strongarm->value = array(
    2 => array(
      'up_name' => 0,
      'up_mail' => 0,
      'up_pass' => 0,
      'up_status' => 0,
      'up_roles' => 0,
      'up_openid' => 0,
      'up_cancel' => 0,
      'up_edit' => 0,
    ),
    5 => array(
      'up_name' => 0,
      'up_mail' => 0,
      'up_pass' => 0,
      'up_status' => 0,
      'up_roles' => 0,
      'up_openid' => 0,
      'up_cancel' => 0,
      'up_edit' => 0,
    ),
    4 => array(
      'up_name' => 0,
      'up_mail' => 0,
      'up_pass' => 0,
      'up_status' => 0,
      'up_roles' => 0,
      'up_openid' => 0,
      'up_cancel' => 0,
      'up_edit' => 0,
    ),
    3 => array(
      'up_name' => 1,
      'up_mail' => 1,
      'up_pass' => 1,
      'up_status' => 1,
      'up_roles' => 1,
      'up_openid' => 1,
      'up_cancel' => 1,
      'up_edit' => 1,
    ),
  );
  $export['userprotect_role_protections'] = $strongarm;

  return $export;
}
