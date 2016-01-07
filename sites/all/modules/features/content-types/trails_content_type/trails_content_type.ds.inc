<?php
/**
 * @file
 * trails_content_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function trails_content_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|trails|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'trails';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'map' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_amenities' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h6',
          'lb-cl' => 'block-title',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'amenities content-list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_images' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_start_elevation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'elevation',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_elevation_gain' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'elevation',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|trails|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|trails|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'trails';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_star_rating' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|trails|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function trails_content_type_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'map';
  $ds_field->label = 'Map';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|trails-block_1',
    'block_render' => '3',
  );
  $export['map'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function trails_content_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|trails|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'trails';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'custom_3_sections';
  $ds_layout->settings = array(
    'regions' => array(
      'one' => array(
        0 => 'field_images',
      ),
      'two' => array(
        1 => 'title',
        2 => 'field_star_rating',
        3 => 'field_region',
        4 => 'field_distance_miles',
        5 => 'field_difficulty',
        6 => 'field_start_elevation',
        7 => 'field_elevation_gain',
        8 => 'body',
      ),
      'three' => array(
        9 => 'map',
        10 => 'field_amenities',
      ),
    ),
    'fields' => array(
      'field_images' => 'one',
      'title' => 'two',
      'field_star_rating' => 'two',
      'field_region' => 'two',
      'field_distance_miles' => 'two',
      'field_difficulty' => 'two',
      'field_start_elevation' => 'two',
      'field_elevation_gain' => 'two',
      'body' => 'two',
      'map' => 'three',
      'field_amenities' => 'three',
    ),
    'classes' => array(),
    'wrappers' => array(
      'one' => 'div',
      'two' => 'div',
      'three' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|trails|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|trails|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'trails';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'custom_2_sections';
  $ds_layout->settings = array(
    'regions' => array(
      'one' => array(
        0 => 'title',
        1 => 'field_region',
        2 => 'field_star_rating',
      ),
      'two' => array(
        3 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'one',
      'field_region' => 'one',
      'field_star_rating' => 'one',
      'body' => 'two',
    ),
    'classes' => array(),
    'wrappers' => array(
      'one' => 'div',
      'two' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|trails|teaser'] = $ds_layout;

  return $export;
}
