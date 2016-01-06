<?php
/**
 * @file
 * vs_performance_defaults.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vs_performance_defaults_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_compressor';
  $strongarm->value = '2';
  $export['advagg_css_compressor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_compress_inline';
  $strongarm->value = '2';
  $export['advagg_css_compress_inline'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_compress_inline_if_not_cacheable';
  $strongarm->value = 0;
  $export['advagg_css_compress_inline_if_not_cacheable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_compressor';
  $strongarm->value = '1';
  $export['advagg_js_compressor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_compress_inline';
  $strongarm->value = '1';
  $export['advagg_js_compress_inline'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_compress_inline_if_not_cacheable';
  $strongarm->value = '';
  $export['advagg_js_compress_inline_if_not_cacheable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_compress_max_ratio';
  $strongarm->value = '';
  $export['advagg_js_compress_max_ratio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_compress_packer';
  $strongarm->value = 1;
  $export['advagg_js_compress_packer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 1;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_class_cache_ctools_css';
  $strongarm->value = 'CToolsCssCache';
  $export['cache_class_cache_ctools_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '0';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_advdef';
  $strongarm->value = array(
    'status' => 0,
    'path' => '',
    'settings' => array(
      'recompress' => TRUE,
      'mode' => 4,
    ),
    'weight' => '4',
  );
  $export['imageapi_optimize_advdef'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_advpng';
  $strongarm->value = array(
    'status' => 1,
    'path' => '',
    'settings' => array(
      'recompress' => 1,
      'mode' => '4',
    ),
    'weight' => '3',
  );
  $export['imageapi_optimize_advpng'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_jfifremove';
  $strongarm->value = array(
    'status' => 0,
    'path' => '',
    'weight' => '1',
  );
  $export['imageapi_optimize_jfifremove'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_jpegoptim';
  $strongarm->value = array(
    'status' => 1,
    'path' => '',
    'weight' => '0',
    'settings' => array(
      'progressive' => '1',
    ),
  );
  $export['imageapi_optimize_jpegoptim'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_jpegtran';
  $strongarm->value = array(
    'status' => 0,
    'path' => '',
    'settings' => array(
      'progressive' => FALSE,
    ),
    'weight' => '0',
  );
  $export['imageapi_optimize_jpegtran'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_optipng';
  $strongarm->value = array(
    'status' => 0,
    'path' => '',
    'settings' => array(
      'level' => 5,
      'interlace' => '',
    ),
    'weight' => '1',
  );
  $export['imageapi_optimize_optipng'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_pngcrush';
  $strongarm->value = array(
    'status' => 0,
    'path' => '',
    'weight' => '2',
  );
  $export['imageapi_optimize_pngcrush'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_pngout';
  $strongarm->value = array(
    'status' => 0,
    'path' => '',
    'weight' => '5',
  );
  $export['imageapi_optimize_pngout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_pngquant';
  $strongarm->value = array(
    'status' => 0,
    'path' => '',
    'weight' => '0',
  );
  $export['imageapi_optimize_pngquant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_service';
  $strongarm->value = 'internal';
  $export['imageapi_optimize_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_optimize_toolkit';
  $strongarm->value = 'gd';
  $export['imageapi_optimize_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_jpeg_quality';
  $strongarm->value = '75';
  $export['image_jpeg_quality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'imageapi_optimize';
  $export['image_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 1;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 1;
  $export['preprocess_js'] = $strongarm;

  return $export;
}
