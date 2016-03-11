<?php
/**
 * @file
 * faqs.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function faqs_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faq_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'faq' => 'faq',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['faq_page'] = $context;

  return $export;
}
