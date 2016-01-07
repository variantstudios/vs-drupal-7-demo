<?php
/**
 * @file
 * vs_home_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vs_home_view_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function vs_home_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function vs_home_view_image_default_styles() {
  $styles = array();

  // Exported image style: slider_large.
  $styles['slider_large'] = array(
    'label' => 'Slider Large',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1100,
          'height' => 700,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slider_medium.
  $styles['slider_medium'] = array(
    'label' => 'Slider Medium',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 650,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slider_small.
  $styles['slider_small'] = array(
    'label' => 'Slider Small',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slider_wide.
  $styles['slider_wide'] = array(
    'label' => 'Slider Wide',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1400,
          'height' => 750,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
