<?php
/**
 * @file
 * vs_team_content_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function vs_team_content_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|vs_team|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'vs_team';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_bio' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_headshot' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|vs_team|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function vs_team_content_type_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'our_team';
  $ds_field->label = 'Our Team';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|our_team-block',
    'block_render' => '1',
  );
  $export['our_team'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function vs_team_content_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|vs_team|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'vs_team';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_headshot',
        1 => 'title',
        2 => 'field_bio',
      ),
    ),
    'fields' => array(
      'field_headshot' => 'ds_content',
      'title' => 'ds_content',
      'field_bio' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
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
  $export['node|vs_team|teaser'] = $ds_layout;

  return $export;
}
