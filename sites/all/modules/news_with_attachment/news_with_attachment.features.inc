<?php
/**
 * @file
 * news_with_attachment.features.inc
 */

/**
 * Implements hook_node_info().
 */
function news_with_attachment_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
