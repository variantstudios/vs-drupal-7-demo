<?php
/**
 * @file
 * views_defaults.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function views_defaults_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_basic';
  $strongarm->value = array(
    'discovery_tool' => array(
      0 => 'discovery_tool_block',
      1 => 'pdf_1',
    ),
  );
  $export['views_ui_basic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_basic_fields';
  $strongarm->value = array(
    'header' => 'header',
  );
  $export['views_ui_basic_fields'] = $strongarm;

  return $export;
}
