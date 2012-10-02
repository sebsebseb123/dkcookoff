<?php
/**
 * @file
 * Adativetheme implementation to present a Panels layout.
 *
 * Available variables:
 * - $content: An array of content, each item in the array is keyed to esri-one
 *   panel of the layout.
 * - $css_id: unique id if present.
 * - $panel_prefix: prints a wrapper when this template is used in certain context,
 *   such as when rendered by Display Suite or other module - the wrapper is
 *   added by Adaptivetheme in the appropriate process function.
 * - $panel_suffix: closing element for the $prefix.
 *
 * @see adaptivetheme_preprocess_esri-one()
 * @see adaptivetheme_preprocess_node()
 * @see adaptivetheme_process_node()
 */
?>

<div class="panel-display esri-one-column clearfix" <?php if (!empty($css_id)): print "id=\"$css_id\""; endif; ?>>
  <div class=" region-esri-one-primary cloud">
    <div class="inner clearfix container">
      <?php print $content['esri_one_primary']; ?>
    </div>
    <?php if (!empty($content['esri_one_secondary'])) { ?>
  </div>
  <div class="region-esri-one-secondary panels-secondary first last">
    <div class="inner clearfix container">
      <?php print $content['esri_one_secondary']; ?>
  </div>
  <?php } ?>
  </div>
</div>
