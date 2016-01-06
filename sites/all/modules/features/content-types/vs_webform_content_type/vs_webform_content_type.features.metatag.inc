<?php
/**
 * @file
 * vs_webform_content_type.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function vs_webform_content_type_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:webform.
  $config['node:webform'] = array(
    'instance' => 'node:webform',
    'config' => array(),
  );

  return $config;
}
