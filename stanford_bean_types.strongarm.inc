<?php
/**
 * @file
 * stanford_bean_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_bean_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__stanford_banner';
  $strongarm->value = array(
    'view_modes' => array(
      'default' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_12_col_banner_tall' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_9_col_banner' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_12_col_banner' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_bean__stanford_banner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__stanford_postcard';
  $strongarm->value = array(
    'view_modes' => array(
      'default' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_12_col_banner_tall' => array(
        'weight' => '-5',
        'visible' => TRUE,
        'custom_settings' => FALSE,
      ),
      'stanford_9_col_banner' => array(
        'weight' => '-5',
        'visible' => TRUE,
        'custom_settings' => FALSE,
      ),
      'stanford_12_col_banner' => array(
        'weight' => '-5',
        'visible' => TRUE,
        'custom_settings' => FALSE,
      ),
      'stanford_6_col_photo_landscape' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_4_col_header' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_3_col_header' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_callout_block' => array(
        'custom_settings' => TRUE,
      ),
      'stanford_tiles' => array(
        'custom_settings' => TRUE,
      ),
      'large_landscape' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
        'label' => array(
          'weight' => '-10',
        ),
        'revision' => array(
          'weight' => '10',
        ),
        'view_mode' => array(
          'weight' => '10',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'stanford_6_col_photo_landscape' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'stanford_4_col_header' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'stanford_3_col_header' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'stanford_callout_block' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'stanford_tiles' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_bean__stanford_postcard'] = $strongarm;

  return $export;
}
