<?php
/**
 * @file
 * ma_digitalheritage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ma_digitalheritage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ma_digitalheritage_node_info() {
  $items = array(
    'digital_heritage' => array(
      'name' => t('Digital Heritage'),
      'base' => 'node_content',
      'description' => t('Digital Heritage media items: images, movies, audio, documents'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('It\'s easy to create Digital Heritage content in Mukurtu. Just follow the four easy steps designated by each tab: Mukurtu Core, Dublin Core, Traditional Knowledge and Licensing. The panels on the left side of this page provide quick links to guidelines for each field if you need help.  '),
    ),
  );
  return $items;
}
