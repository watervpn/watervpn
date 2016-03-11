<?php
/**
 * @file
 * vpn_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vpn_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
