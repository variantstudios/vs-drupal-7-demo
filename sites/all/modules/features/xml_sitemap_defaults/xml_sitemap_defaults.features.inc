<?php
/**
 * @file
 * xml_sitemap_defaults.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function xml_sitemap_defaults_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
