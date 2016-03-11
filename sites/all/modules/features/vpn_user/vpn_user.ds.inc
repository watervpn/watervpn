<?php
/**
 * @file
 * vpn_user.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function vpn_user_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_services',
        1 => 'group_service',
        2 => 'field_radius_user_reference',
      ),
    ),
    'fields' => array(
      'group_services' => 'ds_content',
      'group_service' => 'ds_content',
      'field_radius_user_reference' => 'ds_content',
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
  $export['user|user|default'] = $ds_layout;

  return $export;
}
