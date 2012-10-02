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
 * @see adaptivetheme_preprocess_two_50()
 * @see adaptivetheme_preprocess_node()
 * @see adaptivetheme_process_node()
 */

?>
<?php if (!empty( $content['esri_two_secondary_first']) || !empty( $content['esri_two_secondary_second']) ):?>
<?php print $panel_prefix; ?>
<div class="panel-display esri-two two-50 clearfix" <?php if (!empty($css_id)): print "id=\"$css_id\""; endif; ?>>
  <?php if ($content['esri_two_primary']): ?>
    <div class="region region-two-50-top region-conditional-stack cloud">
      <div class="region-inner clearfix">
        <?php print $content['esri_two_primary']; ?>
      </div>
    </div>
  <?php endif; ?>
  <?php if ($content['esri_two_secondary_first']):?>
  <div class="region region-two-50-first panels-secondary">
    <div class="region-inner clearfix">
      <?php print $content['esri_two_secondary_first']; ?>
    </div>
  </div>
  <?php endif;?>
  <?php if ($content['esri_two_secondary_second']):?>
  <div class="region region-two-50-second panels-secondary">
    <div class="region-inner clearfix">
      <?php print $content['esri_two_secondary_second']; ?>
    </div>
  </div>
  <?php endif;?>
</div>
<?php print $panel_suffix; ?>
<?php endif;?>
