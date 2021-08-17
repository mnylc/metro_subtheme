/**
 * @file
 * Global utilities.
 *
 */
(function ($, Drupal) {

    'use strict';

    Drupal.behaviors.metro_subtheme = {
        attach: function (context, settings) {

            function resize() {
                var MOBILE_WIDTH = 992;
                if ($(window).width() >= MOBILE_WIDTH) {
                    $('.navbar-collapse.collapse.show').removeClass('show');
                    // Only move if not in its place already
                    if ($("#navbar-top > #block-metro-subtheme-exposedformsolr-search-contentpage-1").length) {
                       $('#navbar-top .views-exposed-form').insertAfter($('#block-mainnavigation-2'));
                    }
                }
                if ($(window).width() <= MOBILE_WIDTH) {
                    $('#navbar-top .views-exposed-form').insertAfter($('.navbar-toggler'));
                }

            }

            $(window).on('resize', function() {
                // de-collapses if collapsed and media query restores large viewport.
                resize();
            });

            // Triggers admin toolbar offset on page load
            if (context === document) {
                $(context).ready( function() {
                  resize();
                });
                $(context).on("drupalViewportOffsetChange.toolbar", function (event, offsets) {
                    let $body = $("body");
                    if ($body.length > 0 && offsets.top > 0 && $body.css('padding-top') !== offsets.top) {
                        $body.css("padding-top", offsets.top);
                    }
                });
            }
        }
    }

})(jQuery, Drupal);
