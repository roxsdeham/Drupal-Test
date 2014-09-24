<?php
/**
 * @file
 * example_blog_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function example_blog_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create blog_entry content'.
  $permissions['create blog_entry content'] = array(
    'name' => 'create blog_entry content',
    'roles' => array(
      'administrator' => 'administrator',
      'blog editor' => 'blog editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog_entry content'.
  $permissions['delete any blog_entry content'] = array(
    'name' => 'delete any blog_entry content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog_entry content'.
  $permissions['delete own blog_entry content'] = array(
    'name' => 'delete own blog_entry content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in migrate_example_wine_varieties'.
  $permissions['delete terms in migrate_example_wine_varieties'] = array(
    'name' => 'delete terms in migrate_example_wine_varieties',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any blog_entry content'.
  $permissions['edit any blog_entry content'] = array(
    'name' => 'edit any blog_entry content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog_entry content'.
  $permissions['edit own blog_entry content'] = array(
    'name' => 'edit own blog_entry content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in migrate_example_wine_varieties'.
  $permissions['edit terms in migrate_example_wine_varieties'] = array(
    'name' => 'edit terms in migrate_example_wine_varieties',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'use text format blog_format'.
  $permissions['use text format blog_format'] = array(
    'name' => 'use text format blog_format',
    'roles' => array(
      'administrator' => 'administrator',
      'blog editor' => 'blog editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
