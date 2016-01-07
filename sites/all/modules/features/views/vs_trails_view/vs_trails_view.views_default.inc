<?php
/**
 * @file
 * vs_trails_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vs_trails_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'trails';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Trails';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_difficulty_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_amenities_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_distance_miles_value' => array(
      'bef_format' => 'bef_slider',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '50',
        'bef_slider_step' => '2',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_star_rating_rating' => array(
      'bef_format' => 'bef',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Content: Votes */
  $handler->display->display_options['relationships']['votingapi_vote']['id'] = 'votingapi_vote';
  $handler->display->display_options['relationships']['votingapi_vote']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_vote']['field'] = 'votingapi_vote';
  $handler->display->display_options['relationships']['votingapi_vote']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'vote',
  );
  $handler->display->display_options['relationships']['votingapi_vote']['current_user'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Lat Long */
  $handler->display->display_options['fields']['field_lat_long']['id'] = 'field_lat_long';
  $handler->display->display_options['fields']['field_lat_long']['table'] = 'field_data_field_lat_long';
  $handler->display->display_options['fields']['field_lat_long']['field'] = 'field_lat_long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'trails' => 'trails',
  );
  /* Filter criterion: Content: Amenities (field_amenities) */
  $handler->display->display_options['filters']['field_amenities_tid']['id'] = 'field_amenities_tid';
  $handler->display->display_options['filters']['field_amenities_tid']['table'] = 'field_data_field_amenities';
  $handler->display->display_options['filters']['field_amenities_tid']['field'] = 'field_amenities_tid';
  $handler->display->display_options['filters']['field_amenities_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['operator_id'] = 'field_amenities_tid_op';
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['label'] = 'Amenities';
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['operator'] = 'field_amenities_tid_op';
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['identifier'] = 'field_amenities_tid';
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_amenities_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_amenities_tid']['vocabulary'] = 'amenities';
  $handler->display->display_options['filters']['field_amenities_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Difficulty (field_difficulty) */
  $handler->display->display_options['filters']['field_difficulty_tid']['id'] = 'field_difficulty_tid';
  $handler->display->display_options['filters']['field_difficulty_tid']['table'] = 'field_data_field_difficulty';
  $handler->display->display_options['filters']['field_difficulty_tid']['field'] = 'field_difficulty_tid';
  $handler->display->display_options['filters']['field_difficulty_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_difficulty_tid']['expose']['operator_id'] = 'field_difficulty_tid_op';
  $handler->display->display_options['filters']['field_difficulty_tid']['expose']['label'] = 'Difficulty ';
  $handler->display->display_options['filters']['field_difficulty_tid']['expose']['operator'] = 'field_difficulty_tid_op';
  $handler->display->display_options['filters']['field_difficulty_tid']['expose']['identifier'] = 'field_difficulty_tid';
  $handler->display->display_options['filters']['field_difficulty_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_difficulty_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_difficulty_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_difficulty_tid']['vocabulary'] = 'difficulty';
  $handler->display->display_options['filters']['field_difficulty_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'trails' => 'trails',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Difficulty (field_difficulty) */
  $handler->display->display_options['filters']['field_difficulty_tid']['id'] = 'field_difficulty_tid';
  $handler->display->display_options['filters']['field_difficulty_tid']['table'] = 'field_data_field_difficulty';
  $handler->display->display_options['filters']['field_difficulty_tid']['field'] = 'field_difficulty_tid';
  $handler->display->display_options['filters']['field_difficulty_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_difficulty_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_difficulty_tid']['expose']['operator_id'] = 'field_difficulty_tid_op';
  $handler->display->display_options['filters']['field_difficulty_tid']['expose']['label'] = 'Difficulty ';
  $handler->display->display_options['filters']['field_difficulty_tid']['expose']['operator'] = 'field_difficulty_tid_op';
  $handler->display->display_options['filters']['field_difficulty_tid']['expose']['identifier'] = 'field_difficulty_tid';
  $handler->display->display_options['filters']['field_difficulty_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_difficulty_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_difficulty_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_difficulty_tid']['vocabulary'] = 'difficulty';
  $handler->display->display_options['filters']['field_difficulty_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Amenities (field_amenities) */
  $handler->display->display_options['filters']['field_amenities_tid']['id'] = 'field_amenities_tid';
  $handler->display->display_options['filters']['field_amenities_tid']['table'] = 'field_data_field_amenities';
  $handler->display->display_options['filters']['field_amenities_tid']['field'] = 'field_amenities_tid';
  $handler->display->display_options['filters']['field_amenities_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_amenities_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['operator_id'] = 'field_amenities_tid_op';
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['label'] = 'Amenities';
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['operator'] = 'field_amenities_tid_op';
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['identifier'] = 'field_amenities_tid';
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_amenities_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_amenities_tid']['vocabulary'] = 'amenities';
  $handler->display->display_options['filters']['field_amenities_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Distance (Miles) (field_distance_miles) */
  $handler->display->display_options['filters']['field_distance_miles_value']['id'] = 'field_distance_miles_value';
  $handler->display->display_options['filters']['field_distance_miles_value']['table'] = 'field_data_field_distance_miles';
  $handler->display->display_options['filters']['field_distance_miles_value']['field'] = 'field_distance_miles_value';
  $handler->display->display_options['filters']['field_distance_miles_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_distance_miles_value']['group'] = 1;
  $handler->display->display_options['filters']['field_distance_miles_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_distance_miles_value']['expose']['operator_id'] = 'field_distance_miles_value_op';
  $handler->display->display_options['filters']['field_distance_miles_value']['expose']['label'] = 'Distance';
  $handler->display->display_options['filters']['field_distance_miles_value']['expose']['operator'] = 'field_distance_miles_value_op';
  $handler->display->display_options['filters']['field_distance_miles_value']['expose']['identifier'] = 'field_distance_miles_value';
  $handler->display->display_options['filters']['field_distance_miles_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Star Rating (field_star_rating:rating) */
  $handler->display->display_options['filters']['field_star_rating_rating']['id'] = 'field_star_rating_rating';
  $handler->display->display_options['filters']['field_star_rating_rating']['table'] = 'field_data_field_star_rating';
  $handler->display->display_options['filters']['field_star_rating_rating']['field'] = 'field_star_rating_rating';
  $handler->display->display_options['filters']['field_star_rating_rating']['operator'] = '>=';
  $handler->display->display_options['filters']['field_star_rating_rating']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_star_rating_rating']['expose']['operator_id'] = 'field_star_rating_rating_op';
  $handler->display->display_options['filters']['field_star_rating_rating']['expose']['label'] = 'Star Rating';
  $handler->display->display_options['filters']['field_star_rating_rating']['expose']['operator'] = 'field_star_rating_rating_op';
  $handler->display->display_options['filters']['field_star_rating_rating']['expose']['identifier'] = 'field_star_rating_rating';
  $handler->display->display_options['filters']['field_star_rating_rating']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_star_rating_rating']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_star_rating_rating']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_star_rating_rating']['group_info']['label'] = 'Rating';
  $handler->display->display_options['filters']['field_star_rating_rating']['group_info']['identifier'] = 'field_star_rating_rating';
  $handler->display->display_options['filters']['field_star_rating_rating']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_star_rating_rating']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_star_rating_rating']['group_info']['group_items'] = array(
    1 => array(
      'title' => '1',
      'operator' => '>=',
      'value' => array(
        'value' => '20',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '2',
      'operator' => '>=',
      'value' => array(
        'value' => '40',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '3',
      'operator' => '>=',
      'value' => array(
        'value' => '60',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => '4',
      'operator' => '>=',
      'value' => array(
        'value' => '80',
        'min' => '',
        'max' => '',
      ),
    ),
    5 => array(
      'title' => '5',
      'operator' => '>=',
      'value' => array(
        'value' => '100',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'trails';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Trails';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Individual Map */
  $handler = $view->new_display('block', 'Individual Map', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_lat_long';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '10';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Lat Long */
  $handler->display->display_options['fields']['field_lat_long']['id'] = 'field_lat_long';
  $handler->display->display_options['fields']['field_lat_long']['table'] = 'field_data_field_lat_long';
  $handler->display->display_options['fields']['field_lat_long']['field'] = 'field_lat_long';
  $handler->display->display_options['fields']['field_lat_long']['label'] = '';
  $handler->display->display_options['fields']['field_lat_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lat_long']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_lat_long']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'trails' => 'trails',
  );

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_lat_long';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'trails' => 'trails',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Featured Trail */
  $handler = $view->new_display('block', 'Featured Trail', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Trail';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'trails' => 'trails',
  );
  /* Filter criterion: Content: Featured Trail (field_featured_trail) */
  $handler->display->display_options['filters']['field_featured_trail_value']['id'] = 'field_featured_trail_value';
  $handler->display->display_options['filters']['field_featured_trail_value']['table'] = 'field_data_field_featured_trail';
  $handler->display->display_options['filters']['field_featured_trail_value']['field'] = 'field_featured_trail_value';
  $handler->display->display_options['filters']['field_featured_trail_value']['value'] = array(
    1 => '1',
  );
  $export['trails'] = $view;

  return $export;
}
