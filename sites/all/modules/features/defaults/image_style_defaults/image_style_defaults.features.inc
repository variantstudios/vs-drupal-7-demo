<?php
/**
 * @file
 * image_style_defaults.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_style_defaults_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function image_style_defaults_image_default_styles() {
  $styles = array();

  // Exported image style: usda_stories.
  $styles['usda_stories'] = array(
    'label' => 'USDA Stories',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 295,
          'height' => 310,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
