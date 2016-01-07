<?php
/**
 * @file
 * vs_home_view.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function vs_home_view_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slider-block' => array(
          'module' => 'views',
          'delta' => 'slider-block',
          'region' => 'preface',
          'weight' => '-10',
        ),
        'views-trails-block_2' => array(
          'module' => 'views',
          'delta' => 'trails-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-gallery-block_1' => array(
          'module' => 'views',
          'delta' => 'gallery-block_1',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['home_page'] = $context;

  return $export;
}
