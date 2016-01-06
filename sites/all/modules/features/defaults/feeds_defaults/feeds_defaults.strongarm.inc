<?php
/**
 * @file
 * feeds_defaults.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feeds_defaults_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_tamper';
  $strongarm->value = array(
    'usda_events-title-feeds_tamper_conditional' => FALSE,
    'usda_events-guid-keyword_filter' => FALSE,
    'usda_events-title-keyword_filter' => FALSE,
    'usda_events-description-keyword_filter' => FALSE,
    'usda_events-url-keyword_filter' => FALSE,
    'usda_events-title-default_value' => FALSE,
    'women_in_ag-description-keyword_filter' => TRUE,
    'women_in_ag-tags-keyword_filter' => FALSE,
  );
  $export['default_feeds_tamper'] = $strongarm;

  return $export;
}
