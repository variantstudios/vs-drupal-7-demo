<?php
/**
 * @file
 * vs_media_defaults.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vs_media_defaults_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function vs_media_defaults_image_default_styles() {
  $styles = array();

  // Exported image style: full_width.
  $styles['full_width'] = array(
    'label' => 'Full Width',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1100,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_square_thumb.
  $styles['small_square_thumb'] = array(
    'label' => 'Small Square Thumb',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
