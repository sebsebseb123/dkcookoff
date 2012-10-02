<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<?php

$row_counter = 0;
$row_current_counter = 1;
$row_group_counter = 1;
$row_total = count($view->result);

?>

<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
	<?php if ($row_current_counter == 1) : ?>
		<div class="related-group" id="related-group-<?php print $row_group_counter; ?>">
	<?php endif; ?>
	  <div <?php if ($classes_array[$id]) { print 'class="' . $classes_array[$id] .'"';  } ?>>
	    <?php print $row; ?>
	  </div>

	  <?php $row_counter = $row_counter+1; ?>
	  <?php $row_current_counter = $row_current_counter+1; ?>

	  <?php
	  if ($row_current_counter == 4) {
	  	//Close Group
	  	print '</div>';
	  	$row_group_counter++;
	  	$row_current_counter = 1;
		}

		?>
	
	<?php if ($row_counter == $row_total && $row_current_counter != 1): ?>
		</div>
	<?php endif; ?>
<?php endforeach; ?>
