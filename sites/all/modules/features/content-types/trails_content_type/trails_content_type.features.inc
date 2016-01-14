<?php
/**
 * @file
 * trails_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trails_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function trails_content_type_node_info() {
  $items = array(
    'trails' => array(
      'name' => t('Trails'),
      'base' => 'node_content',
      'description' => t('Add a trail'),
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
function trails_content_type_weight_features_default_settings() {
  $settings = array();

  $settings['trails'] = array(
    'enabled' => 1,
    'range' => 50,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
