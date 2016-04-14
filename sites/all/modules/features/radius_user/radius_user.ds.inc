<?php
/**
 * @file
 * radius_user.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function radius_user_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|radius_user|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'radius_user';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_radius_id',
        1 => 'field_password',
        2 => 'field_expiry_date',
        3 => 'field_status',
        4 => 'buttons',
        5 => 'field_product_reference',
      ),
    ),
    'fields' => array(
      'field_radius_id' => 'ds_content',
      'field_password' => 'ds_content',
      'field_expiry_date' => 'ds_content',
      'field_status' => 'ds_content',
      'buttons' => 'ds_content',
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
  $export['node|radius_user|teaser'] = $ds_layout;

  return $export;
}
