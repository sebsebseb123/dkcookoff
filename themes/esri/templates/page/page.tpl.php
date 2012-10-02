<div id="page" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <!-- ______________________ HEADER _______________________ -->

  <header role="navigation">
    <div class="header-inner clearfix">
      <div class="color-strip clearfix">
        <div class="strip-first"></div>
        <div class="strip-second"></div>
        <div class="strip-third"></div>
        <div class="strip-fourth"></div>
      </div>

    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>, <?php print t('Back to Homepage') ?>"/>
      </a>
    <?php endif; ?>

    <?php if ($page['header']): ?>
      <div id="header-region">
        <?php print render($page['header']); ?>
      </div>
    <?php endif; ?>

    </div> <!-- /header-inner -->
  </header> <!-- /header -->

  <?php if ($page['navigation']): ?>
  <nav role="navigation">
    <div class="nav-inner clearfix">
      <?php print render($page['navigation']); ?>
    </div>
  </nav>
  <?php endif; ?>

  <!-- ______________________ MAIN _______________________ -->

  <div id="main" class="clearfix">

    <div class="title-wrap">
      <div class="title-inner">
          <span class="title"><?php print $sectionTitle ?></span>
      </div>
    </div>

    <div class="main-inner">

      <div class="content-wrap clearfix">
        <div id="content">
          <div id="content-inner" class="inner column center">
			<?php if ($page['sharethis']): ?>
			  <div id="sharethis">
				<?php print render($page['sharethis']) ?>
			  </div>
			<?php endif;?>
            <?php if ($breadcrumb || $title|| $messages || $tabs || $action_links): ?>
              <div id="content-header">

                <?php print $breadcrumb; ?>

                <?php if ($page['highlight']): ?>
                  <div id="highlight"><?php print render($page['highlight']) ?></div>
                <?php endif; ?>

                <?php if (!empty($page['rsp_language'])): ?>
                  <div class="rsp-language"><?php print render($page['rsp_language']) ?></div>
                <?php endif; ?>

                <?php if ($title): ?>
                  <h1 class="title"><?php print $title; ?></h1>
                <?php endif; ?>

                <?php if ($subtitle): ?>
                  <h3 class="subtitle"><?php print $subtitle; ?></h3>
                <?php endif; ?>

                <?php print render($title_suffix); ?>
                <?php print $messages; ?>
                <?php print render($page['help']); ?>

                <?php if ($tabs): ?>
                  <div class="tabs"><?php print render($tabs); ?></div>
                <?php endif; ?>

                <?php if ($action_links): ?>
                  <ul class="action-links"><?php print render($action_links); ?></ul>
                <?php endif; ?>

                <?php if (!empty($page['page_message'])): ?>
                  <div class="page-message">
                    <div class="color-strip clearfix">
                      <div class="strip-first"></div>
                      <div class="strip-second"></div>
                      <div class="strip-third"></div>
                      <div class="strip-fourth"></div>
                    </div>
                    <div class="page-message-inner">
                      <?php print render($page['page_message']) ?>
                    </div>
                  </div>
                <?php endif; ?>

              </div> <!-- /#content-header -->
            <?php endif; ?>

            <div id="content-area">
              <?php print render($page['content']) ?>
            </div>

            <?php print $feed_icons; ?>

          </div>
        </div> <!-- /content-inner /content -->

        <?php if ($page['sidebar_first']): ?>
          <div id="sidebar-first" class="column sidebar first">
            <div id="sidebar-first-inner" class="inner">
              <?php print render($page['sidebar_first']); ?>
            </div>
          </div>
        <?php endif; ?> <!-- /sidebar-first -->

        <?php if ($page['sidebar_second']): ?>
          <div id="sidebar-second" class="column sidebar second">
            <div id="sidebar-second-inner" class="inner">
              <?php print render($page['sidebar_second']); ?>
            </div>
          </div>
        <?php endif; ?> <!-- /sidebar-second -->
      </div><!-- /content-wrap -->

      <div class="main-bg-top"><!-- Background Element --></div>
      <div class="main-bg-bottom"><!-- Background Element --></div>
    </div><!-- /main-inner -->
  </div> <!-- /main -->

  <!-- ______________________ FOOTER _______________________ -->

  <?php if ($page['footer_feature']): ?>
    <div id="footer-feature" role="navigation">
      <div class="color-strip clearfix">
        <div class="strip-first"></div>
        <div class="strip-second"></div>
        <div class="strip-third"></div>
        <div class="strip-fourth"></div>
      </div>

      <div class="footer-feature-inner">
        <?php print render($page['footer_feature']); ?>
      </div>
    </div> <!-- /footer-feature -->
  <?php endif; ?>

  <?php if ($page['footer_top'] || $page['footer_bottom']): ?>
    <footer role="navigation">
      <div class="footer-inner">

        <div class="footer-top">

          <?php if ($page['rsp_search']) : ?>
          <div class="rsp-search">
            <?php print render($page['rsp_search']); ?>
          </div>
          <?php endif; ?>

          <?php if ($page['rsp_navigation']) : ?>
          <div class="rsp-navigation">
            <?php print render($page['rsp_navigation']); ?>
          </div>
          <?php endif; ?>

          <div class="footer-social-block clearfix">
            <?php print $footer_social; ?>
          </div>

          <?php print render($page['footer_top']); ?>
          <div class="cl"></div>

          <div class="color-strip color-strip-a clearfix">
            <div class="strip-first"></div>
            <div class="strip-second"></div>
            <div class="strip-third"></div>
            <div class="strip-fourth"></div>
          </div>
        </div> <!-- /footer-top -->

        <?php if ($page['footer_bottom']) : ?>
        <div class="footer-bottom clearfix">
          <?php print render($page['footer_bottom']); ?>
        </div>
        <?php endif; ?>

        <div class="color-strip color-strip-b">
          <div class="strip-first"></div>
          <div class="strip-second"></div>
          <div class="strip-third"></div>
          <div class="strip-fourth"></div>
        </div>

        <div class="footer-ie7-fix">&nbsp;</div>

      </div>
    </footer> <!-- /footer -->
  <?php endif; ?>

</div> <!-- /page -->
