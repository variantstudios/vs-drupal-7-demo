<?php
/**
 * @file
 * drupal_default.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupal_default_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
