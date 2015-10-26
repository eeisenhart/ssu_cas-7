<?php
/**
 * @file
 * ucberkeley_cas.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ssu_cas_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
