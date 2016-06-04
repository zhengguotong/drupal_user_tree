<?php

/**
 * @file
 */


function user_tree_page_callback($form, &$form_state) {
  $form['jstree'] = array(
    '#type' => 'jstree',
    '#tree_options' => array(
      'plugins' => array('types'),
      'core' => array(
        'data' => array(
          'url' => url('user-relation/data')
        ),
      ),
    ),
    '#title' => t('会员关系'),
    '#required' => TRUE
  );

  return $form;
}
