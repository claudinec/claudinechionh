<?php
/**
 * @file
 * ofc_blocks.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ofc_blocks_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front';
  $page->task = 'page';
  $page->admin_title = 'Front';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front__panel_context_b4774c3d-6365-4514-abfd-fabb2b02fe87';
  $handler->task = 'page';
  $handler->subtask = 'front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Claudine Chionh – Technology consulting';
  $display->uuid = 'd68408f6-8fbb-40d9-b550-e0e5272a0f81';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d9d8cb31-8fe1-46de-9126-89051293ee9f';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'boxes-zoho_inquiry';
    $pane->shown = FALSE;
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd9d8cb31-8fe1-46de-9126-89051293ee9f';
    $display->content['new-d9d8cb31-8fe1-46de-9126-89051293ee9f'] = $pane;
    $display->panels['bottom'][0] = 'new-d9d8cb31-8fe1-46de-9126-89051293ee9f';
    $pane = new stdClass();
    $pane->pid = 'new-cf628e19-7c51-4952-803d-18dc6bf3855e';
    $pane->panel = 'left';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '170',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 1,
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cf628e19-7c51-4952-803d-18dc6bf3855e';
    $display->content['new-cf628e19-7c51-4952-803d-18dc6bf3855e'] = $pane;
    $display->panels['left'][0] = 'new-cf628e19-7c51-4952-803d-18dc6bf3855e';
    $pane = new stdClass();
    $pane->pid = 'new-07d79e89-6e19-42dc-8f4b-82595b9352ca';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '171',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 1,
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '07d79e89-6e19-42dc-8f4b-82595b9352ca';
    $display->content['new-07d79e89-6e19-42dc-8f4b-82595b9352ca'] = $pane;
    $display->panels['middle'][0] = 'new-07d79e89-6e19-42dc-8f4b-82595b9352ca';
    $pane = new stdClass();
    $pane->pid = 'new-1da04aba-7808-4570-a821-39cea5c38a4f';
    $pane->panel = 'right';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '172',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 1,
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1da04aba-7808-4570-a821-39cea5c38a4f';
    $display->content['new-1da04aba-7808-4570-a821-39cea5c38a4f'] = $pane;
    $display->panels['right'][0] = 'new-1da04aba-7808-4570-a821-39cea5c38a4f';
    $pane = new stdClass();
    $pane->pid = 'new-0362f1e0-460d-4c84-bb3e-79174160893b';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '167',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
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
    $pane->uuid = '0362f1e0-460d-4c84-bb3e-79174160893b';
    $display->content['new-0362f1e0-460d-4c84-bb3e-79174160893b'] = $pane;
    $display->panels['top'][0] = 'new-0362f1e0-460d-4c84-bb3e-79174160893b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front'] = $page;

  return $pages;

}
