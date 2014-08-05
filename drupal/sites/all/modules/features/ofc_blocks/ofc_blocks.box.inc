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

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mge_subscription';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Subscribe to Melbourne Green Events';
  $box->options = array(
    'body' => array(
      'value' => '<!-- Begin MailChimp Signup Form -->
<link href="http://cdn-images.mailchimp.com/embedcode/slim-081711.css" rel="stylesheet" type="text/css">
<style type="text/css">
	#mc_embed_signup{background:#fff; clear:left; font:14px Helvetica,Arial,sans-serif; }
	/* Add your own MailChimp form style overrides in your site stylesheet or in this style block.
	   We recommend moving this block and the preceding CSS link to the HEAD of your HTML file. */
</style>
<div id="mc_embed_signup">
<form action="http://claudinec.us5.list-manage1.com/subscribe/post?u=bf44e653cda8d3bb36ae54386&amp;id=f2882f451e" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank" novalidate>
	<label for="mce-EMAIL">Subscribe to Melbourne Green Events</label>
	<input type="email" value="" name="EMAIL" class="email" id="mce-EMAIL" placeholder="email address" required>
	<div class="clear"><input type="submit" value="Subscribe" name="subscribe" id="mc-embedded-subscribe" class="button"></div>
</form>
</div>

<!--End mc_embed_signup-->',
      'format' => '2',
    ),
  );
  $export['mge_subscription'] = $box;

  return $export;
}
