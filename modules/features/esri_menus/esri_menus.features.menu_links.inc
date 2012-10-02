<?php
/**
 * @file
 * esri_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function esri_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu:http://esri.com/accessibility
  $menu_links['menu-footer-menu:http://esri.com/accessibility'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://esri.com/accessibility',
    'router_path' => '',
    'link_title' => 'Accessibility',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-footer-menu:http://esri.com/contact
  $menu_links['menu-footer-menu:http://esri.com/contact'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://esri.com/contact',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: menu-footer-menu:http://esri.com/legal
  $menu_links['menu-footer-menu:http://esri.com/legal'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://esri.com/legal',
    'router_path' => '',
    'link_title' => 'Legal',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-footer-menu:http://esri.com/privacy
  $menu_links['menu-footer-menu:http://esri.com/privacy'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://esri.com/privacy',
    'router_path' => '',
    'link_title' => 'Privacy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: menu-footer-menu:http://esri.com/sitemap
  $menu_links['menu-footer-menu:http://esri.com/sitemap'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://esri.com/sitemap',
    'router_path' => '',
    'link_title' => 'Site Map',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-header-menu:<front>
  $menu_links['menu-header-menu:<front>'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-header-menu:http://esri.com/contact
  $menu_links['menu-header-menu:http://esri.com/contact'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'http://esri.com/contact',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-header-menu:http://esri.com/office-locator
  $menu_links['menu-header-menu:http://esri.com/office-locator'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'http://esri.com/office-locator',
    'router_path' => '',
    'link_title' => 'Office Locator',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company
  $menu_links['menu-primary-navigation:http://esri.com/company'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company',
    'router_path' => '',
    'link_title' => 'Company',
    'options' => array(
      'attributes' => array(
        'title' => 'Company description - Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc imperdiet lobortis hendrerit. Quisque dapibus, mauris a porta hendrerit, turpis augue ultricies neque, nec posuere mi turpis at nisl',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-44',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/1
  $menu_links['menu-primary-navigation:http://esri.com/company/1'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/1',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/company',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/10
  $menu_links['menu-primary-navigation:http://esri.com/company/10'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/10',
    'router_path' => '',
    'link_title' => 'Scholarship Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/company/51',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/11
  $menu_links['menu-primary-navigation:http://esri.com/company/11'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/11',
    'router_path' => '',
    'link_title' => 'In The Commnunity',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/company/51',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/12
  $menu_links['menu-primary-navigation:http://esri.com/company/12'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/12',
    'router_path' => '',
    'link_title' => 'GreenRoof',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/company/8',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/13
  $menu_links['menu-primary-navigation:http://esri.com/company/13'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/13',
    'router_path' => '',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/company/9',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/14
  $menu_links['menu-primary-navigation:http://esri.com/company/14'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/14',
    'router_path' => '',
    'link_title' => 'Request Application for Membership',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/company/9',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/15
  $menu_links['menu-primary-navigation:http://esri.com/company/15'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/15',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/company/51',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/16
  $menu_links['menu-primary-navigation:http://esri.com/company/16'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/16',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/company/9',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/17
  $menu_links['menu-primary-navigation:http://esri.com/company/17'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/17',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/company/8',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/18
  $menu_links['menu-primary-navigation:http://esri.com/company/18'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/18',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/company/3',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/19
  $menu_links['menu-primary-navigation:http://esri.com/company/19'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/19',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/company/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/2
  $menu_links['menu-primary-navigation:http://esri.com/company/2'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/2',
    'router_path' => '',
    'link_title' => 'Leadership',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/company',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/20
  $menu_links['menu-primary-navigation:http://esri.com/company/20'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/20',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/company/5',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/21
  $menu_links['menu-primary-navigation:http://esri.com/company/21'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/21',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/company/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/22
  $menu_links['menu-primary-navigation:http://esri.com/company/22'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/22',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/company/7',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/23
  $menu_links['menu-primary-navigation:http://esri.com/company/23'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/23',
    'router_path' => '',
    'link_title' => 'Award News Releases',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/company/3',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/24
  $menu_links['menu-primary-navigation:http://esri.com/company/24'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/24',
    'router_path' => '',
    'link_title' => 'Careers Listings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/company/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/25
  $menu_links['menu-primary-navigation:http://esri.com/company/25'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/25',
    'router_path' => '',
    'link_title' => 'Employment Equity',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/company/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/26
  $menu_links['menu-primary-navigation:http://esri.com/company/26'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/26',
    'router_path' => '',
    'link_title' => 'Associate GIS Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/company/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/27
  $menu_links['menu-primary-navigation:http://esri.com/company/27'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/27',
    'router_path' => '',
    'link_title' => 'Esri Partner Network',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/company/5',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/28
  $menu_links['menu-primary-navigation:http://esri.com/company/28'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/28',
    'router_path' => '',
    'link_title' => 'Find a Partner',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/company/5',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/29
  $menu_links['menu-primary-navigation:http://esri.com/company/29'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/29',
    'router_path' => '',
    'link_title' => 'Program Tiers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/company/27',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/3
  $menu_links['menu-primary-navigation:http://esri.com/company/3'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/3',
    'router_path' => '',
    'link_title' => 'Awards & Recognition',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/company',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/30
  $menu_links['menu-primary-navigation:http://esri.com/company/30'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/30',
    'router_path' => '',
    'link_title' => 'Solutions & Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/company/27',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/31
  $menu_links['menu-primary-navigation:http://esri.com/company/31'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/31',
    'router_path' => '',
    'link_title' => 'What\'s In It For You',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/company/27',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/32
  $menu_links['menu-primary-navigation:http://esri.com/company/32'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/32',
    'router_path' => '',
    'link_title' => 'Who Qualifies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/company/27',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/33
  $menu_links['menu-primary-navigation:http://esri.com/company/33'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/33',
    'router_path' => '',
    'link_title' => 'Partner Benefits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/company/27',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/34
  $menu_links['menu-primary-navigation:http://esri.com/company/34'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/34',
    'router_path' => '',
    'link_title' => 'Steps to Apply',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => 'http://esri.com/company/27',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/35
  $menu_links['menu-primary-navigation:http://esri.com/company/35'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/35',
    'router_path' => '',
    'link_title' => 'Complete Partner Listing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/company/28',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/36
  $menu_links['menu-primary-navigation:http://esri.com/company/36'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/36',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/company/27',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/37
  $menu_links['menu-primary-navigation:http://esri.com/company/37'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/37',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/company/28',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/38
  $menu_links['menu-primary-navigation:http://esri.com/company/38'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/38',
    'router_path' => '',
    'link_title' => 'Get Connected',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/company/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/39
  $menu_links['menu-primary-navigation:http://esri.com/company/39'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/39',
    'router_path' => '',
    'link_title' => 'Esri Canada RSS News Feed',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/company/38',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/4
  $menu_links['menu-primary-navigation:http://esri.com/company/4'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/4',
    'router_path' => '',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/company',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/40
  $menu_links['menu-primary-navigation:http://esri.com/company/40'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/40',
    'router_path' => '',
    'link_title' => 'News Releases',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/company/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/41
  $menu_links['menu-primary-navigation:http://esri.com/company/41'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/41',
    'router_path' => '',
    'link_title' => 'In the News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/company/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/42
  $menu_links['menu-primary-navigation:http://esri.com/company/42'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/42',
    'router_path' => '',
    'link_title' => 'Media Room',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/company/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/43
  $menu_links['menu-primary-navigation:http://esri.com/company/43'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/43',
    'router_path' => '',
    'link_title' => 'Office Locator',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/company/7',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/5
  $menu_links['menu-primary-navigation:http://esri.com/company/5'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/5',
    'router_path' => '',
    'link_title' => 'Partners',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/company',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/50
  $menu_links['menu-primary-navigation:http://esri.com/company/50'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/50',
    'router_path' => '',
    'link_title' => 'Leadership Bios',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/company/2',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/51
  $menu_links['menu-primary-navigation:http://esri.com/company/51'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/51',
    'router_path' => '',
    'link_title' => 'Corporate Responsibility',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/company',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/6
  $menu_links['menu-primary-navigation:http://esri.com/company/6'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/6',
    'router_path' => '',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-44',
    'parent_path' => 'http://esri.com/company',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/7
  $menu_links['menu-primary-navigation:http://esri.com/company/7'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/7',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-42',
    'parent_path' => 'http://esri.com/company',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/8
  $menu_links['menu-primary-navigation:http://esri.com/company/8'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/8',
    'router_path' => '',
    'link_title' => 'Environmental Stewardship',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/company/51',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/company/9
  $menu_links['menu-primary-navigation:http://esri.com/company/9'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/company/9',
    'router_path' => '',
    'link_title' => 'Esri Nonprofit Organization Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/company/51',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis
  $menu_links['menu-primary-navigation:http://esri.com/gis'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis',
    'router_path' => '',
    'link_title' => 'GIS & You',
    'options' => array(
      'attributes' => array(
        'title' => 'GIS & You Description - Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc imperdiet lobortis hendrerit. Quisque dapibus, mauris a porta hendrerit, turpis augue ultricies neque, nec posuere mi turpis at nisl',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/1
  $menu_links['menu-primary-navigation:http://esri.com/gis/1'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/1',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/10
  $menu_links['menu-primary-navigation:http://esri.com/gis/10'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/10',
    'router_path' => '',
    'link_title' => 'Facilities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/gis/7',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/11
  $menu_links['menu-primary-navigation:http://esri.com/gis/11'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/11',
    'router_path' => '',
    'link_title' => 'Policy and Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/gis/7',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/12
  $menu_links['menu-primary-navigation:http://esri.com/gis/12'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/12',
    'router_path' => '',
    'link_title' => 'Safety',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/gis/7',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/13
  $menu_links['menu-primary-navigation:http://esri.com/gis/13'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/13',
    'router_path' => '',
    'link_title' => 'Transportation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/gis/5',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/14
  $menu_links['menu-primary-navigation:http://esri.com/gis/14'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/14',
    'router_path' => '',
    'link_title' => 'Higher Education',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/gis/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/15
  $menu_links['menu-primary-navigation:http://esri.com/gis/15'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/15',
    'router_path' => '',
    'link_title' => 'Teaching & Learning',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
    'parent_path' => 'http://esri.com/gis/14',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/16
  $menu_links['menu-primary-navigation:http://esri.com/gis/16'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/16',
    'router_path' => '',
    'link_title' => 'Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/gis/14',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/17
  $menu_links['menu-primary-navigation:http://esri.com/gis/17'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/17',
    'router_path' => '',
    'link_title' => 'Adminitrators',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
    'parent_path' => 'http://esri.com/gis/14',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/18
  $menu_links['menu-primary-navigation:http://esri.com/gis/18'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/18',
    'router_path' => '',
    'link_title' => 'Libraries and Museums',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/gis/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/19
  $menu_links['menu-primary-navigation:http://esri.com/gis/19'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/19',
    'router_path' => '',
    'link_title' => 'GIS for Museums, Botanic Gardens and Zoos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/gis/18',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/2
  $menu_links['menu-primary-navigation:http://esri.com/gis/2'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/2',
    'router_path' => '',
    'link_title' => 'Business',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/20
  $menu_links['menu-primary-navigation:http://esri.com/gis/20'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/20',
    'router_path' => '',
    'link_title' => 'GIS for Libraries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/gis/18',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/21
  $menu_links['menu-primary-navigation:http://esri.com/gis/21'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/21',
    'router_path' => '',
    'link_title' => 'Community Outreach',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/gis/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/22
  $menu_links['menu-primary-navigation:http://esri.com/gis/22'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/22',
    'router_path' => '',
    'link_title' => 'GeoMentor Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/gis/21',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/23
  $menu_links['menu-primary-navigation:http://esri.com/gis/23'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/23',
    'router_path' => '',
    'link_title' => 'GIS Day',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/gis/21',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/24
  $menu_links['menu-primary-navigation:http://esri.com/gis/24'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/24',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/gis/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/25
  $menu_links['menu-primary-navigation:http://esri.com/gis/25'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/25',
    'router_path' => '',
    'link_title' => 'Goverment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/26
  $menu_links['menu-primary-navigation:http://esri.com/gis/26'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/26',
    'router_path' => '',
    'link_title' => 'Small Local Government Enterprise License Agreement Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
    'parent_path' => 'http://esri.com/gis/25',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/27
  $menu_links['menu-primary-navigation:http://esri.com/gis/27'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/27',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/gis/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/28
  $menu_links['menu-primary-navigation:http://esri.com/gis/28'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/28',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/gis/25',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/29
  $menu_links['menu-primary-navigation:http://esri.com/gis/29'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/29',
    'router_path' => '',
    'link_title' => 'Forestry',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/gis/70',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/3
  $menu_links['menu-primary-navigation:http://esri.com/gis/3'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/3',
    'router_path' => '',
    'link_title' => 'Defense',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/30
  $menu_links['menu-primary-navigation:http://esri.com/gis/30'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/30',
    'router_path' => '',
    'link_title' => 'Oil & Gas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/gis/70',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/31
  $menu_links['menu-primary-navigation:http://esri.com/gis/31'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/31',
    'router_path' => '',
    'link_title' => 'Mining',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/gis/70',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/32
  $menu_links['menu-primary-navigation:http://esri.com/gis/32'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/32',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/gis/70',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/33
  $menu_links['menu-primary-navigation:http://esri.com/gis/33'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/33',
    'router_path' => '',
    'link_title' => 'Public Safety',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-43',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/34
  $menu_links['menu-primary-navigation:http://esri.com/gis/34'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/34',
    'router_path' => '',
    'link_title' => 'Public Works',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-42',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/35
  $menu_links['menu-primary-navigation:http://esri.com/gis/35'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/35',
    'router_path' => '',
    'link_title' => 'PSAB / PS3150 Compliance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/gis/34',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/36
  $menu_links['menu-primary-navigation:http://esri.com/gis/36'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/36',
    'router_path' => '',
    'link_title' => 'Water/Wastewater',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/gis/34',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/37
  $menu_links['menu-primary-navigation:http://esri.com/gis/37'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/37',
    'router_path' => '',
    'link_title' => 'Asset Valuation Toolkit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/gis/34',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/38
  $menu_links['menu-primary-navigation:http://esri.com/gis/38'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/38',
    'router_path' => '',
    'link_title' => 'Transportation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-40',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/39
  $menu_links['menu-primary-navigation:http://esri.com/gis/39'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/39',
    'router_path' => '',
    'link_title' => 'Utilities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-39',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/4
  $menu_links['menu-primary-navigation:http://esri.com/gis/4'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/4',
    'router_path' => '',
    'link_title' => 'Education',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/40
  $menu_links['menu-primary-navigation:http://esri.com/gis/40'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/40',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/gis/39',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/41
  $menu_links['menu-primary-navigation:http://esri.com/gis/41'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/41',
    'router_path' => '',
    'link_title' => 'Small Utilities Enterprise License Agreement',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/gis/39',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/42
  $menu_links['menu-primary-navigation:http://esri.com/gis/42'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/42',
    'router_path' => '',
    'link_title' => 'Smart Grid',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
    'parent_path' => 'http://esri.com/gis/39',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/43
  $menu_links['menu-primary-navigation:http://esri.com/gis/43'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/43',
    'router_path' => '',
    'link_title' => 'Learning About GIS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-38',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/44
  $menu_links['menu-primary-navigation:http://esri.com/gis/44'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/44',
    'router_path' => '',
    'link_title' => 'Students',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-37',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/45
  $menu_links['menu-primary-navigation:http://esri.com/gis/45'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/45',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/gis/44',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/46
  $menu_links['menu-primary-navigation:http://esri.com/gis/46'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/46',
    'router_path' => '',
    'link_title' => 'Careers in GIS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/gis/44',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/47
  $menu_links['menu-primary-navigation:http://esri.com/gis/47'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/47',
    'router_path' => '',
    'link_title' => 'Explore GIS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/gis/44',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/48
  $menu_links['menu-primary-navigation:http://esri.com/gis/48'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/48',
    'router_path' => '',
    'link_title' => 'Post-secondary GIS Programs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/gis/44',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/49
  $menu_links['menu-primary-navigation:http://esri.com/gis/49'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/49',
    'router_path' => '',
    'link_title' => 'Educators',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-36',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/5
  $menu_links['menu-primary-navigation:http://esri.com/gis/5'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/5',
    'router_path' => '',
    'link_title' => 'K-12 Schools',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/gis/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/50
  $menu_links['menu-primary-navigation:http://esri.com/gis/50'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/50',
    'router_path' => '',
    'link_title' => 'Education Resources/Lesson Planner',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/gis/49',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/51
  $menu_links['menu-primary-navigation:http://esri.com/gis/51'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/51',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/gis/49',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/52
  $menu_links['menu-primary-navigation:http://esri.com/gis/52'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/52',
    'router_path' => '',
    'link_title' => 'GIS in the Classroom',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/gis/49',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/53
  $menu_links['menu-primary-navigation:http://esri.com/gis/53'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/53',
    'router_path' => '',
    'link_title' => 'Skills Canada',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/gis/49',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/54
  $menu_links['menu-primary-navigation:http://esri.com/gis/54'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/54',
    'router_path' => '',
    'link_title' => 'Professional Development',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/gis/49',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/55
  $menu_links['menu-primary-navigation:http://esri.com/gis/55'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/55',
    'router_path' => '',
    'link_title' => 'Teacher Workshops',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/gis/54',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/56
  $menu_links['menu-primary-navigation:http://esri.com/gis/56'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/56',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/gis/54',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/57
  $menu_links['menu-primary-navigation:http://esri.com/gis/57'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/57',
    'router_path' => '',
    'link_title' => 'Online Training',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/gis/54',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/58
  $menu_links['menu-primary-navigation:http://esri.com/gis/58'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/58',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/gis/68',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/59
  $menu_links['menu-primary-navigation:http://esri.com/gis/59'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/59',
    'router_path' => '',
    'link_title' => 'Esri Development Centre (EDC)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => 'http://esri.com/gis/49',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/6
  $menu_links['menu-primary-navigation:http://esri.com/gis/6'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/6',
    'router_path' => '',
    'link_title' => 'Teaching & Learning',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/gis/5',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/60
  $menu_links['menu-primary-navigation:http://esri.com/gis/60'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/60',
    'router_path' => '',
    'link_title' => 'Scholarship Programs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => 'http://esri.com/gis/49',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/61
  $menu_links['menu-primary-navigation:http://esri.com/gis/61'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/61',
    'router_path' => '',
    'link_title' => 'Health Care',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/62
  $menu_links['menu-primary-navigation:http://esri.com/gis/62'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/62',
    'router_path' => '',
    'link_title' => 'Developers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/63
  $menu_links['menu-primary-navigation:http://esri.com/gis/63'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/63',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
    'parent_path' => 'http://esri.com/gis/18',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/64
  $menu_links['menu-primary-navigation:http://esri.com/gis/64'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/64',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
    'parent_path' => 'http://esri.com/gis/21',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/65
  $menu_links['menu-primary-navigation:http://esri.com/gis/65'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/65',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/gis/34',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/66
  $menu_links['menu-primary-navigation:http://esri.com/gis/66'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/66',
    'router_path' => '',
    'link_title' => 'Telecommunications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-41',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/67
  $menu_links['menu-primary-navigation:http://esri.com/gis/67'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/67',
    'router_path' => '',
    'link_title' => 'Student Licenses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/gis/44',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/68
  $menu_links['menu-primary-navigation:http://esri.com/gis/68'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/68',
    'router_path' => '',
    'link_title' => 'Software and Licenses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/gis/49',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/69
  $menu_links['menu-primary-navigation:http://esri.com/gis/69'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/69',
    'router_path' => '',
    'link_title' => 'Provincial Licenses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/gis/68',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/7
  $menu_links['menu-primary-navigation:http://esri.com/gis/7'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/7',
    'router_path' => '',
    'link_title' => 'Administrators',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/gis/5',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/70
  $menu_links['menu-primary-navigation:http://esri.com/gis/70'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/70',
    'router_path' => '',
    'link_title' => 'Natural Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-44',
    'parent_path' => 'http://esri.com/gis',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/75
  $menu_links['menu-primary-navigation:http://esri.com/gis/75'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/75',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/gis/5',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/76
  $menu_links['menu-primary-navigation:http://esri.com/gis/76'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/76',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/gis/7',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/8
  $menu_links['menu-primary-navigation:http://esri.com/gis/8'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/8',
    'router_path' => '',
    'link_title' => 'Demographics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/gis/7',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/gis/9
  $menu_links['menu-primary-navigation:http://esri.com/gis/9'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/gis/9',
    'router_path' => '',
    'link_title' => 'Planning',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/gis/7',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products
  $menu_links['menu-primary-navigation:http://esri.com/products'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products',
    'router_path' => '',
    'link_title' => 'Products & Services',
    'options' => array(
      'attributes' => array(
        'title' => 'Products & Services Description - Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc imperdiet lobortis hendrerit. Quisque dapibus, mauris a porta hendrerit, turpis augue ultricies neque, nec posuere mi turpis at nisl',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/1
  $menu_links['menu-primary-navigation:http://esri.com/products/1'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/1',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/10
  $menu_links['menu-primary-navigation:http://esri.com/products/10'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/10',
    'router_path' => '',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-41',
    'parent_path' => 'http://esri.com/products',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/100
  $menu_links['menu-primary-navigation:http://esri.com/products/100'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/100',
    'router_path' => '',
    'link_title' => 'Free Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/products/7',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/101
  $menu_links['menu-primary-navigation:http://esri.com/products/101'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/101',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/products/8',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/102
  $menu_links['menu-primary-navigation:http://esri.com/products/102'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/102',
    'router_path' => '',
    'link_title' => 'ArcGIS Online Free Personal Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'http://esri.com/products/8',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/103
  $menu_links['menu-primary-navigation:http://esri.com/products/103'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/103',
    'router_path' => '',
    'link_title' => 'ArcGIS Explorer Online',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'http://esri.com/products/8',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/104
  $menu_links['menu-primary-navigation:http://esri.com/products/104'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/104',
    'router_path' => '',
    'link_title' => 'ArcGIS Explorer Desktop',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'http://esri.com/products/8',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/105
  $menu_links['menu-primary-navigation:http://esri.com/products/105'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/105',
    'router_path' => '',
    'link_title' => 'ArcGIS for AutoCAD',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'http://esri.com/products/8',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/106
  $menu_links['menu-primary-navigation:http://esri.com/products/106'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/106',
    'router_path' => '',
    'link_title' => 'ArcGIS for Smartphones & Tablets ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'http://esri.com/products/8',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/107
  $menu_links['menu-primary-navigation:http://esri.com/products/107'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/107',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/products/10',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/108
  $menu_links['menu-primary-navigation:http://esri.com/products/108'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/108',
    'router_path' => '',
    'link_title' => 'Project Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'http://esri.com/products/10',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/109
  $menu_links['menu-primary-navigation:http://esri.com/products/109'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/109',
    'router_path' => '',
    'link_title' => 'Implementation Service',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'http://esri.com/products/10',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/11
  $menu_links['menu-primary-navigation:http://esri.com/products/11'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/11',
    'router_path' => '',
    'link_title' => 'ArcGIS for Desktop',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/3',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/110
  $menu_links['menu-primary-navigation:http://esri.com/products/110'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/110',
    'router_path' => '',
    'link_title' => 'Methodology',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'http://esri.com/products/10',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/111
  $menu_links['menu-primary-navigation:http://esri.com/products/111'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/111',
    'router_path' => '',
    'link_title' => 'Enterprise Advantage Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '3',
    'parent_path' => 'http://esri.com/products/10',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/112
  $menu_links['menu-primary-navigation:http://esri.com/products/112'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/112',
    'router_path' => '',
    'link_title' => 'International Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'http://esri.com/products/10',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/113
  $menu_links['menu-primary-navigation:http://esri.com/products/113'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/113',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/products/111',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/114
  $menu_links['menu-primary-navigation:http://esri.com/products/114'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/114',
    'router_path' => '',
    'link_title' => 'Beneifits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'http://esri.com/products/111',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/115
  $menu_links['menu-primary-navigation:http://esri.com/products/115'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/115',
    'router_path' => '',
    'link_title' => 'Subscription Level',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'http://esri.com/products/111',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/116
  $menu_links['menu-primary-navigation:http://esri.com/products/116'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/116',
    'router_path' => '',
    'link_title' => 'Components',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'http://esri.com/products/111',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/12
  $menu_links['menu-primary-navigation:http://esri.com/products/12'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/12',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/3',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/120
  $menu_links['menu-primary-navigation:http://esri.com/products/120'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/120',
    'router_path' => '',
    'link_title' => 'For Organizations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/15',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/121
  $menu_links['menu-primary-navigation:http://esri.com/products/121'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/121',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/13
  $menu_links['menu-primary-navigation:http://esri.com/products/13'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/13',
    'router_path' => '',
    'link_title' => 'ArcGIS for Mobile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/3',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/14
  $menu_links['menu-primary-navigation:http://esri.com/products/14'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/14',
    'router_path' => '',
    'link_title' => 'ArcGIS for Server',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/products/3',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/15
  $menu_links['menu-primary-navigation:http://esri.com/products/15'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/15',
    'router_path' => '',
    'link_title' => 'ArcGIS Online',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/products/3',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/16
  $menu_links['menu-primary-navigation:http://esri.com/products/16'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/16',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/11',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/17
  $menu_links['menu-primary-navigation:http://esri.com/products/17'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/17',
    'router_path' => '',
    'link_title' => 'ArcGIS for Desktop Extensions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/11',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/18
  $menu_links['menu-primary-navigation:http://esri.com/products/18'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/18',
    'router_path' => '',
    'link_title' => 'ArcReader',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/11',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/19
  $menu_links['menu-primary-navigation:http://esri.com/products/19'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/19',
    'router_path' => '',
    'link_title' => 'ArcGIS French Supplement',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/products/11',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/2
  $menu_links['menu-primary-navigation:http://esri.com/products/2'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/2',
    'router_path' => '',
    'link_title' => 'Products A-Z',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/20
  $menu_links['menu-primary-navigation:http://esri.com/products/20'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/20',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/19',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/21
  $menu_links['menu-primary-navigation:http://esri.com/products/21'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/21',
    'router_path' => '',
    'link_title' => 'ArcGIS French Supplement Request Form',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/19',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/22
  $menu_links['menu-primary-navigation:http://esri.com/products/22'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/22',
    'router_path' => '',
    'link_title' => 'ArcGIS for Home Use Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/products/11',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/23
  $menu_links['menu-primary-navigation:http://esri.com/products/23'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/23',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/22',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/24
  $menu_links['menu-primary-navigation:http://esri.com/products/24'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/24',
    'router_path' => '',
    'link_title' => 'ArcGIS for Home Use Program Form',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/22',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/25
  $menu_links['menu-primary-navigation:http://esri.com/products/25'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/25',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/13',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/26
  $menu_links['menu-primary-navigation:http://esri.com/products/26'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/26',
    'router_path' => '',
    'link_title' => 'ArcGIS for Windows Mobile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/13',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/27
  $menu_links['menu-primary-navigation:http://esri.com/products/27'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/27',
    'router_path' => '',
    'link_title' => 'ArcGIS for Smartphones and Tablets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/13',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/28
  $menu_links['menu-primary-navigation:http://esri.com/products/28'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/28',
    'router_path' => '',
    'link_title' => 'ArcPad',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/products/13',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/29
  $menu_links['menu-primary-navigation:http://esri.com/products/29'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/29',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/14',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/3
  $menu_links['menu-primary-navigation:http://esri.com/products/3'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/3',
    'router_path' => '',
    'link_title' => 'ArcGIS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/30
  $menu_links['menu-primary-navigation:http://esri.com/products/30'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/30',
    'router_path' => '',
    'link_title' => 'ArcGIS for Server in the Cloud',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/14',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/31
  $menu_links['menu-primary-navigation:http://esri.com/products/31'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/31',
    'router_path' => '',
    'link_title' => 'ArcGIS for Server Extensions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/14',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/32
  $menu_links['menu-primary-navigation:http://esri.com/products/32'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/32',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/15',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/33
  $menu_links['menu-primary-navigation:http://esri.com/products/33'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/33',
    'router_path' => '',
    'link_title' => 'For Personal Use',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/15',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/34
  $menu_links['menu-primary-navigation:http://esri.com/products/34'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/34',
    'router_path' => '',
    'link_title' => 'For Developers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/products/15',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/35
  $menu_links['menu-primary-navigation:http://esri.com/products/35'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/35',
    'router_path' => '',
    'link_title' => 'Community Maps',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/products/15',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/36
  $menu_links['menu-primary-navigation:http://esri.com/products/36'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/36',
    'router_path' => '',
    'link_title' => 'Comparison Table',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/products/15',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/37
  $menu_links['menu-primary-navigation:http://esri.com/products/37'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/37',
    'router_path' => '',
    'link_title' => 'Portable for ArcGIS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => 'http://esri.com/products/15',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/38
  $menu_links['menu-primary-navigation:http://esri.com/products/38'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/38',
    'router_path' => '',
    'link_title' => 'What\'s New in 10.1',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/products/3',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/39
  $menu_links['menu-primary-navigation:http://esri.com/products/39'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/39',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/4
  $menu_links['menu-primary-navigation:http://esri.com/products/4'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/4',
    'router_path' => '',
    'link_title' => 'Developer Tools',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/products',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/40
  $menu_links['menu-primary-navigation:http://esri.com/products/40'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/40',
    'router_path' => '',
    'link_title' => 'Esri Developer Network',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/41
  $menu_links['menu-primary-navigation:http://esri.com/products/41'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/41',
    'router_path' => '',
    'link_title' => 'ArcGIS Runtime',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/42
  $menu_links['menu-primary-navigation:http://esri.com/products/42'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/42',
    'router_path' => '',
    'link_title' => 'Web APIs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/products/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/43
  $menu_links['menu-primary-navigation:http://esri.com/products/43'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/43',
    'router_path' => '',
    'link_title' => 'ArcGIS API for Microsoft Silverlight',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/42',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/44
  $menu_links['menu-primary-navigation:http://esri.com/products/44'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/44',
    'router_path' => '',
    'link_title' => 'ArcGIS API for Flex',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/42',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/45
  $menu_links['menu-primary-navigation:http://esri.com/products/45'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/45',
    'router_path' => '',
    'link_title' => 'ArcGIS API for Javascript',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/products/42',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/46
  $menu_links['menu-primary-navigation:http://esri.com/products/46'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/46',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/42',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/47
  $menu_links['menu-primary-navigation:http://esri.com/products/47'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/47',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/5',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/48
  $menu_links['menu-primary-navigation:http://esri.com/products/48'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/48',
    'router_path' => '',
    'link_title' => 'Esri Maps for Office',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/5',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/49
  $menu_links['menu-primary-navigation:http://esri.com/products/49'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/49',
    'router_path' => '',
    'link_title' => 'Esri Maps for IBM Cognos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/5',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/5
  $menu_links['menu-primary-navigation:http://esri.com/products/5'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/5',
    'router_path' => '',
    'link_title' => 'Location Analytics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/products',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/50
  $menu_links['menu-primary-navigation:http://esri.com/products/50'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/50',
    'router_path' => '',
    'link_title' => 'Esri Business Analyst Product Suite',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/products/5',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/51
  $menu_links['menu-primary-navigation:http://esri.com/products/51'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/51',
    'router_path' => '',
    'link_title' => 'Esri Community Analyst',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/products/5',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/52
  $menu_links['menu-primary-navigation:http://esri.com/products/52'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/52',
    'router_path' => '',
    'link_title' => 'ArcGIS for SharePoint',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/products/5',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/53
  $menu_links['menu-primary-navigation:http://esri.com/products/53'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/53',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/50',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/54
  $menu_links['menu-primary-navigation:http://esri.com/products/54'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/54',
    'router_path' => '',
    'link_title' => 'Esri Business Analyst Desktop (Canadian Edition)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/50',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/55
  $menu_links['menu-primary-navigation:http://esri.com/products/55'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/55',
    'router_path' => '',
    'link_title' => 'Business Analyst Online (BAO) API',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/50',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/56
  $menu_links['menu-primary-navigation:http://esri.com/products/56'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/56',
    'router_path' => '',
    'link_title' => 'Canadian Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/products/50',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/57
  $menu_links['menu-primary-navigation:http://esri.com/products/57'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/57',
    'router_path' => '',
    'link_title' => 'Key Features',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/products/50',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/58
  $menu_links['menu-primary-navigation:http://esri.com/products/58'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/58',
    'router_path' => '',
    'link_title' => 'License Levels',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/products/50',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/59
  $menu_links['menu-primary-navigation:http://esri.com/products/59'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/59',
    'router_path' => '',
    'link_title' => 'Data Matrix',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => 'http://esri.com/products/50',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/6
  $menu_links['menu-primary-navigation:http://esri.com/products/6'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/6',
    'router_path' => '',
    'link_title' => 'Specialized Applications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/products',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/60
  $menu_links['menu-primary-navigation:http://esri.com/products/60'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/60',
    'router_path' => '',
    'link_title' => 'System Requirements',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => 'http://esri.com/products/50',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/61
  $menu_links['menu-primary-navigation:http://esri.com/products/61'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/61',
    'router_path' => '',
    'link_title' => 'Legal',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => 'http://esri.com/products/50',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/62
  $menu_links['menu-primary-navigation:http://esri.com/products/62'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/62',
    'router_path' => '',
    'link_title' => 'Esri CityEngine',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/63
  $menu_links['menu-primary-navigation:http://esri.com/products/63'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/63',
    'router_path' => '',
    'link_title' => 'ArcFM Suite',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/64
  $menu_links['menu-primary-navigation:http://esri.com/products/64'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/64',
    'router_path' => '',
    'link_title' => 'Cityworks Suite',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/products/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/65
  $menu_links['menu-primary-navigation:http://esri.com/products/65'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/65',
    'router_path' => '',
    'link_title' => 'CrimeAnalyst',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/products/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/66
  $menu_links['menu-primary-navigation:http://esri.com/products/66'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/66',
    'router_path' => '',
    'link_title' => 'Geocortex Essentials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/products/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/67
  $menu_links['menu-primary-navigation:http://esri.com/products/67'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/67',
    'router_path' => '',
    'link_title' => 'Geocortex Optimizer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-44',
    'parent_path' => 'http://esri.com/products/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/68
  $menu_links['menu-primary-navigation:http://esri.com/products/68'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/68',
    'router_path' => '',
    'link_title' => 'PurVIEW',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-43',
    'parent_path' => 'http://esri.com/products/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/69
  $menu_links['menu-primary-navigation:http://esri.com/products/69'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/69',
    'router_path' => '',
    'link_title' => 'VoyagerGIS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-42',
    'parent_path' => 'http://esri.com/products/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/7
  $menu_links['menu-primary-navigation:http://esri.com/products/7'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/7',
    'router_path' => '',
    'link_title' => 'Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-44',
    'parent_path' => 'http://esri.com/products',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/70
  $menu_links['menu-primary-navigation:http://esri.com/products/70'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/70',
    'router_path' => '',
    'link_title' => 'Geoportal Server',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-41',
    'parent_path' => 'http://esri.com/products/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/71
  $menu_links['menu-primary-navigation:http://esri.com/products/71'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/71',
    'router_path' => '',
    'link_title' => 'ArcGIS for Transportation Analytics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-40',
    'parent_path' => 'http://esri.com/products/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/72
  $menu_links['menu-primary-navigation:http://esri.com/products/72'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/72',
    'router_path' => '',
    'link_title' => 'Mapping and Charting Solutions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-39',
    'parent_path' => 'http://esri.com/products/6',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/73
  $menu_links['menu-primary-navigation:http://esri.com/products/73'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/73',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/63',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/74
  $menu_links['menu-primary-navigation:http://esri.com/products/74'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/74',
    'router_path' => '',
    'link_title' => 'Key Features',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/63',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/75
  $menu_links['menu-primary-navigation:http://esri.com/products/75'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/75',
    'router_path' => '',
    'link_title' => 'Literature',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/63',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/76
  $menu_links['menu-primary-navigation:http://esri.com/products/76'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/76',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/64',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/77
  $menu_links['menu-primary-navigation:http://esri.com/products/77'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/77',
    'router_path' => '',
    'link_title' => 'Key Features',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/64',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/78
  $menu_links['menu-primary-navigation:http://esri.com/products/78'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/78',
    'router_path' => '',
    'link_title' => 'Literature',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/64',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/79
  $menu_links['menu-primary-navigation:http://esri.com/products/79'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/79',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/65',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/8
  $menu_links['menu-primary-navigation:http://esri.com/products/8'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/8',
    'router_path' => '',
    'link_title' => 'Free Mapping Software',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-43',
    'parent_path' => 'http://esri.com/products',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/80
  $menu_links['menu-primary-navigation:http://esri.com/products/80'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/80',
    'router_path' => '',
    'link_title' => 'Key Features',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/65',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/81
  $menu_links['menu-primary-navigation:http://esri.com/products/81'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/81',
    'router_path' => '',
    'link_title' => 'System Requirements',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/65',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/82
  $menu_links['menu-primary-navigation:http://esri.com/products/82'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/82',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/66',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/83
  $menu_links['menu-primary-navigation:http://esri.com/products/83'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/83',
    'router_path' => '',
    'link_title' => 'Literature',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/66',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/84
  $menu_links['menu-primary-navigation:http://esri.com/products/84'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/84',
    'router_path' => '',
    'link_title' => 'System Requirements',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/66',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/85
  $menu_links['menu-primary-navigation:http://esri.com/products/85'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/85',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/67',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/86
  $menu_links['menu-primary-navigation:http://esri.com/products/86'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/86',
    'router_path' => '',
    'link_title' => 'Literature',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/67',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/87
  $menu_links['menu-primary-navigation:http://esri.com/products/87'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/87',
    'router_path' => '',
    'link_title' => 'System Requirements',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/67',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/88
  $menu_links['menu-primary-navigation:http://esri.com/products/88'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/88',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/68',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/89
  $menu_links['menu-primary-navigation:http://esri.com/products/89'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/89',
    'router_path' => '',
    'link_title' => 'Key Features',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/68',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/9
  $menu_links['menu-primary-navigation:http://esri.com/products/9'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/9',
    'router_path' => '',
    'link_title' => 'Interoperability & Standards',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-42',
    'parent_path' => 'http://esri.com/products',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/90
  $menu_links['menu-primary-navigation:http://esri.com/products/90'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/90',
    'router_path' => '',
    'link_title' => 'Literature',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/68',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/91
  $menu_links['menu-primary-navigation:http://esri.com/products/91'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/91',
    'router_path' => '',
    'link_title' => 'System Requirements',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/products/68',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/92
  $menu_links['menu-primary-navigation:http://esri.com/products/92'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/92',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/7',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/93
  $menu_links['menu-primary-navigation:http://esri.com/products/93'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/93',
    'router_path' => '',
    'link_title' => 'Basemaps',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/7',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/94
  $menu_links['menu-primary-navigation:http://esri.com/products/94'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/94',
    'router_path' => '',
    'link_title' => 'Imagery Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/products/7',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/95
  $menu_links['menu-primary-navigation:http://esri.com/products/95'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/95',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/94',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/96
  $menu_links['menu-primary-navigation:http://esri.com/products/96'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/96',
    'router_path' => '',
    'link_title' => 'DigitalGlobe',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/94',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/97
  $menu_links['menu-primary-navigation:http://esri.com/products/97'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/97',
    'router_path' => '',
    'link_title' => 'Demographic, Consumer and Business Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/products/7',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/98
  $menu_links['menu-primary-navigation:http://esri.com/products/98'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/98',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/products/97',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/products/99
  $menu_links['menu-primary-navigation:http://esri.com/products/99'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/products/99',
    'router_path' => '',
    'link_title' => 'Canadian Commercial Data Providers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/products/97',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources
  $menu_links['menu-primary-navigation:http://esri.com/resources'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources',
    'router_path' => '',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => 'Resources Description - Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc imperdiet lobortis hendrerit. Quisque dapibus, mauris a porta hendrerit, turpis augue ultricies neque, nec posuere mi turpis at nisl',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-46',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/1
  $menu_links['menu-primary-navigation:http://esri.com/resources/1'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/1',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/resources',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/10
  $menu_links['menu-primary-navigation:http://esri.com/resources/10'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/10',
    'router_path' => '',
    'link_title' => 'Submit Your Application',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/resources/8',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/13
  $menu_links['menu-primary-navigation:http://esri.com/resources/13'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/13',
    'router_path' => '',
    'link_title' => 'Data Models',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/resources',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/14
  $menu_links['menu-primary-navigation:http://esri.com/resources/14'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/14',
    'router_path' => '',
    'link_title' => 'Downloads',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-44',
    'parent_path' => 'http://esri.com/resources',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/15
  $menu_links['menu-primary-navigation:http://esri.com/resources/15'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/15',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/resources/14',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/16
  $menu_links['menu-primary-navigation:http://esri.com/resources/16'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/16',
    'router_path' => '',
    'link_title' => 'GIS for Canada',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/resources/14',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/17
  $menu_links['menu-primary-navigation:http://esri.com/resources/17'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/17',
    'router_path' => '',
    'link_title' => 'NTv2 Request',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/resources/14',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/18
  $menu_links['menu-primary-navigation:http://esri.com/resources/18'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/18',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/resources/30',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/19
  $menu_links['menu-primary-navigation:http://esri.com/resources/19'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/19',
    'router_path' => '',
    'link_title' => 'Lesson Planner',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/resources/30',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/2
  $menu_links['menu-primary-navigation:http://esri.com/resources/2'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/2',
    'router_path' => '',
    'link_title' => 'Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/resources',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/20
  $menu_links['menu-primary-navigation:http://esri.com/resources/20'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/20',
    'router_path' => '',
    'link_title' => 'Data Sources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/resources/30',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/21
  $menu_links['menu-primary-navigation:http://esri.com/resources/21'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/21',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/resources/20',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/22
  $menu_links['menu-primary-navigation:http://esri.com/resources/22'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/22',
    'router_path' => '',
    'link_title' => 'Strictly Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/resources/20',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/23
  $menu_links['menu-primary-navigation:http://esri.com/resources/23'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/23',
    'router_path' => '',
    'link_title' => 'Local Dataset',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/resources/20',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/24
  $menu_links['menu-primary-navigation:http://esri.com/resources/24'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/24',
    'router_path' => '',
    'link_title' => 'ATLAS Ontario Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/resources/20',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/25
  $menu_links['menu-primary-navigation:http://esri.com/resources/25'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/25',
    'router_path' => '',
    'link_title' => 'Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/resources/30',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/26
  $menu_links['menu-primary-navigation:http://esri.com/resources/26'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/26',
    'router_path' => '',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/resources/30',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/3
  $menu_links['menu-primary-navigation:http://esri.com/resources/3'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/3',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/resources/2',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/30
  $menu_links['menu-primary-navigation:http://esri.com/resources/30'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/30',
    'router_path' => '',
    'link_title' => 'Teaching Materials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-43',
    'parent_path' => 'http://esri.com/resources',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/4
  $menu_links['menu-primary-navigation:http://esri.com/resources/4'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/4',
    'router_path' => '',
    'link_title' => 'ArcNorth News Archive',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/resources/2',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/5
  $menu_links['menu-primary-navigation:http://esri.com/resources/5'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/5',
    'router_path' => '',
    'link_title' => 'ArcNorth News Subscription Request Form',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/resources/2',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/6
  $menu_links['menu-primary-navigation:http://esri.com/resources/6'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/6',
    'router_path' => '',
    'link_title' => 'Esri Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/resources/2',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/7
  $menu_links['menu-primary-navigation:http://esri.com/resources/7'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/7',
    'router_path' => '',
    'link_title' => 'eNewsletters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/resources',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/8
  $menu_links['menu-primary-navigation:http://esri.com/resources/8'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/8',
    'router_path' => '',
    'link_title' => 'Maps',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/resources',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/resources/9
  $menu_links['menu-primary-navigation:http://esri.com/resources/9'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/resources/9',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/resources/8',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support
  $menu_links['menu-primary-navigation:http://esri.com/support'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support',
    'router_path' => '',
    'link_title' => 'Support',
    'options' => array(
      'attributes' => array(
        'title' => 'Support Description - Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc imperdiet lobortis hendrerit. Quisque dapibus, mauris a porta hendrerit, turpis augue ultricies neque, nec posuere mi turpis at nisl',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-45',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/1
  $menu_links['menu-primary-navigation:http://esri.com/support/1'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/1',
    'router_path' => '',
    'link_title' => 'Technical Support',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/support',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/10
  $menu_links['menu-primary-navigation:http://esri.com/support/10'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/10',
    'router_path' => '',
    'link_title' => 'Premium Brochure',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '7',
    'parent_path' => 'http://esri.com/support/1',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/11
  $menu_links['menu-primary-navigation:http://esri.com/support/11'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/11',
    'router_path' => '',
    'link_title' => 'Contact Technical Support',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '8',
    'parent_path' => 'http://esri.com/support/1',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/12
  $menu_links['menu-primary-navigation:http://esri.com/support/12'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/12',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/support/3',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/13
  $menu_links['menu-primary-navigation:http://esri.com/support/13'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/13',
    'router_path' => '',
    'link_title' => 'Manage Software',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/support/3',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/14
  $menu_links['menu-primary-navigation:http://esri.com/support/14'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/14',
    'router_path' => '',
    'link_title' => 'Software Updates',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/support/3',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/15
  $menu_links['menu-primary-navigation:http://esri.com/support/15'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/15',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
    'parent_path' => 'http://esri.com/support/14',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/16
  $menu_links['menu-primary-navigation:http://esri.com/support/16'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/16',
    'router_path' => '',
    'link_title' => 'ArcGIS Media and Token Request',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/support/14',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/17
  $menu_links['menu-primary-navigation:http://esri.com/support/17'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/17',
    'router_path' => '',
    'link_title' => 'Product Registration & Licensing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/support/3',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/18
  $menu_links['menu-primary-navigation:http://esri.com/support/18'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/18',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/support/17',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/19
  $menu_links['menu-primary-navigation:http://esri.com/support/19'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/19',
    'router_path' => '',
    'link_title' => 'Transfer a Software License',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/support/17',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/2
  $menu_links['menu-primary-navigation:http://esri.com/support/2'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/2',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/support',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/20
  $menu_links['menu-primary-navigation:http://esri.com/support/20'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/20',
    'router_path' => '',
    'link_title' => 'Contact Customer Care',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/support/3',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/3
  $menu_links['menu-primary-navigation:http://esri.com/support/3'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/3',
    'router_path' => '',
    'link_title' => 'Customer Care',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/support',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/4
  $menu_links['menu-primary-navigation:http://esri.com/support/4'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/4',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
    'parent_path' => 'http://esri.com/support/1',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/5
  $menu_links['menu-primary-navigation:http://esri.com/support/5'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/5',
    'router_path' => '',
    'link_title' => 'FAQs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'http://esri.com/support/1',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/6
  $menu_links['menu-primary-navigation:http://esri.com/support/6'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/6',
    'router_path' => '',
    'link_title' => 'Tutorials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'http://esri.com/support/1',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/7
  $menu_links['menu-primary-navigation:http://esri.com/support/7'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/7',
    'router_path' => '',
    'link_title' => 'Tech Tools',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'http://esri.com/support/1',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/8
  $menu_links['menu-primary-navigation:http://esri.com/support/8'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/8',
    'router_path' => '',
    'link_title' => 'Links',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'http://esri.com/support/1',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/support/9
  $menu_links['menu-primary-navigation:http://esri.com/support/9'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/support/9',
    'router_path' => '',
    'link_title' => 'Support Policies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'http://esri.com/support/1',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training
  $menu_links['menu-primary-navigation:http://esri.com/training'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training',
    'router_path' => '',
    'link_title' => 'Training & Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Events & Training Description - Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc imperdiet lobortis hendrerit. Quisque dapibus, mauris a porta hendrerit, turpis augue ultricies neque, nec posuere mi turpis at nisl',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/1
  $menu_links['menu-primary-navigation:http://esri.com/training/1'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/1',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/training',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/10
  $menu_links['menu-primary-navigation:http://esri.com/training/10'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/10',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
    'parent_path' => 'http://esri.com/training/9',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/11
  $menu_links['menu-primary-navigation:http://esri.com/training/11'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/11',
    'router_path' => '',
    'link_title' => 'Benefits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/training/9',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/12
  $menu_links['menu-primary-navigation:http://esri.com/training/12'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/12',
    'router_path' => '',
    'link_title' => 'Becoming Certified',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/training/9',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/13
  $menu_links['menu-primary-navigation:http://esri.com/training/13'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/13',
    'router_path' => '',
    'link_title' => 'FAQs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/training/9',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/14
  $menu_links['menu-primary-navigation:http://esri.com/training/14'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/14',
    'router_path' => '',
    'link_title' => 'Web Seminars',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => 'http://esri.com/training',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/15
  $menu_links['menu-primary-navigation:http://esri.com/training/15'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/15',
    'router_path' => '',
    'link_title' => 'Events Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => 'http://esri.com/training',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/16
  $menu_links['menu-primary-navigation:http://esri.com/training/16'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/16',
    'router_path' => '',
    'link_title' => 'Esri Canada User Conferences',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-42',
    'parent_path' => 'http://esri.com/training',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/17
  $menu_links['menu-primary-navigation:http://esri.com/training/17'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/17',
    'router_path' => '',
    'link_title' => 'Esri International User Conference',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => 'http://esri.com/training',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/18
  $menu_links['menu-primary-navigation:http://esri.com/training/18'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/18',
    'router_path' => '',
    'link_title' => 'GIS Day',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-40',
    'parent_path' => 'http://esri.com/training',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/19
  $menu_links['menu-primary-navigation:http://esri.com/training/19'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/19',
    'router_path' => '',
    'link_title' => 'Dev Meet Ups',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
    'parent_path' => 'http://esri.com/training',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/2
  $menu_links['menu-primary-navigation:http://esri.com/training/2'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/2',
    'router_path' => '',
    'link_title' => 'Training Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/training',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/20
  $menu_links['menu-primary-navigation:http://esri.com/training/20'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/20',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/training/16',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/21
  $menu_links['menu-primary-navigation:http://esri.com/training/21'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/21',
    'router_path' => '',
    'link_title' => 'Esri Canada 2012 User Conferences',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/training/16',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/22
  $menu_links['menu-primary-navigation:http://esri.com/training/22'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/22',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'http://esri.com/training/21',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/23
  $menu_links['menu-primary-navigation:http://esri.com/training/23'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/23',
    'router_path' => '',
    'link_title' => 'Conference Proceedings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'http://esri.com/training/21',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/24
  $menu_links['menu-primary-navigation:http://esri.com/training/24'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/24',
    'router_path' => '',
    'link_title' => 'Archived Conference Proceedings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/training/16',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/25
  $menu_links['menu-primary-navigation:http://esri.com/training/25'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/25',
    'router_path' => '',
    'link_title' => 'Call for Presentators',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/training/16',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/26
  $menu_links['menu-primary-navigation:http://esri.com/training/26'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/26',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/training/25',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/27
  $menu_links['menu-primary-navigation:http://esri.com/training/27'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/27',
    'router_path' => '',
    'link_title' => 'Speaker Submission Form',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/training/25',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/3
  $menu_links['menu-primary-navigation:http://esri.com/training/3'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/3',
    'router_path' => '',
    'link_title' => 'Training Registration Information',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/training',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/4
  $menu_links['menu-primary-navigation:http://esri.com/training/4'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/4',
    'router_path' => '',
    'link_title' => 'Training Solutions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'http://esri.com/training',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/5
  $menu_links['menu-primary-navigation:http://esri.com/training/5'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/5',
    'router_path' => '',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
    'parent_path' => 'http://esri.com/training/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/6
  $menu_links['menu-primary-navigation:http://esri.com/training/6'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/6',
    'router_path' => '',
    'link_title' => 'Instructor-Led Online Classroom Training',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/training/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/7
  $menu_links['menu-primary-navigation:http://esri.com/training/7'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/7',
    'router_path' => '',
    'link_title' => 'ArcGIS 10.1 Training',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://esri.com/training/4',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/8
  $menu_links['menu-primary-navigation:http://esri.com/training/8'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/8',
    'router_path' => '',
    'link_title' => 'Training Locations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/training',
  );
  // Exported menu link: menu-primary-navigation:http://esri.com/training/9
  $menu_links['menu-primary-navigation:http://esri.com/training/9'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'http://esri.com/training/9',
    'router_path' => '',
    'link_title' => 'Technical Certification',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-45',
    'parent_path' => 'http://esri.com/training',
  );
  // Exported menu link: menu-primary-navigation:node/104
  $menu_links['menu-primary-navigation:node/104'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'node/104',
    'router_path' => 'node/%',
    'link_title' => 'Save-The-Rain',
    'options' => array(
      'node_type' => 'resource_maps_and_apps',
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'resources/maps-and-apps',
  );
  // Exported menu link: menu-primary-navigation:node/93
  $menu_links['menu-primary-navigation:node/93'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'node/93',
    'router_path' => 'node/%',
    'link_title' => 'City of Surrey Streamlines Workflow and Improves Communication',
    'options' => array(
      'node_type' => 'resource_collateral_resources',
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'resources/collateral-resources',
  );
  // Exported menu link: menu-primary-navigation:node/95
  $menu_links['menu-primary-navigation:node/95'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'node/95',
    'router_path' => 'node/%',
    'link_title' => 'District of West Kelowna',
    'options' => array(
      'node_type' => 'resource_maps_and_apps',
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'resources/maps-and-apps',
  );
  // Exported menu link: menu-primary-navigation:resources/collateral-resources
  $menu_links['menu-primary-navigation:resources/collateral-resources'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'resources/collateral-resources',
    'router_path' => 'resources/collateral-resources',
    'link_title' => 'Resource Database',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'http://esri.com/resources',
  );
  // Exported menu link: menu-primary-navigation:resources/maps-and-apps
  $menu_links['menu-primary-navigation:resources/maps-and-apps'] = array(
    'menu_name' => 'menu-primary-navigation',
    'link_path' => 'resources/maps-and-apps',
    'router_path' => 'resources/maps-and-apps',
    'link_title' => 'Maps List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'http://esri.com/resources/8',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ATLAS Ontario Program');
  t('Accessibility');
  t('Administrators');
  t('Adminitrators');
  t('ArcFM Suite');
  t('ArcGIS');
  t('ArcGIS 10.1 Training');
  t('ArcGIS API for Flex');
  t('ArcGIS API for Javascript');
  t('ArcGIS API for Microsoft Silverlight');
  t('ArcGIS Explorer Desktop');
  t('ArcGIS Explorer Online');
  t('ArcGIS French Supplement');
  t('ArcGIS French Supplement Request Form');
  t('ArcGIS Media and Token Request');
  t('ArcGIS Online');
  t('ArcGIS Online Free Personal Account');
  t('ArcGIS Runtime');
  t('ArcGIS for AutoCAD');
  t('ArcGIS for Desktop');
  t('ArcGIS for Desktop Extensions');
  t('ArcGIS for Home Use Program');
  t('ArcGIS for Home Use Program Form');
  t('ArcGIS for Mobile');
  t('ArcGIS for Server');
  t('ArcGIS for Server Extensions');
  t('ArcGIS for Server in the Cloud');
  t('ArcGIS for SharePoint');
  t('ArcGIS for Smartphones & Tablets ');
  t('ArcGIS for Smartphones and Tablets');
  t('ArcGIS for Transportation Analytics');
  t('ArcGIS for Windows Mobile');
  t('ArcNorth News Archive');
  t('ArcNorth News Subscription Request Form');
  t('ArcPad');
  t('ArcReader');
  t('Archived Conference Proceedings');
  t('Asset Valuation Toolkit');
  t('Associate GIS Program');
  t('Award News Releases');
  t('Awards & Recognition');
  t('Basemaps');
  t('Becoming Certified');
  t('Benefits');
  t('Beneifits');
  t('Books');
  t('Business');
  t('Business Analyst Online (BAO) API');
  t('Call for Presentators');
  t('Canadian Commercial Data Providers');
  t('Canadian Data');
  t('Careers');
  t('Careers Listings');
  t('Careers in GIS');
  t('City of Surrey Streamlines Workflow and Improves Communication');
  t('Cityworks Suite');
  t('Community Maps');
  t('Community Outreach');
  t('Company');
  t('Comparison Table');
  t('Complete Partner Listing');
  t('Components');
  t('Conference Proceedings');
  t('Contact');
  t('Contact Customer Care');
  t('Contact Technical Support');
  t('Contact Us');
  t('Corporate Responsibility');
  t('CrimeAnalyst');
  t('Customer Care');
  t('Data');
  t('Data Matrix');
  t('Data Models');
  t('Data Sources');
  t('Defense');
  t('Demographic, Consumer and Business Data');
  t('Demographics');
  t('Dev Meet Ups');
  t('Developer Tools');
  t('Developers');
  t('DigitalGlobe');
  t('District of West Kelowna');
  t('Downloads');
  t('Education');
  t('Education Resources/Lesson Planner');
  t('Educators');
  t('Employment Equity');
  t('Enterprise Advantage Program');
  t('Environmental Stewardship');
  t('Esri Books');
  t('Esri Business Analyst Desktop (Canadian Edition)');
  t('Esri Business Analyst Product Suite');
  t('Esri Canada 2012 User Conferences');
  t('Esri Canada RSS News Feed');
  t('Esri Canada User Conferences');
  t('Esri CityEngine');
  t('Esri Community Analyst');
  t('Esri Developer Network');
  t('Esri Development Centre (EDC)');
  t('Esri International User Conference');
  t('Esri Maps for IBM Cognos');
  t('Esri Maps for Office');
  t('Esri Nonprofit Organization Program');
  t('Esri Partner Network');
  t('Events Search');
  t('Explore GIS');
  t('FAQ');
  t('FAQs');
  t('Facilities');
  t('Find a Partner');
  t('For Developers');
  t('For Organizations');
  t('For Personal Use');
  t('Forestry');
  t('Free Data');
  t('Free Mapping Software');
  t('GIS & You');
  t('GIS Day');
  t('GIS for Canada');
  t('GIS for Libraries');
  t('GIS for Museums, Botanic Gardens and Zoos');
  t('GIS in the Classroom');
  t('GeoMentor Program');
  t('Geocortex Essentials');
  t('Geocortex Optimizer');
  t('Geoportal Server');
  t('Get Connected');
  t('Goverment');
  t('GreenRoof');
  t('Health Care');
  t('Higher Education');
  t('Home');
  t('Imagery Data');
  t('Implementation Service');
  t('In The Commnunity');
  t('In the News');
  t('Instructor-Led Online Classroom Training');
  t('International Services');
  t('Interoperability & Standards');
  t('K-12 Schools');
  t('Key Features');
  t('Leadership');
  t('Leadership Bios');
  t('Learning About GIS');
  t('Legal');
  t('Lesson Planner');
  t('Libraries and Museums');
  t('License Levels');
  t('Links');
  t('Literature');
  t('Local Dataset');
  t('Location Analytics');
  t('Manage Software');
  t('Mapping and Charting Solutions');
  t('Maps');
  t('Maps List');
  t('Media Room');
  t('Methodology');
  t('Mining');
  t('NTv2 Request');
  t('Natural Resources');
  t('News');
  t('News Releases');
  t('Office Locator');
  t('Oil & Gas');
  t('Online Training');
  t('Overview');
  t('PSAB / PS3150 Compliance');
  t('Partner Benefits');
  t('Partners');
  t('Planning');
  t('Policy and Research');
  t('Portable for ArcGIS');
  t('Post-secondary GIS Programs');
  t('Premium Brochure');
  t('Privacy');
  t('Product Registration & Licensing');
  t('Products & Services');
  t('Products A-Z');
  t('Professional Development');
  t('Program Tiers');
  t('Project Services');
  t('Provincial Licenses');
  t('Public Safety');
  t('Public Works');
  t('Publications');
  t('PurVIEW');
  t('Request Application for Membership');
  t('Research');
  t('Resource Database');
  t('Resources');
  t('Safety');
  t('Save-The-Rain');
  t('Scholarship Program');
  t('Scholarship Programs');
  t('Services');
  t('Site Map');
  t('Skills Canada');
  t('Small Local Government Enterprise License Agreement Program');
  t('Small Utilities Enterprise License Agreement');
  t('Smart Grid');
  t('Software Updates');
  t('Software and Licenses');
  t('Solutions & Services');
  t('Speaker Submission Form');
  t('Specialized Applications');
  t('Steps to Apply');
  t('Strictly Data');
  t('Student Licenses');
  t('Students');
  t('Submit Your Application');
  t('Subscription Level');
  t('Support');
  t('Support Policies');
  t('System Requirements');
  t('Teacher Workshops');
  t('Teaching & Learning');
  t('Teaching Materials');
  t('Tech Tools');
  t('Technical Certification');
  t('Technical Support');
  t('Telecommunications');
  t('Training & Events');
  t('Training Locations');
  t('Training Registration Information');
  t('Training Search');
  t('Training Solutions');
  t('Transfer a Software License');
  t('Transportation');
  t('Tutorials');
  t('Utilities');
  t('Videos');
  t('VoyagerGIS');
  t('Water/Wastewater');
  t('Web APIs');
  t('Web Seminars');
  t('What\'s In It For You');
  t('What\'s New in 10.1');
  t('Who Qualifies');
  t('eNewsletters');


  return $menu_links;
}
