<?php
/**
 * @file
 * radius_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function radius_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_radius_user';
  $strongarm->value = 0;
  $export['comment_anonymous_radius_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_radius_user';
  $strongarm->value = 1;
  $export['comment_default_mode_radius_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_radius_user';
  $strongarm->value = '50';
  $export['comment_default_per_page_radius_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_radius_user';
  $strongarm->value = 1;
  $export['comment_form_location_radius_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_radius_user';
  $strongarm->value = '1';
  $export['comment_preview_radius_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_radius_user';
  $strongarm->value = '1';
  $export['comment_radius_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_radius_user';
  $strongarm->value = 1;
  $export['comment_subject_field_radius_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__radius_user';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(
        'buttons' => array(
          'teaser' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'product:sku' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
        'product:field_duration' => array(
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'product:field_type' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
        ),
        'product:field_node_type' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
        ),
        'product:field_operation' => array(
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__radius_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_radius_user';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_radius_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_radius_user';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_radius_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_radius_user';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_radius_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_radius_user';
  $strongarm->value = '1';
  $export['node_preview_radius_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_radius_user';
  $strongarm->value = 1;
  $export['node_submitted_radius_user'] = $strongarm;

  return $export;
}
