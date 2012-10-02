<!DOCTYPE html>
<html lang="<?php print $language->language; ?>">

<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <meta name="viewport" content="width=320, user-scalable=no,initial-scale=1, maximum-scale=1, minimum-scale=1"/>
  <?php print $styles; ?>
  <!--[if lt IE 9]>
    <script type="text/javascript" src="https://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="skip">
    <a href="#main-menu"><?php print t('Jump to Navigation'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
