<?php
/**
 * @file
 * store.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function store_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shopping_cart';
  $context->description = '';
  $context->tag = 'Shopping Cart';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'cart' => 'cart',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'store-store_upsale' => array(
          'module' => 'store',
          'delta' => 'store_upsale',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shopping Cart');
  $export['shopping_cart'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'store_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'store' => 'store',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-store-block' => array(
          'module' => 'views',
          'delta' => 'store-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['store_page'] = $context;

  return $export;
}
