<?php
/**
 * @file
 * vs_team_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vs_team_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function vs_team_content_type_node_info() {
  $items = array(
    'vs_team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => t('Add a Team Member'),
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
function vs_team_content_type_weight_features_default_settings() {
  $settings = array();

  $settings['vs_team'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
