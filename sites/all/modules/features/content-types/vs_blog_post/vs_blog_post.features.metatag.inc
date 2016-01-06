<?php
/**
 * @file
 * vs_blog_post.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function vs_blog_post_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:vs_blog_post.
  $config['node:vs_blog_post'] = array(
    'instance' => 'node:vs_blog_post',
    'config' => array(),
  );

  return $config;
}
