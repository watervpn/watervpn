<?php
/**
 * @file
 * vpn_service_record.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vpn_service_record_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vpn_service_record_node_info() {
  $items = array(
    'vpn_service_record' => array(
      'name' => t('VPN Service Record'),
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
