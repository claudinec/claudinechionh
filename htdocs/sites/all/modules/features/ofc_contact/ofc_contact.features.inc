<?php
/**
 * @file
 * ofc_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ofc_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
