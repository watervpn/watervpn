<?php
/**
 * @file
 * watervpn_search.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function watervpn_search_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'search';
  $mini->category = '';
  $mini->admin_title = 'Search';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'foundation_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e10cea88-d1ef-4ef2-88bc-3b0d64fe2172';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d3308bf9-5f6f-410c-81c8-9f11056c2a47';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'search-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3308bf9-5f6f-410c-81c8-9f11056c2a47';
    $display->content['new-d3308bf9-5f6f-410c-81c8-9f11056c2a47'] = $pane;
    $display->panels['left'][0] = 'new-d3308bf9-5f6f-410c-81c8-9f11056c2a47';
    $pane = new stdClass();
    $pane->pid = 'new-e8e39787-d046-4fe2-a014-0005e97b7a07';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Filters',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e8e39787-d046-4fe2-a014-0005e97b7a07';
    $display->content['new-e8e39787-d046-4fe2-a014-0005e97b7a07'] = $pane;
    $display->panels['right'][0] = 'new-e8e39787-d046-4fe2-a014-0005e97b7a07';
    $pane = new stdClass();
    $pane->pid = 'new-fc2e4c6a-003a-4e8f-895e-63a64aefce65';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Gyc5ATs4vFnmB7se4TvHVYY1gCfqGVh4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filter by Categories',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fc2e4c6a-003a-4e8f-895e-63a64aefce65';
    $display->content['new-fc2e4c6a-003a-4e8f-895e-63a64aefce65'] = $pane;
    $display->panels['right'][1] = 'new-fc2e4c6a-003a-4e8f-895e-63a64aefce65';
    $pane = new stdClass();
    $pane->pid = 'new-2031c4d4-70b0-4c99-b132-c80134c79667';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Yv9OxdaUDSJcKcC6HCvIFHwLx1x0nRwu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2031c4d4-70b0-4c99-b132-c80134c79667';
    $display->content['new-2031c4d4-70b0-4c99-b132-c80134c79667'] = $pane;
    $display->panels['right'][2] = 'new-2031c4d4-70b0-4c99-b132-c80134c79667';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['search'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'server';
  $mini->category = '';
  $mini->admin_title = 'Server';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'foundation_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cb299073-4d68-4b3d-86f0-8453ebb947bf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-77078e41-4d16-441c-bdaf-edb57c91974a';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'server-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '77078e41-4d16-441c-bdaf-edb57c91974a';
    $display->content['new-77078e41-4d16-441c-bdaf-edb57c91974a'] = $pane;
    $display->panels['left'][0] = 'new-77078e41-4d16-441c-bdaf-edb57c91974a';
    $pane = new stdClass();
    $pane->pid = 'new-615989e6-fa69-48ff-872a-193235235a0e';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-QExWigUCDu8nOk5omClgfArP3w5AOJk1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filter by Server Load',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '615989e6-fa69-48ff-872a-193235235a0e';
    $display->content['new-615989e6-fa69-48ff-872a-193235235a0e'] = $pane;
    $display->panels['right'][0] = 'new-615989e6-fa69-48ff-872a-193235235a0e';
    $pane = new stdClass();
    $pane->pid = 'new-d73b86c0-5804-48fe-8ae1-dfca3a918f1e';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-RdX8Mb8Hus0oOtcQ534txMGHF60J0VEc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filter by Server Location',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd73b86c0-5804-48fe-8ae1-dfca3a918f1e';
    $display->content['new-d73b86c0-5804-48fe-8ae1-dfca3a918f1e'] = $pane;
    $display->panels['right'][1] = 'new-d73b86c0-5804-48fe-8ae1-dfca3a918f1e';
    $pane = new stdClass();
    $pane->pid = 'new-e206acc0-ef75-4e85-8f56-af381620913d';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-lgUii4tq7Zm7dBJdFvOzxQpB9wPRJ2Ym';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filter by Server Status',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e206acc0-ef75-4e85-8f56-af381620913d';
    $display->content['new-e206acc0-ef75-4e85-8f56-af381620913d'] = $pane;
    $display->panels['right'][2] = 'new-e206acc0-ef75-4e85-8f56-af381620913d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-77078e41-4d16-441c-bdaf-edb57c91974a';
  $mini->display = $display;
  $export['server'] = $mini;

  return $export;
}
