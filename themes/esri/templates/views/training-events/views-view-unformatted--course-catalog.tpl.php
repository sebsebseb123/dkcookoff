<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="accordion-wrapper expanded" style="line-height: normal;">
	<?php if (!empty($title)): ?>
	  <div class="accordion-title">
	  	<?php print $title; ?><br>
	  	<span class="accordion-indicator"></span>
	  </div>
	<?php endif; ?>

	<div class="accordion-body" style="display: none; ">
	<?php foreach ($rows as $id => $row): ?>
	  <div <?php if ($classes_array[$id]) { print 'class="' . $classes_array[$id] .'"';  } ?>>
	    <?php print $row; ?>
	  </div>
	<?php endforeach; ?>
	</div>
</div>
