<?php

/**
 * @file
 * Display Suite Custom 2 Col configuration.
 */

function ds_custom_3_sections() {
  return array(
    'label' => t('Custom Three Sections'),
    'regions' => array(
      'one' => t('one'),
      'two' => t('two'),
      'three' => t('three'),
    ),
    // Uncomment if you want to include a CSS file for this layout (custom_2_col.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (custom_2_col.png)
    // 'image' => TRUE,
  );
}
