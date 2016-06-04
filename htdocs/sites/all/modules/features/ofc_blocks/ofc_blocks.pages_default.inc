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
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 3,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'About',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'boxes',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'boxes' => array(
        'type' => 'region',
        'title' => 'Boxes',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'boxes' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Claudine Chionh – Technology consulting';
  $display->uuid = 'd68408f6-8fbb-40d9-b550-e0e5272a0f81';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-280b8bf3-b988-46eb-8ce6-6a4422ac4906';
    $pane->panel = 'boxes';
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
    $pane->uuid = '280b8bf3-b988-46eb-8ce6-6a4422ac4906';
    $display->content['new-280b8bf3-b988-46eb-8ce6-6a4422ac4906'] = $pane;
    $display->panels['boxes'][0] = 'new-280b8bf3-b988-46eb-8ce6-6a4422ac4906';
    $pane = new stdClass();
    $pane->pid = 'new-47a3c8ab-8cc7-4a3f-8ba7-037317b9ffd4';
    $pane->panel = 'boxes';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '47a3c8ab-8cc7-4a3f-8ba7-037317b9ffd4';
    $display->content['new-47a3c8ab-8cc7-4a3f-8ba7-037317b9ffd4'] = $pane;
    $display->panels['boxes'][1] = 'new-47a3c8ab-8cc7-4a3f-8ba7-037317b9ffd4';
    $pane = new stdClass();
    $pane->pid = 'new-cbe8d056-13f4-4cfd-9fa0-cd59533ba6e5';
    $pane->panel = 'boxes';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cbe8d056-13f4-4cfd-9fa0-cd59533ba6e5';
    $display->content['new-cbe8d056-13f4-4cfd-9fa0-cd59533ba6e5'] = $pane;
    $display->panels['boxes'][2] = 'new-cbe8d056-13f4-4cfd-9fa0-cd59533ba6e5';
    $pane = new stdClass();
    $pane->pid = 'new-0362f1e0-460d-4c84-bb3e-79174160893b';
    $pane->panel = 'center';
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
    $display->panels['center'][0] = 'new-0362f1e0-460d-4c84-bb3e-79174160893b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front'] = $page;

  return $pages;

}
