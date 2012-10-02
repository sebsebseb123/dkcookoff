<?php

/**
 * Here we override the default HTML output of drupal.
 * refer to http://drupal.org/node/550722
 */

// Auto-rebuild the theme registry during theme development.
if (theme_get_setting('clear_registry')) {
  // Rebuild .info data.
  system_rebuild_theme_data();
  // Rebuild theme registry.
  drupal_theme_rebuild();
}
// Add Zen Tabs styles
if (theme_get_setting('esri_tabs')) {
  drupal_add_css( drupal_get_path('theme', 'hcc') .'/css/tabs.css');
}

function esri_preprocess_html(&$vars) {
  // Add conditional CSS for IE9 and below.
  drupal_add_css(path_to_theme() . '/css/ie9.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 9', '!IE' => FALSE), 'weight' => 999, 'preprocess' => FALSE));
  // Add conditional CSS for IE8 and below.
  drupal_add_css(path_to_theme() . '/css/ie8.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'weight' => 999, 'preprocess' => FALSE));
  // Add conditional CSS for IE7 and below.
  drupal_add_css(path_to_theme() . '/css/ie7.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'weight' => 999, 'preprocess' => FALSE));

}

function esri_preprocess_page(&$vars, $hook) {
  global $language;

  if (isset($vars['node_title'])) {
    $vars['title'] = $vars['node_title'];
  }
  // Adding a class to #page in wireframe mode
  if (theme_get_setting('wireframe_mode')) {
    $vars['classes_array'][] = 'wireframe-mode';
  }
  // Adding classes wether #navigation is here or not
  if (!empty($vars['main_menu']) or !empty($vars['sub_menu'])) {
    $vars['classes_array'][] = 'with-navigation';
  }
  if (!empty($vars['secondary_menu'])) {
    $vars['classes_array'][] = 'with-subnav';
  }

  // Add first/last classes to node listings about to be rendered.
  if (isset($vars['page']['content']['system_main']['nodes'])) {
    // All nids about to be loaded (without the #sorted attribute).
    $nids = element_children($vars['page']['content']['system_main']['nodes']);
    // Only add first/last classes if there is more than 1 node being rendered.
    if (count($nids) > 1) {
      $first_nid = reset($nids);
      $last_nid = end($nids);
      $first_node = $vars['page']['content']['system_main']['nodes'][$first_nid]['#node'];
      $first_node->classes_array = array('first');
      $last_node = $vars['page']['content']['system_main']['nodes'][$last_nid]['#node'];
      $last_node->classes_array = array('last');
    }
  }

  //Create Lanuage URL Var
  $vars['languagePath'] = ($language->language!='en') ? $language->language . '/' : '';

  //Page Section Title
  $active_trail = menu_get_active_trail();
  $vars['sectionTitle'] = 'Esri Canada';

  if (count($active_trail) > 1 && isset($active_trail[1]['link_title']) && $active_trail[1]['link_title']!='') $vars['sectionTitle'] = $active_trail[1]['link_title'];

  // Add styles for search
  if (arg(0) == 'search') {
    drupal_add_css(drupal_get_path('theme', 'esri') . "/css/search-page.css");
    drupal_add_css(drupal_get_path('theme', 'esri') . "/css/pager.css");
    drupal_add_js(drupal_get_path('theme', 'esri') . "/js/search.js");
  }

  //Get Social Network
  $vars['footer_social'] = '';

  if ($language->language == 'fr' && theme_get_setting('esri_linkedin_fr')) $vars['footer_social'] .= '<a href="' . theme_get_setting('esri_linkedin_fr') . '" target="_blank" class="footer-social footer-linkedin">LinkedIn Paige</a>';
  elseif (theme_get_setting('esri_linkedin')) $vars['footer_social'] .= '<a href="' . theme_get_setting('esri_linkedin') . '" target="_blank" class="footer-social footer-linkedin">LinkedIn Page</a>';

  if ($language->language == 'fr' && theme_get_setting('esri_twitter_fr')) $vars['footer_social'] .= '<a href="' . theme_get_setting('esri_twitter_fr') . '" target="_blank" class="footer-social footer-twitter">Twitter Paige</a>';
  elseif (theme_get_setting('esri_twitter')) $vars['footer_social'] .= '<a href="' . theme_get_setting('esri_twitter') . '" target="_blank" class="footer-social footer-twitter">Twitter Page</a>';

  if ($language->language == 'fr' && theme_get_setting('esri_facebook_fr')) $vars['footer_social'] .= '<a href="' . theme_get_setting('esri_facebook_fr') . '" target="_blank" class="footer-social footer-facebook">Facebook Paige</a>';
  elseif (theme_get_setting('esri_facebook')) $vars['footer_social'] .= '<a href="' . theme_get_setting('esri_facebook') . '" target="_blank" class="footer-social footer-facebook">Facebook Page</a>';

  if ($language->language == 'fr' && theme_get_setting('esri_youtube_fr')) $vars['footer_social'] .= '<a href="' . theme_get_setting('esri_youtube_fr') . '" target="_blank" class="footer-social footer-youtube">YouTube Paige</a>';
  elseif (theme_get_setting('esri_youtube')) $vars['footer_social'] .= '<a href="' . theme_get_setting('esri_youtube') . '" target="_blank" class="footer-social footer-youtube">YouTube Page</a>';

  // Set the subtitle if we have one.
  $vars['subtitle'] = FALSE;
  if (isset($vars['node'])) {
    $node = $vars['node'];

    // We need to check all the fields to find our subtitle field
    $subtitle_field = FALSE;
    foreach (array_keys((array) $node) as $field) {
      if (strpos($field, 'subtitle') !== FALSE) {
        $subtitle_field = $field;
      }
    }

    // If we have one... set it.
    if ($subtitle_field) {
      // We use the field_get_items function for localization purposes.
      $subtitle_field = field_get_items('node', $node, $subtitle_field);
      if (!empty($subtitle_field[0]['value'])) {
        $vars['subtitle'] = $subtitle_field[0]['value'];
      }
    }
  }


  // Get the last item of the menu trail... which is where we are.
  $trail = array_pop($active_trail);

  // Dynamically set the title for training.
  // Check if we're on  a training or event page.
  if (isset($vars['node']) && ($vars['node']->type == 'training' || $vars['node']->type == 'events')) {
    $node = $vars['node'];

    // Get the course node.
    $course_nid = field_get_items('node', $vars['node'], 'field_training_course');
    $course_node = node_load($course_nid[0]['nid']);

    // Set the title.
    $vars['title'] = $course_node->title;
  }
  // Check if we're on a registration page.
  else if (isset($trail['path']) && $trail['path'] == 'register/%/%/%') {
    $ori_node = node_load($trail['original_map'][2]);

    // Get the course node.
    $course_nid = field_get_items('node', $ori_node, 'field_training_course');
    $course_node = node_load($course_nid[0]['nid']);

    // Set the title.
    $vars['title'] = $course_node->title;
  }
}

function esri_preprocess_node(&$vars) {
  // Add a striping class.
  $vars['classes_array'][] = 'node-' . $vars['zebra'];

  // Merge first/last class (from esri_preprocess_page) into classes array of current node object.
  $node = $vars['node'];
  if (!empty($node->classes_array)) {
    $vars['classes_array'] = array_merge($vars['classes_array'], $node->classes_array);
  }
}

function esri_preprocess_block(&$vars, $hook) {
  // Add a striping class.
  $vars['classes_array'][] = 'block-' . $vars['block_zebra'];

  // Add first/last block classes
  $first_last = "";
  // If block id (count) is 1, it's first in region.
  if ($vars['block_id'] == '1') {
    $first_last = "first";
    $vars['classes_array'][] = $first_last;
  }
  // Count amount of blocks about to be rendered in that region.
  $block_count = count(block_list($vars['elements']['#block']->region));
  if ($vars['block_id'] == $block_count) {
    $first_last = "last";
    $vars['classes_array'][] = $first_last;
  }
}

/**
 * Return a themed breadcrumb trail.
 *
 * @param $breadcrumb
 *   An array containing the breadcrumb links.
 * @return
 *   A string containing the breadcrumb output.
 */
function esri_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  // Determine if we are to display the breadcrumb.
  $show_breadcrumb = theme_get_setting('esri_breadcrumb');
  if ($show_breadcrumb == 'yes' || $show_breadcrumb == 'admin' && arg(0) == 'admin') {

    // Optionally get rid of the homepage link.
    $show_breadcrumb_home = theme_get_setting('esri_breadcrumb_home');
    if (!$show_breadcrumb_home) {
      array_shift($breadcrumb);
    }

    // Return the breadcrumb with separators.
    if (!empty($breadcrumb)) {
      $breadcrumb_separator = theme_get_setting('esri_breadcrumb_separator');
      $trailing_separator = $title = '';
      if (theme_get_setting('esri_breadcrumb_title')) {
        $item = menu_get_item();
        if (!empty($item['tab_parent'])) {
          // If we are on a non-default tab, use the tab's title.
          $title = check_plain($item['title']);
        }
        else {
          $title = drupal_get_title();
        }
        if ($title) {
          $trailing_separator = $breadcrumb_separator;
        }
      }
      elseif (theme_get_setting('esri_breadcrumb_trailing')) {
        $trailing_separator = $breadcrumb_separator;
      }

      // Provide a navigational heading to give context for breadcrumb links to
      // screen-reader users. Make the heading invisible with .element-invisible.
      $heading = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

      return $heading . '<div class="breadcrumb">' . implode($breadcrumb_separator, $breadcrumb) . $trailing_separator . $title . '</div>';
    }
  }
  // Otherwise, return an empty string.
  return '';
}

/**
 * Converts a string to a suitable html ID attribute.
 *
 * http://www.w3.org/TR/html4/struct/global.html#h-7.5.2 specifies what makes a
 * valid ID attribute in HTML. This function:
 *
 * - Ensure an ID starts with an alpha character by optionally adding an 'n'.
 * - Replaces any character except A-Z, numbers, and underscores with dashes.
 * - Converts entire string to lowercase.
 *
 * @param $string
 * 	The string
 * @return
 * 	The converted string
 */
function esri_id_safe($string) {
  // Replace with dashes anything that isn't A-Z, numbers, dashes, or underscores.
  $string = drupal_html_id($string);
  return $string;
}

/**
 * Generate the HTML output for a menu link and submenu.
 *
 * @param $variables
 *  An associative array containing:
 *   - element: Structured array data for a menu link.
 *
 * @return
 *  A themed HTML string.
 *
 * @ingroup themeable
 *
 */
function esri_menu_link(array $variables) {
  //Get Active Trail
  $active_trail = menu_get_active_trail();

  /* ======================================
      PRIMARY NAVIGATION (TOP)
    ======================================*/

  if ($variables['element']['#theme'] == 'menu_link__menu_primary_navigation' || $variables['element']['#theme'] == 'menu_link__menu_primary_navigation_fr') {
    $element = $variables['element'];
    $sub_menu = '';

    if ($element['#below']) {
      // if this is a secondary link output the tertiary menus and description
      if ($element['#original_link']['depth'] == 1) {
        // Parent Description
        $parent_desc = '';
        if (isset($element['#localized_options']['attributes']['title'])) $parent_desc = '<div class="secondary-description">' . $element['#localized_options']['attributes']['title'] . '</div>';

        // tertiary menus
        $tertiary_children = array();
        foreach ($element['#below'] as $parentmlid => $child) {
          if (!empty($child['#below'])) {
            foreach ($child['#below'] as $mlid => $tertiary_child) {
              $tertiary_children[$parentmlid][$mlid] = $tertiary_child;
            }
            $child['#below'] = array();
          }
        }
        $sub_menu = drupal_render($element['#below']);

        $tertiary_menus = '';
        $tertiary_menus_footer = '';
        foreach ($tertiary_children as $parentmlid => $children) {
          $tertiary_menus .= '<div class="tertiary_menu clearfix child-mid-' . $parentmlid . '" id="child-mid-' . $parentmlid . '">'
             . drupal_render($children) . '</div>';
          $tertiary_menus_footer .= $children['#children'];
        }
        $sub_menu = '<div class="submenu clearfix">' . $sub_menu .
        	'<div class="tertiary_menu_container clearfix">' . $parent_desc . $tertiary_menus . '</div></div>';
      }
    }
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    // Adding a class depending on the TITLE of the link (not constant)
    $element['#attributes']['class'][] = esri_id_safe($element['#title']);
    // Adding a class depending on the ID of the link (constant)
    $element['#attributes']['class'][] = 'mid-' . $element['#original_link']['mlid'];

    //iPad fix
    $menuiPadFix = '<ul class="menu-ipad-fix"><li><a href="#">fix</a></li></ul>';

    return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . $menuiPadFix . "</li>\n";

  /* ======================================
      SIDEBAR NAVIGATION (LEFT)
    ======================================*/

  }
  elseif ($variables['element']['#theme'][1] == 'menu_link__menu_block__menu_primary_navigation') {


    // Between 1st - 3rd Level
    // This will be outputted if user is within 1st to tertiary level nav
    if (count($active_trail) <= 3) {
      $element = $variables['element'];
      $sub_menu = '';

      if ($element['#below']) {
        $sub_menu = drupal_render($element['#below']);
      }
      $output = l($element['#title'], $element['#href'], $element['#localized_options']);
      return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";

    // Between 4th to 6th Level
    // This handles the output if the user is within the 4th to 6th level
    // 6th level is all we can handle, nothing more
    }
    elseif (count($active_trail) >= 4) {
      //Variables
      $currentId = $variables['element']['#original_link']['mlid'];
      $currentLevel = count($active_trail) - 1;
      $currentLevelId = $active_trail[$currentLevel]['mlid'];
      $pastLevel = $currentLevel - 1;
      $pastLevelId = $active_trail[$pastLevel]['mlid'];

      // If user is ON the 6th level
      // We need some logic to output the 3rd parent which is 3 levels up (past - 2)
      if (count($active_trail) == 6) {
        // Three Levels Up
        $pastLevelParentParent = $pastLevel - 2;
        $pastLevelParentParentId = $active_trail[$pastLevelParentParent]['mlid'];

        // Get Top Parent
        if ($currentId == $pastLevelParentParentId) {
          //Add Deep Level Classes
          $variables['element']['#attributes']['class'][] = 'menu-deep-parent-6';

          $element = $variables['element'];
          $sub_menu = '';

          if ($element['#below']) {
            $sub_menu = drupal_render($element['#below']);
          }
          $output = l($element['#title'], $element['#href'], $element['#localized_options']);
          return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
        }
      }

      // If the user is on the 5th or 6th level
      // We need some logic to output the 4th level parent which is 2 levels up (past - 1)
      if (count($active_trail) >= 5) {
        // Two Levels Up
        $pastLevelParent = $pastLevel - 1;
        $pastLevelParentId = $active_trail[$pastLevelParent]['mlid'];

        // Get Top Parent
        if ($currentId == $pastLevelParentId) {
          //Add Deep Level Classes
          $variables['element']['#attributes']['class'][] = 'menu-deep-parent-5';

          $element = $variables['element'];
          $sub_menu = '';

          if ($element['#below']) {
            $sub_menu = drupal_render($element['#below']);
          }
          $output = l($element['#title'], $element['#href'], $element['#localized_options']);
          return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
        }
      }

      // Get The Up most parent
      if ($currentId == $pastLevelId) {
        //Add Deep Level Classes
        $variables['element']['#attributes']['class'][] = 'menu-deep-parent';

        $element = $variables['element'];
        $sub_menu = '';

        if ($element['#below']) {
          $sub_menu = drupal_render($element['#below']);
        }
        $output = l($element['#title'], $element['#href'], $element['#localized_options']);
        return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";

      // Output for every level after that
      // default theme_menu_link() + additional classes
      }
      elseif ($variables['element']['#original_link']['plid'] == $pastLevelId || $variables['element']['#original_link']['plid'] == $currentLevelId) {
        //Add Deep Level Classes
        $variables['element']['#attributes']['class'][] = 'menu-deep-children';

        $element = $variables['element'];
        $sub_menu = '';

        if ($element['#below']) {
          $sub_menu = drupal_render($element['#below']);
        }
        $output = l($element['#title'], $element['#href'], $element['#localized_options']);
        return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
      }
    }

  /* ======================================
      DEFAULT NAVIGATION OUTPUT
    ======================================*/

  }
  else {
    //Default Drupal theme_menu_link();
    $element = $variables['element'];
    $sub_menu = '';

    if ($element['#below']) {
      $sub_menu = drupal_render($element['#below']);
    }
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
  }
}

function esri_menu_tree($variables) {
  $output = '<ul class="menu clearfix">'. $variables['tree'] .'</ul>';
  return $output;
}


/**
 * Override or insert variables into theme_menu_local_task().
 */
function esri_preprocess_menu_local_task(&$variables) {
  $link =& $variables['element']['#link'];

  // If the link does not contain HTML already, check_plain() it now.
  // After we set 'html'=TRUE the link will not be sanitized by l().
  if (empty($link['localized_options']['html'])) {
    $link['title'] = check_plain($link['title']);
  }
  $link['localized_options']['html'] = TRUE;
  $link['title'] = '<span class="tab">' . $link['title'] . '</span>';
}

/**
 * Duplicate of theme_menu_local_tasks() but adds clearfix to tabs.
 */
function esri_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary clearfix">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary clearfix">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}

// Callback function to hide the upload button on webforms
function esri_file_element_process($element, &$form_state, $form) {
  $element = file_managed_file_process($element, $form_state, $form);
  $element['upload_button']['#access'] = FALSE;
  return $element;
}

function esri_form_alter(&$form, $form_state, $form_id) {
  if($form_id == 'search_block_form') {
    $form['search_block_form']['#attributes']['title'] = t('Search Esri Canada');
  }

  // Webform overrides
  if ( strpos($form_id, 'webform_client_form_') === 0 ) {
    // each form element
    foreach($form['submitted'] as $k => $v) {
      // Check For Feild Sets
      if (is_array($v) && $v['#type'] == 'fieldset') {
        foreach($v as $k1 => $v1) {

          // find select and add 'data-role' attribute
    		  if (is_array($v1) && isset($v1['#type']) && (($v1['#type'] == 'select' && $v1['#webform_component']['extra']['aslist'] == 1 ) || $v1['#type'] == 'date')) {
            $form['submitted'][$k][$k1]['#attributes']['data-native-menu'][] = 'false';
          }

          // To remove the ajax upload button from file upload field
    		  if (is_array($v1) && isset($v1['#type']) && $v1['#type'] == 'managed_file' ) {
      			$form['submitted'][$k][$k1]['#process'][] = 'esri_file_element_process';
      			$form['submitted'][$k][$k1]['#attributes']['autocomplete'][] = 'off';
    		  }
        }
      }
      // Check for other select option and date field
      elseif (is_array($v) && ($v['#type'] == 'select' || $v['#type'] == 'date')) {
        $form['submitted'][$k]['#attributes']['data-native-menu'][] = 'false';

        // For Date Field - Placeholder
        if ($v['#type'] == 'date') {

        }
      }
    }

  // Add color strip
	$form['#prefix'] = '<div class="color-strip clearfix">
                        <div class="strip-first"></div>
                        <div class="strip-second"></div>
                        <div class="strip-third"></div>
                        <div class="strip-fourth"></div>
                        </div>';

	// Add a reset button
    $reset_weight = (int)$form['actions']['submit']['#weight'] - 1;
    $form['actions']['reset'] = array(
      '#type' => 'button',
      '#value' => t('Clear'),
      '#weight' => $reset_weight,
      '#validate' => array(),
      '#attributes' => array('class' => array('form-reset'),'onclick' => 'this.form.reset(); return false;'),
    );
  }
}

function esri_preprocess_views_view(&$vars) {

}

/**
 * A helper function that is used in menu-block-wrapper--id.tpl.php
 *
 * Used to get the title of the secondary-level parent of the current
 * page in the menu in cases where the current page points to a Views generated page.
 * In such instances, on the French site, the property $menu_item['link']['link_path']
 * is an empty string.
 *
 * The function is recursive in that it will keep calling itself until it has successfully
 * located the current path.
 *
 * Arguments:
 *    $menu_item    = a menu tree generated by menu_tree_page_data()
 *    $current_path = the path of the Views page we are on
 *    $level        = used for iteration so that we can allow the title (once found) to bubble up
 *
 * Returns:
 *    $menu_link_title = (string) the heading of the secondary-level menu item that is either the currently viewed
 *                         page or one of whose child menu items is the currently viewed page
 */
function _esri_get_second_level_heading( $menu_item, $current_path, $level = 0 )
{
  // this check and return statement is for instances when the passed in $menu_item is
  // both, a secondary level item and as well as the $current_path
  if(isset($menu_item['link']['link_path']) && $current_path == $menu_item['link']['link_path']) {
    return $menu_item['link']['link_title'];
  }

  // check to see if the $menu_item passed on this iteration is a menu tree or a menu item
  // a menu tree will be an array of menu items, a menu item will have the 'link' and 'below' properties
  if(isset($menu_item['link'])) {

    // return false if this menu item has no children (no menu tree to iterate over)
    // if we've finally reached the deepest menu item without any success, we return FALSE
    if(!sizeof($menu_item['below']))
      return FALSE;

    // at this point, we will iterate over child menu items, we also increment the $level so that we can
    // keep track of what level of the menu tree we are currently on
    foreach( $menu_item['below'] as $menu_item_child ) {

      // internally, this function is listening to the recursion over each child menu item to see if that item's
      // path matches the $current_path that was originally passed in, $menu_link_title is a convenience assignment
      $menu_link_title = _dvp_get_second_level_heading($menu_item_child, $current_path, $level + 1);

      // if $menu_link_title, we break out of the loop and run the if statement at the bottom of this function
      if($menu_link_title)
        break;
    }
  }
  // since no 'link' property was found, this means that this is either the first time this function is
  // called, i.e. from within the .tpl.php file (and we pass an array of menu items) or that the $menu_item that was
  // passed in is an array of menu items
  else {

    // begin iterating over menu items
    foreach( $menu_item as $child ) {

      // see above
      $menu_link_title = _dvp_get_second_level_heading($child, $current_path, $level);

      // see above
      if($menu_link_title)
        break;
    }
  }

  // if this check is true, it means that one of the current menu item's children's path matched the $current_path
  // since we're not sure how deeply nested that child item was, we don't return $menu_link_title directly,
  // instead we directly return the current menu item's title
  if($level == 1 && $menu_link_title) {
    return $menu_item['link']['link_title'];
  }
  // if we've gotten to this point, it means we've not iterated over any 3rd or deeper nested menu levels and thus
  // we can assume that $menu_link_title has been set to the secondary-level menu item (at the top of the function)
  else {
    return $menu_link_title;
  }
}

/**
 * Override template_preprocess_search_result().
 * Change the date format
 */
function esri_preprocess_search_result(&$variables) {
  global $language;

  $result = $variables['result'];

  // Alter date format
  if ( isset($variables['info_split']['date']) ) {
    $variables['info_split']['date'] = format_date($result['date'], 'custom', 'F j, Y');
  }

}

/**
 * Override theme_pager().
 * Hide the 'Next' and 'Previous' pager option
 */

function esri_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : '&lt;&lt;'), 'element' => $element, 'parameters' => $parameters));
  //$li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  //$li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : '&gt;&gt;'), 'element' => $element, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    /*
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }
     */

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current'),
            'data' => '<span class="ui-tooltip-top">'.$i.'</span>',
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
    }
    // End generation.
    /*
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => $li_next,
      );
    }
     */
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }
    return '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pager')),
    ));
  }
}


function esri_pager_link($variables) {
  $text = $variables['text'];
  $page_new = $variables['page_new'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $attributes = $variables['attributes'];

  $page = isset($_GET['page']) ? $_GET['page'] : '';
  if ($new_page = implode(',', pager_load_array($page_new[$element], $element, explode(',', $page)))) {
    $parameters['page'] = $new_page;
  }

  $query = array();
  if (count($parameters)) {
    $query = drupal_get_query_parameters($parameters, array());
  }
  if ($query_pager = pager_get_query_parameters()) {
    $query = array_merge($query, $query_pager);
  }

  // Set each pager link title
  if (!isset($attributes['title'])) {
    static $titles = NULL;
    if (!isset($titles)) {
      $titles = array(
        '&lt;&lt;' => t('Go to first page'),
        t('‹ previous') => t('Go to previous page'),
        t('next ›') => t('Go to next page'),
        '&gt;&gt;' => t('Go to last page'),
      );
    }
    if (isset($titles[$text])) {
      $attributes['title'] = $titles[$text];
    }
    elseif (is_numeric($text)) {
      $attributes['title'] = t('Go to page @number', array('@number' => $text));
    }
  }

  // @todo l() cannot be used here, since it adds an 'active' class based on the
  //   path only (which is always the current path for pager links). Apparently,
  //   none of the pager links is active at any time - but it should still be
  //   possible to use l() here.
  // @see http://drupal.org/node/1410574
  $attributes['href'] = url($_GET['q'], array('query' => $query));

  return '<a' . drupal_attributes($attributes) . '>' . $text . '</a>';
  /*
  switch ($text) {
    case '&lt;&lt;':
    case '&gt;&gt;':
      return '<a' . drupal_attributes($attributes) . '>' . $text . '</a>';
      break;
    default:
      return '<a' . drupal_attributes($attributes) . '><span class="ui-tooltip-top">' . $text . '</span></a>';
  }
  */
}

/**
 * Brief message to display when no results match the query.
 *
 * @see search_help()
 */
function esri_apachesolr_search_noresults() {
  return t('<ul class="apachesolr_search_noresults">
<li>Check if your spelling is correct, or try removing filters.</li>
<li>Remove quotes around phrases to match each word individually: <em>"blue drop"</em> will match less than <em>blue drop</em>.</li>
<li>You can require or exclude terms using + and -: <em>big +blue drop</em> will require a match on <em>blue</em> while <em>big blue -drop</em> will exclude results that contain <em>drop</em>.</li>
</ul>');
}

function esri_preprocess_views_view_unformatted(&$vars) {
  $view = $vars['view'];
  $rows = $vars['rows'];

  //For Collateral Resources
  //Add Download Button Padding Class
  if ($view->name == 'resource_collateral_resources') {
    foreach ($rows as $id => $content) {
      if (!empty($view->result[$id]->field_field_cr_file_entity)) {
        $vars['classes_array'][$id] .= ' has-btn';
      }
    }
  }

  //For Training and Events
  //Add Button Padding Class
  if ($view->name == 'training_and_events_list_view') {
    foreach ($rows as $id => $content) {
      if (!empty($view->result[$id]->field_field_training_register_link) || !empty($view->result[$id]->field_field_event_register_link)) {
        $vars['classes_array'][$id] .= ' has-btn';
      }
    }
  }
}
