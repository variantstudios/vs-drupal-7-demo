<?php
/**
 * @file
 * vs_gallery_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vs_gallery_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function vs_gallery_content_type_image_default_styles() {
  $styles = array();

  // Exported image style: gallery_thumb.
  $styles['gallery_thumb'] = array(
    'label' => 'Gallery Thumb',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 550,
          'height' => 400,
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
function vs_gallery_content_type_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
