<?php
/**
 * @file
 * product.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function product_commerce_product_default_types() {
  $items = array(
    'vpn_service' => array(
      'type' => 'vpn_service',
      'name' => 'VPN Service',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}
