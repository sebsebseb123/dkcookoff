<?php
/**
 * @file
 * Adativetheme implementation to present a Panels layout.
 *
 * Available variables:
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout.
 * - $css_id: unique id if present.
 * - $panel_prefix: prints a wrapper when this template is used in certain context,
 *   such as when rendered by Display Suite or other module - the wrapper is
 *   added by Adaptivetheme in the appropriate process function.
 * - $panel_suffix: closing element for the $prefix.
 *
 * @see adaptivetheme_preprocess_three_3x33()
 * @see adaptivetheme_preprocess_node()
 * @see adaptivetheme_process_node()
 */
?>
<div class="panel-display esri-three clearfix" <?php if (!empty($css_id)): print "id=\"$css_id\""; endif; ?>>
  <?php if ($content['esri_three_primary']): ?>
    <div class="region region-three-33-top region-conditional-stack cloud">
      <div class="region-inner clearfix container">
        <?php print $content['esri_three_primary']; ?>
      </div>
    </div>
  <?php endif; ?>
  <div class="panels-secondary">
  <div class="container clearfix">
    <?php if ($content['esri_three_secondary_header']): ?>
      <div class="region region-three-33-secondary-header region-conditional-stack">
        <div class="region-inner clearfix container">
          <?php print $content['esri_three_secondary_header']; ?>
        </div>
      </div>
    <?php endif; ?>
  <div class="region region-three-33-first first">
    <div class="region-inner clearfix">
      <?php print $content['esri_three_secondary_first']; ?>
    </div>
  </div>
  <div class="region region-three-33-second">
    <div class="region-inner clearfix">
      <?php print $content['esri_three_secondary_second']; ?>
    </div>
  </div>
  <div class="region region-three-33-third last">
    <div class="region-inner clearfix">
      <?php print $content['esri_three_secondary_third']; ?>
    </div>
  </div>
  </div>
</div>
</div>
