<?php

/**
 * @file
 * Lists available colors and color schemes for the Bootstrap Barrio theme.
 */

$info = [
  // Available colors and color labels used in theme.
  'fields' => [   
    'body' => t('Main Body Color'),
    'navbar_link' => t('Navigation Bar Link'),
    'navbar_background' => t('Navigation Bar Background Color'),
    'navbar_secondary' => t('Secondary navigation Bar Background Color'),
    'bg' => t('Main background'),
    'sidebar' => t('Sidebar background'),
    'sidebarborders' => t('Sidebar borders'),
    'footer' => t('Footer background'),
    'button' => t('Primary buttons on Webforms background'),
    'buttonprimary' =>  t('Primary buttons and active items'),
    'buttonhover' => t('Primary button hover'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'textoverdark' => t('Text color over dark'),
    'searchbutton' => t('Search Button'),
    'link' => t('Link color'),
    'base' => t('Base color'),

  ],
  // Pre-defined color schemes.
  'schemes' => [
    'default' => [
      'title' => t('Metro Default'),
      'colors' => [
        'bg' => '#ffffff',
        'body' => '#f2f2f2',
        'sidebar' => '#f6f6f2',
        'sidebarborders' => '#f9f9f9',
        'footer' => '#292929',
        'button' => '#0a8c7d',
        'buttonhover' => '#0256b1',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'navbar_link' => '#b3ffe0',
        'navbar_background' => '#000000',
        'navbar_secondary' => '#2b3951',
        'link' => '#0071b3',
        'base' => '#4b82bf',
        'buttonprimary' => '#007bff',
        'textoverdark' => '#f7f7f7',
        'searchbutton' => '#ffa500',
      ],
    ], 
  ],
  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => [
    'css/colors.css',
  ],

  // Files to copy.
  'copy' => [
    'logo.svg',
  ],

  // Preview files.
  'preview_library' => 'metro_subtheme/color.preview',
  'preview_html' => 'color/preview.html',

  // Attachments.
  '#attached' => [
    'drupalSettings' => [
      'color' => [
        // Put the logo path into JavaScript for the live preview.
        'logo' => theme_get_setting('logo.url', 'bartik'),
      ],
    ],
  ],
];
