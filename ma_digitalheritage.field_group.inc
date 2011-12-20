<?php
/**
 * @file
 * ma_digitalheritage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ma_digitalheritage_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|taxonomy_term|category|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => '2. Advanced',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '2. Advanced',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_advanced|taxonomy_term|category|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|taxonomy_term|category|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => '1. Basic',
    'weight' => '3',
    'children' => array(
      0 => 'name',
      1 => 'description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '1. Basic',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_basic|taxonomy_term|category|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dublin|node|digital_heritage|form';
  $field_group->group_name = 'group_dublin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => '2. Standard Metadata',
    'weight' => '5',
    'children' => array(
      0 => 'field_description',
      1 => 'field_language',
      2 => 'field_source',
      3 => 'field_identifier',
      4 => 'field_format',
      5 => 'field_rights',
      6 => 'field_date',
      7 => 'field_relation',
      8 => 'field_creator',
      9 => 'field_contributor',
      10 => 'field_publisher',
      11 => 'field_subject',
      12 => 'field_coverage',
      13 => 'field_coverage_description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '2. Standard Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dublin|node|digital_heritage|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_licensing|node|digital_heritage|form';
  $field_group->group_name = 'group_licensing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => '4. Licensing',
    'weight' => '8',
    'children' => array(
      0 => 'field_licence_trad',
      1 => 'field_licence_std_cc',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '4. Licensing',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'In the United States and Australia copyright provides automatic legal protections for most cultural works. This means that the original author of the work has certain rights that they can exercise in relation to the future use of the works. Creative Commons licenses provide more specific instructions for the use of works and are geared towards easier access and to facilitate the sharing of copyright works. These licenses are provided by the individual author or owner of a work. The TK licenses create conditions for access and use of works that are in keeping with community practice. TK licenses allows you to license to others material that is owned by your community. They are designed to address the special needs that you and your community may require in relation to access and use of material within the community and also for other parties who will access these materials externally.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_licensing|node|digital_heritage|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mukurtu|node|digital_heritage|form';
  $field_group->group_name = 'group_mukurtu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => '1. Mukurtu Core',
    'weight' => '4',
    'children' => array(
      0 => 'group_audience',
      1 => 'body',
      2 => 'field_category',
      3 => 'field_tags',
      4 => 'field_media',
      5 => 'field_media_type',
      6 => 'group_content_access',
      7 => 'field_community_groups',
      8 => 'field_cultural_protocol_groups',
      9 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '1. Mukurtu Core',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_mukurtu|node|digital_heritage|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|digital_heritage|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '1',
    'children' => array(
      0 => 'group_mukurtu',
      1 => 'group_dublin',
      2 => 'group_traditional',
      3 => 'group_licensing',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabs|node|digital_heritage|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|taxonomy_term|category|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '2',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_advanced',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabs|taxonomy_term|category|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_traditional|node|digital_heritage|form';
  $field_group->group_name = 'group_traditional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => '3. Traditional Knowledge',
    'weight' => '6',
    'children' => array(
      0 => 'field_tk_body',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '3. Traditional Knowledge',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_traditional|node|digital_heritage|form'] = $field_group;

  return $export;
}
