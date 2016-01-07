<?php
/**
 * @file
 * vs_home_view.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function vs_home_view_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Slider Settings';
  $picture_mapping->machine_name = 'slider_settings';
  $picture_mapping->breakpoint_group = 'breakpoints';
  $picture_mapping->mapping = array(
    'custom.user.super_wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slider_wide',
      ),
    ),
    'custom.user.large' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slider_large',
      ),
    ),
    'custom.user.medium' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slider_medium',
      ),
    ),
    'custom.user.small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slider_small',
      ),
    ),
  );
  $export['slider_settings'] = $picture_mapping;

  return $export;
}
