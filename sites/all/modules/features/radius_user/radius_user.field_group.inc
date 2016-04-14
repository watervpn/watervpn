<?php
/**
 * @file
 * radius_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function radius_user_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_info|node|radius_user|default';
  $field_group->group_name = 'group_product_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'radius_user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Product Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_status',
      1 => 'field_product_reference',
      2 => 'product:commerce_price',
      3 => 'product:field_duration',
      4 => 'product:field_type',
      5 => 'product:field_node_type',
      6 => 'product:field_operation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-product-info field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_product_info|node|radius_user|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Product Info');

  return $field_groups;
}
