<?php
/**
 * @file
 * ofc_contact.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ofc_contact_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'also_on';
  $box->plugin_key = 'simple';
  $box->title = 'You can also find me on';
  $box->description = 'You can also find me on';
  $box->options = array(
    'body' => array(
      'value' => '- [Twitter](https://twitter.com/claudinec)
- [Facebook](https://www.facebook.com/ClaudineChionhWebDev)
- [Google+](https://plus.google.com/116605328678906868849)
- [LinkedIn](http://au.linkedin.com/in/claudinec/)
',
      'format' => '3',
    ),
    'additional_classes' => '',
  );
  $export['also_on'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Header for contact page';
  $box->options = array(
    'body' => array(
      'value' => 'If you are inquiring about web development or related services, please use the <a href="/form/web-development-inquiry">Web development inquiry form</a>. Otherwise, you can contact me using the form below.
',
      'format' => '1',
    ),
    'additional_classes' => '',
  );
  $export['contact_header'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mailchimp_sub';
  $box->plugin_key = 'simple';
  $box->title = 'Newsletter';
  $box->description = 'Mailchimp subscription';
  $box->options = array(
    'body' => array(
      'value' => '<!-- Begin MailChimp Signup Form -->
<link href="http://cdn-images.mailchimp.com/embedcode/slim-081711.css" rel="stylesheet" type="text/css">
<div id="mc_embed_signup">
<form action="http://claudinechionh.us5.list-manage1.com/subscribe/post?u=bf44e653cda8d3bb36ae54386&amp;id=fbdc24e1c0" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank" novalidate>
	<label for="mce-EMAIL">Subscribe to my newsletter</label>
	<input type="email" value="" name="EMAIL" class="email" id="mce-EMAIL" placeholder="email address" required>
	<div class="clear"><input type="submit" value="Subscribe" name="subscribe" id="mc-embedded-subscribe" class="button"></div>
</form>
</div>

<!--End mc_embed_signup-->',
      'format' => '2',
    ),
    'additional_classes' => '',
  );
  $export['mailchimp_sub'] = $box;

  return $export;
}
