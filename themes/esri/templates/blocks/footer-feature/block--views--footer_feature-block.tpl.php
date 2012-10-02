<div id="block-<?php print $block->module .'-'. $block->delta; ?>" class="block block-<?php print $block->module ?>">

<?php if ($block->subject): ?>
  <a href="#" name="footer-feature" id="footer-feature" class="element-invisible"><h2><?php print $block->subject ?></h2></a>
<?php endif;?>

  <div class="content clearfix">
  	<?php print $content ?>
  </div>
</div>