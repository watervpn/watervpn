<?php
/**
 * @file
 * store.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function store_default_rules_configuration() {
  $items = array();
  $items['rules_create_drupal_user_and_radius_user_after_checkout_complete'] = entity_import('rules_config', '{ "rules_create_drupal_user_and_radius_user_after_checkout_complete" : {
      "LABEL" : "Create Drupal User and Radius User after checkout complete",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Checkout" ],
      "REQUIRES" : [ "store", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "store_actions_vpn_account_setup" : { "commerce_order" : [ "commerce_order" ] } }
      ]
    }
  }');
  $items['rules_limit_product_quantity_to_one_in_shopping_cart'] = entity_import('rules_config', '{ "rules_limit_product_quantity_to_one_in_shopping_cart" : {
      "LABEL" : "Limit product quantity to one in shopping cart",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entity" ],
      "ON" : { "commerce_line_item_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-line-item:type" ], "value" : "product" } },
        { "data_is" : {
            "data" : [ "commerce-line-item:commerce-product:type" ],
            "value" : "vpn_service"
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "commerce-line-item:quantity" ], "value" : "1" } }
      ]
    }
  }');
  return $items;
}
