<?php
/**
 * @file
 * server.batch.inc
 */

/**
 * Use batch to update servers.
 * @return Ambigous <The, string>
 */
function server_update_servers_form() {
  $form = array();

  $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Update Server Nodes Status')
  );

  return $form;
}

/**
 * Set batch to process.
 * @param unknown $form
 * @param unknown $form_state
 */
function server_update_servers_form_submit($form, $form_state){
  batch_set(server_build_batch());
}

function server_build_batch() {
  $server_nodes = server_get_server_nodes();

  // Here we can add multiple operation using an array variable.
  $operations[] = array('server_process_server_nodes', array($server_nodes)); // operation with argument

  // Define your batch operation here
  $batch = array(
      'title' => t('Update Server Nodes'),
      'operations' => $operations,
      'finished' => 'server_build_batch_finished',
      'init_message' => t('Initializing...'),
      'progress_message' => t('Opertation @current out of @total.'),
      'error_message' => t('Found some error here.'),
  );

  return $batch;
}

function server_build_batch_finished($success, $results, $operations) {
  if ($success) {
    // Here we could do something meaningful with the results.
    // We just display the number of data we processed...
    drupal_set_message(t('@count node processed.', array('@count' => count($results))));
  } else {
    // An error occurred.
    // $operations contains the operations that remained unprocessed.
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}

