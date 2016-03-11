<?php
/**
 * @file
 * system_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function system_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any node article page'.
  $permissions['view any node article page'] = array(
    'name' => 'view any node article page',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any node faq page'.
  $permissions['view any node faq page'] = array(
    'name' => 'view any node faq page',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any node page'.
  $permissions['view any node page'] = array(
    'name' => 'view any node page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any node page page'.
  $permissions['view any node page page'] = array(
    'name' => 'view any node page page',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any node product_display page'.
  $permissions['view any node product_display page'] = array(
    'name' => 'view any node product_display page',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any node slide page'.
  $permissions['view any node slide page'] = array(
    'name' => 'view any node slide page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any node vpn_service_record page'.
  $permissions['view any node vpn_service_record page'] = array(
    'name' => 'view any node vpn_service_record page',
    'roles' => array(),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any node webform page'.
  $permissions['view any node webform page'] = array(
    'name' => 'view any node webform page',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'restrict_node_page_view',
  );

  return $permissions;
}
