<?php
/**
 * @file
 * product_display.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function product_display_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product_display|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product_display';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|product_display|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function product_display_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_display|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_display';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'product:commerce_price',
        1 => 'product:field_duration',
        2 => 'body',
        3 => 'field_product_reference',
      ),
    ),
    'fields' => array(
      'product:commerce_price' => 'ds_content',
      'product:field_duration' => 'ds_content',
      'body' => 'ds_content',
      'field_product_reference' => 'ds_content',
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
  );
  $export['node|product_display|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_display|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_display';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_product_image',
        1 => 'title',
        2 => 'product:commerce_price',
        3 => 'product:field_duration',
        4 => 'field_product_reference',
      ),
    ),
    'fields' => array(
      'field_product_image' => 'ds_content',
      'title' => 'ds_content',
      'product:commerce_price' => 'ds_content',
      'product:field_duration' => 'ds_content',
      'field_product_reference' => 'ds_content',
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
  );
  $export['node|product_display|teaser'] = $ds_layout;

  return $export;
}
