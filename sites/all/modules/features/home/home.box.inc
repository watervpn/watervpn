<?php
/**
 * @file
 * home.box.inc
 */

/**
 * Implements hook_default_box().
 */
function home_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'cta_box_1';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'CTA Box 1';
  $box->options = array(
    'body' => array(
      'value' => '<p>This is awesome.</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['cta_box_1'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'cta_box_2';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'CTA Box 2';
  $box->options = array(
    'body' => array(
      'value' => '',
      'format' => 'full_html',
    ),
  );
  $export['cta_box_2'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'cta_box_3';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'CTA Box 3';
  $box->options = array(
    'body' => array(
      'value' => '',
      'format' => 'full_html',
    ),
  );
  $export['cta_box_3'] = $box;

  return $export;
}
