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
 * @see adaptivetheme_preprocess_esri_two_66_33()
 * @see adaptivetheme_preprocess_node()
 * @see adaptivetheme_process_node()
 */
$val = 1;
?>
<?php print $panel_prefix; ?>
<div class="panel-display two-66-33 clearfix" <?php if (!empty($css_id)): print "id=\"$css_id\""; endif; ?>>
  <?php if ($content['esri_two_66_33_top']): ?>
    <div class="region region-two-66-33-top region-conditional-stack">
      <div class="region-inner clearfix container">
        <?php print $content['esri_two_66_33_top']; ?>
      </div>
    </div>
  <?php endif; ?>
  <div class="cloud">
  <div class="container clearfix">
    <div class="region region-two-66-33-first<?php if(!empty($esri_two_66_33_first_classes)) print ' '.  implode(' ', $esri_two_66_33_first_classes); ?><?php print ($content['esri_two_66_33_second'] ? ' sidebar' : ' no-sidebar') ?>">
      <div class="region-inner clearfix ">
        <?php print $content['esri_two_66_33_first']; ?>
      </div>
    </div>
  <?php if ($content['esri_two_66_33_second']): ?>
    <div class="region region-two-66-33-second">
      <div class="region-inner clearfix">
        <?php print $content['esri_two_66_33_second']; ?>
      </div>
    </div>
  <?php endif; ?>
  </div>
  </div>

  <?php if ($content['esri_two_66_33_bottom']): ?>
    <div class="region region-two-66-33-bottom region-conditional-stack">
      <div class="region-inner clearfix container">
        <?php print $content['esri_two_66_33_bottom']; ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($content['esri_two_66_33_sec_header']): ?>
  <div class="panels-secondary">
    <div class="container clearfix">
      <?php if ($content['esri_two_66_33_sec_header']): ?>
        <div class="region region-secondary-header region-conditional-stack">
          <div class="region-inner clearfix container">
            <?php print $content['esri_two_66_33_sec_header']; ?>
          </div>
        </div>
      <?php endif; ?>
      <div class="region region-secondary-first first">
        <div class="region-inner clearfix">
          <?php print $content['esri_two_66_33_sec_first']; ?>
        </div>
      </div>
      <div class="region region-secondary-second">
        <div class="region-inner clearfix">
          <?php print $content['esri_two_66_33_sec_second']; ?>
        </div>
      </div>
      <div class="region region-secondary-third last">
        <div class="region-inner clearfix">
          <?php print $content['esri_two_66_33_sec_third']; ?>
        </div>
      </div>
    </div>
  </div>
  <?php endif; ?>

</div>
<?php print $panel_suffix; ?>
