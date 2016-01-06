<?php
/**
 * @file
 * media_defaults.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function media_defaults_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function media_defaults_image_default_styles() {
  $styles = array();

  // Exported image style: full_width.
  $styles['full_width'] = array(
    'label' => 'Full Width',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 940,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: half_width.
  $styles['half_width'] = array(
    'label' => 'Half Width',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
