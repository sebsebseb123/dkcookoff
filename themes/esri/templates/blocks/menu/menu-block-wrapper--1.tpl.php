<?php
/**
 * @file
 *      Default theme implementation to wrap menu blocks.
 *
 * Available variables:
 * - $content: The renderable array containing the menu.
 * - $classes: A string containing the CSS classes for the DIV tag. Includes:
 *   menu-block-DELTA, menu-name-NAME, parent-mlid-MLID, and menu-level-LEVEL.
 * - $classes_array: An array containing each of the CSS classes.
 *
 * The following variables are provided for contextual information.
 * - $delta: (string) The menu_block's block delta.
 * - $config: An array of the block's configuration settings. Includes
 *   menu_name, parent_mlid, title_link, admin_title, level, follow, depth,
 *   expanded, and sort.
 *
 * @see template_preprocess_menu_block_wrapper()
 */

// request the trail of menu items to the root parent menu item
$active_trail = menu_get_active_trail();

?>
<div class="<?php print $classes; ?>">
	<header>
		<a href="/en/<?php print drupal_lookup_path('alias', $active_trail[1]['link_path']); ?>">
			<h3><?php print $active_trail[1]['link_title']?></h3>
		</a>
	</header>
	<?php print render($content); ?>
</div>
