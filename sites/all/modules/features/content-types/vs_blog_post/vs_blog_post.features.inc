<?php
/**
 * @file
 * vs_blog_post.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vs_blog_post_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vs_blog_post_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function vs_blog_post_image_default_styles() {
  $styles = array();

  // Exported image style: blog_home_page.
  $styles['blog_home_page'] = array(
    'label' => 'Blog Home Page',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 520,
          'height' => 235,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: blog_thumbnail.
  $styles['blog_thumbnail'] = array(
    'label' => 'Blog Thumbnail',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 705,
          'height' => 205,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function vs_blog_post_node_info() {
  $items = array(
    'vs_blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('Post and article to be added to your Blog page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function vs_blog_post_weight_features_default_settings() {
  $settings = array();

  $settings['vs_blog_post'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
