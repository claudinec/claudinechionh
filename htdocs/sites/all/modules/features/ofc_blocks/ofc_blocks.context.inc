<?php
/**
 * @file
 * ofc_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ofc_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front-blocks';
  $context->description = 'Blocks to display on the front page.';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = '';
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks to display on the front page.');
  t('blocks');
  $export['front-blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mge-blocks';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'form/melbourne-green-events' => 'form/melbourne-green-events',
        'mge' => 'mge',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-mge_subscription' => array(
          'module' => 'boxes',
          'delta' => 'mge_subscription',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['mge-blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'web-development';
  $context->description = 'Blocks to display on Web Development page';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'page/web-development' => 'page/web-development',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-portfolio-block_1' => array(
          'module' => 'views',
          'delta' => 'portfolio-block_1',
          'region' => 'content',
          'weight' => '20',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks to display on Web Development page');
  t('blocks');
  $export['web-development'] = $context;

  return $export;
}
