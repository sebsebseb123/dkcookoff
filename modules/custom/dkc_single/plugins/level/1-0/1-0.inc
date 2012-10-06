<?php

/**
 * @file
 * Level 1 - 0.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'type' => 'level',
  'title' => t('Intro'),
  'description' => t('Get to know the system, learn how the game is played.'),
  'level' => 1,
  'sublevel' => 1,
  'start_path' => 'start/single/1-0/intro',
  'page_callback' => 'dkc_level_1_0_page_callback',
);

/**
 * Page callback, to handle the pages for this level.
 */
function dkc_level_1_0_page_callback($args) {
$var = 1;
  $page = array_shift($args);

  // Once you find the page, the level could handle it as it sees fit.
  // For example, you could do:
  //   $function = 'dkc_level_1_0_' . $page;
  //   return $function($args);
  //
  // In this case, we'll just do an "if" to make sure we're in the right place.
  if ($page != 'intro') {
    return MENU_NOT_FOUND;
  }

  $output = array();
  $output['intro'] = array(
    '#type' => 'item',
    '#title' => t('Intro - Drupal 101'),
    '#description' => t('What is Drupal? Wikipedia says it\'s "a free and open-source
      content management system (CMS) and content management framework (CMF)
      written in PHP and distributed under the GNU General Public License." Great.
      But, what does that really mean?
      <br />
      <br />
      Well, it means, that you\'re able to "easily" build amazing websites,
      which are feature rich, fully secure, and completely free.
      <br />
      <br />
      Note that "easily" is in quotation marks... this is because drupal has
      a bit of a learning curve. Urban dictionary says drupal is: "Designed
      to be totally useless right after installation, unless the user modifies
      it into something (somewhat) usable." This is 100% true.
      That\'s where we come in.
      <br />
      <br />
      The good thing, and bad thing about drupal is that it is HIGHLY
      customizable. There are a TON of different options which let you push
      and pull drupal to do whatever you like. The question becomes, "How can
      I make drupal do XYZ?" And almost always, there are more than several
      different answers.
      <br />
      <br />
      The learning curve may seem steep and intimidating, but don\'t be scared,
      we\'ll walk you through it.
      '),
  );
  $output['the_game'] = array(
    '#type' => 'item',
    '#title' => t('The game.'),
    '#description' => t('So, this Drupal Kitchen Cookoff is a game. Great,
      but how do you play?
      <br />
      <br />
      Well, it\'s simple really. There are two modes, single player and multi
      player. In single player mode, you just follow the instructions on the
      screen. It\'s basically a tutorial... helping you get your feet wet in
      different parts of drupal. You\'ll be introduced to some basic
      administration pages, some core concepts, and we\'ll try to give you a
      solid footing on how to get around in drupal. Fun! ... not overly.
      <br />
      <br />
      The real fun comes in the multi player game. During the
      game, you\'ll be racing against your opponent to get 10 points. First to
      10, wins. How do you get points? Well, you and your opponent have a list
      of 20 random drupal tasks to pick from. A task could be, "Create a link
      in the main menu that says \'About us\'." Or, "Change the Site Name to
      be \'Bananza!\'." Or, "Change the Site Timezone to Mountain time."
      <br />
      <br />
      As you play, you\'ll be able to see your opponent\'s progress, and she
      will be able to see yours. After the game, you can both chat about how
      you both did, share tips about how to get better, faster, and generally
      do better in the game.
      <br />
      <br />
      One of the more exciting aspects is that you\'ll need to create an
      account using your drupal.org
      account, so we can keep track of your score and you can show it off to
      all your friends. So keep in mind, that even though you\'re only playing
      for "points"... the rewards can be worth so much more! As you play more,
      and continue to advance, you\'ll learn more and more about how to do
      "complex" tasks quickly. That knowledge is worth a lot in the web
      industry.A player
      with a high score is now able to show off their points as a solid metric
      which represents their skill and ability in drupal. Which is to say, a
      player with a high score is more easily able to get a job, contract,
      respect, klout, etc...
      <br />
      <br />
      So, get into it, get excited, and have fun!
      '),
  );
  $output['how_to'] = array(
    '#type' => 'item',
    '#title' => t('How to play the game.'),
    '#description' => t('A few notes before you dive in.
      <br />
      <br />
      You\'ll be brought to different admin sections on the site, and you\'ll
      be exposed to the scary drupal backend. We\'ll try to make it clear
      exactly what you need to do on each page. See the example form below to
      get an idea of this.
      '),
  );
  $output['example_form'] = array(
    '#type' => 'fieldset',
    '#title' => t('Form Group'),
    '#description' => t('A lot of forms are broken up into groups. If there\'s
      a field group you need to pay attention to, it will be clearly marked with a star.
      '),
  ) + dkc_highlight_fieldset();
    $output['example_form']['text_field'] = array(
      '#type' => 'textfield',
      '#title' => t('This is a field you need to pay attention to... notice
      the red arrow pointing to it.'),
    ) + dkc_p_arrow();
    $output['example_form']['dis_text_field'] = array(
      '#type' => 'textfield',
      '#title' => t('This is a field you don\'t need to pay attention to.
      Notice no arrow, and how it\'s slightly grey-er... as if it\'s been
      forgotten... that\'s because it has.'),
    ) + dkc_unused();
  $output['example_unused_form'] = array(
    '#type' => 'fieldset',
    '#title' => t('Unused Form Fields'),
    '#description' => t('A lot of forms are broken up into groups. If there\'s
      a field you need to pay attention to, it will be clearly marked with an arrow.
      '),
  ) + dkc_unused();
    $output['example_unused_form']['oth_text_field'] = array(
      '#type' => 'textfield',
      '#title' => t('This is a text field.'),
    );
  $output['example_req'] = array(
    '#type' => 'fieldset',
    '#title' => t('Required Form Fields'),
    '#description' => t('A lot of forms are broken up into groups. If there\'s
      a field you need to pay attention to, it will be clearly marked with an arrow.
      '),
  );
    $output['example_req']['req'] = array(
      '#type' => 'textfield',
      '#title' => t('This is a required text field.'),
      '#description' => t('Notice the red astrisk... this simply means that
        the field cannot be empty. It\'s a drupal thing.'),
      '#required' => TRUE,
    );
    $output['example_req']['req_dis'] = array(
      '#type' => 'textfield',
      '#title' => t('This is an unused required text field.'),
      '#description' => t('The dot is there because drupal added it. It
        has nothing to do with the game. Since the field is still greyed out,
        you still don\'t need to worry about it.'),
      '#required' => TRUE,
    ) + dkc_unused();
  $output['done'] = array(
    '#type' => 'item',
    '#title' => t('Ready to try the first level?'),
    '#description' => l(t('Click here to go back.'), 'start/single'),
  );

  return $output;
}
