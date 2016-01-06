<?php
/**
 * @file
 * vs_static_page_content_type.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function vs_static_page_content_type_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:page.
  $config['node:page'] = array(
    'instance' => 'node:page',
    'config' => array(),
  );

  return $config;
}
