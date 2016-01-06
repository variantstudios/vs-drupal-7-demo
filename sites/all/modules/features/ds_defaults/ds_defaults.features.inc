<?php
/**
 * @file
 * ds_defaults.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ds_defaults_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
