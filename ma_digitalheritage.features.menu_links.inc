<?php
/**
 * @file
 * ma_digitalheritage.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ma_digitalheritage_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:admin/structure/taxonomy/category/add
  $menu_links['main-menu:admin/structure/taxonomy/category/add'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/category/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => 'Add Category',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a term to the existing taxonomy "category"',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:node/add/digital-heritage
  $menu_links['main-menu:node/add/digital-heritage'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/digital-heritage',
    'router_path' => 'node/add/digital-heritage',
    'link_title' => 'Add Digital Heritage',
    'options' => array(
      'attributes' => array(
        'title' => 'Add digital heritage content to the archive',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Category');
  t('Add Digital Heritage');


  return $menu_links;
}
