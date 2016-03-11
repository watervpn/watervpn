<?php
/**
 * @file
 * slide.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slide_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slide_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function slide_image_default_styles() {
  $styles = array();

  // Exported image style: manualcrop.
  $styles['manualcrop'] = array(
    'label' => 'Manualcrop',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => '',
          'height' => '',
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'manualcrop',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: slider.
  $styles['slider'] = array(
    'label' => 'Slider',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'manualcrop',
          ),
          'apply_all_effects' => 0,
          'fallback_style' => '',
        ),
        'weight' => 0,
      ),
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1440,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function slide_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
