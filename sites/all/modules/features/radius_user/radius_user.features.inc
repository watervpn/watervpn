<?php
/**
 * @file
 * radius_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radius_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function radius_user_node_info() {
  $items = array(
    'radius_user' => array(
      'name' => t('Radius User'),
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
