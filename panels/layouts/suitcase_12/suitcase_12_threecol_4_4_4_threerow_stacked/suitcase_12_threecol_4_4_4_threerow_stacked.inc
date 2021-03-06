<?php

/**
 * Implements hook_panels_layouts().
 */
function suitcase_interim_suitcase_12_threecol_4_4_4_threerow_stacked_panels_layouts() {
  $items['suitcase_12_threecol_4_4_4_threerow_stacked'] = array(
    'title' => t('Three column 4-4-4 three row stacked'),
    'category' => t('Suitcase: 12 Column Grid'),
    'icon' => 'suitcase_12_threecol_4_4_4_threerow_stacked.png',
    'theme' => 'suitcase_12_threecol_4_4_4_threerow_stacked',
    'admin css' => '../suitcase_panels_admin_12.css',
    'regions' => array(
      'top' => t('Top'),
      'upper_left' => t('Upper left side'),
      'upper_middle' => t('Upper middle column'),
      'upper_right' => t('Upper right side'),
      'middle_left' => t('Middle left side'),
      'middle_middle' => t('Middle middle column'),
      'middle_right' => t('Middle right side'),
      'lower_left' => t('Lower left side'),
      'lower_middle' => t('Lower middle column'),
      'lower_right' => t('Lower right side'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}


