<?php
/**
 * @file
 * ofc_blocks.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ofc_blocks_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'badge_conf';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Badges - conferences';
  $box->options = array(
    'body' => array(
      'value' => '<a href="http://sydney2013.drupal.org"><img src="http://sydney2013.drupal.org/sites/default/files/DCSYD-Badge-Attendee.png" alt="DrupalCon Sydney 2013 - I\'m going" /></a>',
      'format' => '1',
    ),
  );
  $export['badge_conf'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'badges';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Badges - DA';
  $box->options = array(
    'body' => array(
      'value' => '<a href="https://association.drupal.org/"><img src="https://association.drupal.org/files/da_individual_thumb.png" width="190" height="190" alt="Individual Member of the Drupal Association"/></a>',
      'format' => '1',
    ),
    'additional_classes' => '',
  );
  $export['badges'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'badges_nb';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Badges - NationBuilder';
  $box->options = array(
    'body' => array(
      'value' => '<a href="http://nationbuilder.com/experts"><img src="http://claudinec.net/sites/default/files/images/Experts-200x200.png" alt="NationBuilder Expert" /></a>',
      'format' => '1',
    ),
  );
  $export['badges_nb'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact_footer';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Contact footer';
  $box->options = array(
    'body' => array(
      'value' => 'Melbourne, Australia – ABN 35 892 091 161 – Phone +61 3 8658 1355 – <a href="/contact">Contact</a>',
      'format' => '1',
    ),
    'additional_classes' => '',
  );
  $export['contact_footer'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'freshdesk_widget';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Freshdesk widget';
  $box->options = array(
    'body' => array(
      'value' => '<script type="text/javascript" src="http://assets.freshdesk.com/widget/freshwidget.js"></script>
<style type="text/css" media="screen, projection">
	@import url(http://assets.freshdesk.com/widget/freshwidget.css); 
</style> 
<iframe class="freshwidget-embedded-form" id="freshwidget-embedded-form" src="https://claudinechionh.freshdesk.com/widgets/feedback_widget/new?&widgetType=embedded&formTitle=Feedback+%2F+Support&screenshot=no&attachFile=no&searchArea=no" scrolling="no" height="500px" width="100%" frameborder="0" >
</iframe>',
      'format' => '2',
    ),
    'additional_classes' => '',
  );
  $export['freshdesk_widget'] = $box;

  return $export;
}
