<?php
/**
 * @file
 * farm_log_input.features.inc
 */

/**
 * Implements hook_views_api().
 */
function farm_log_input_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_log_type().
 */
function farm_log_input_default_log_type() {
  $items = array();
  $items['farm_input'] = entity_import('log_type', '{
    "type" : "farm_input",
    "label" : "Input",
    "weight" : 0,
    "name_pattern" : "[log:field-farm-material] [log:field-farm-area] [log:field-farm-asset]",
    "name_edit" : "1",
    "done" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
