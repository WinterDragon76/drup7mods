<?php

/*/**
 * Implements * will not invoke this hook. All core modules use drupal_mail().
 */

function menu_magic_node_context($node)
{
    $text = _menu_magicify($node->body['und'][0]['value']);
    $output = array(
        '#type' => 'markup',
        '#markup' => '<p> Replacement Text. </p>',
    );
    return $output;
}

/** 
 * Helper function - this wasn't available in full - sample call only
 */

function _menu_magicify($text)
{
    $susbstitutions = array(
        ' ' => ' ',
        't' => 'm',
        'a' => 'e',
    );
}
