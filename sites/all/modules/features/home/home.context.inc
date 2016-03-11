<?php
/**
 * @file
 * home.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function home_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slider-block' => array(
          'module' => 'views',
          'delta' => 'slider-block',
          'region' => 'banner',
          'weight' => '-10',
        ),
        'views-store-block' => array(
          'module' => 'views',
          'delta' => 'store-block',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'boxes-cta_box_1' => array(
          'module' => 'boxes',
          'delta' => 'cta_box_1',
          'region' => 'content',
          'weight' => '-16',
        ),
        'boxes-cta_box_2' => array(
          'module' => 'boxes',
          'delta' => 'cta_box_2',
          'region' => 'content',
          'weight' => '-15',
        ),
        'boxes-cta_box_3' => array(
          'module' => 'boxes',
          'delta' => 'cta_box_3',
          'region' => 'content',
          'weight' => '-14',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['home_page'] = $context;

  return $export;
}
