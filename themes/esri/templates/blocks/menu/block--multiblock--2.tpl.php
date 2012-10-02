<div id="block-<?php print $block->module .'-'. $block->delta; ?>" class="block block-<?php print $block->module ?>">

<?php if ($block->subject): ?>
  <a href="#" name="footer-nav" id="footer-nav" class="element-invisible jumptarget"><h2><?php print $block->subject ?></h2></a>
<?php endif;?>

  <div class="content"><?php print $content ?></div>
</div>