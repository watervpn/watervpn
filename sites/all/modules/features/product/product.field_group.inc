<?php
/**
 * @file
 * product.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function product_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_checkout_property|commerce_product|vpn_service|form';
  $field_group->group_name = 'group_checkout_property';
  $field_group->entity_type = 'commerce_product';
  $field_group->bundle = 'vpn_service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CheckOut Property',
    'weight' => '6',
    'children' => array(
      0 => 'field_node_type',
      1 => 'field_operation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-checkout-property field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_checkout_property|commerce_product|vpn_service|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('CheckOut Property');

  return $field_groups;
}
