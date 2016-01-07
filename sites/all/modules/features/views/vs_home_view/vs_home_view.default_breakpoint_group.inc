<?php
/**
 * @file
 * vs_home_view.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function vs_home_view_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'breakpoints';
  $breakpoint_group->name = 'Global';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.super_wide',
    1 => 'custom.user.large',
    2 => 'custom.user.medium',
    3 => 'custom.user.small',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['breakpoints'] = $breakpoint_group;

  return $export;
}
