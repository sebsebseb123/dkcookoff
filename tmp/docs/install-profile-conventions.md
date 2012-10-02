This file will attempt to aggregate the knowledge we've gained about
best-practices for writing \*.install files for installation profiles.

- Try to use only one `hook_update_N()` per feature branch. We should
  only need one per merge into `develop` branch.

- Aim to use only only one call of `module_enable()` per update hook.

- If you can help it, turn off dependency resolution when using
  [`module_enable()`][module_enable]. As you can see from the linked API
docs, the second argument (`$enable_dependencies`) defaults to `TRUE`:

    > If TRUE, dependencies will automatically be added and enabled in
    > the correct order. **This incurs a significant performance cost**,
    > so use FALSE if you know $module_list is already complete and in
    > the correct order.

- Avoiding flushing the cache with
  [`drupal_flush_all_caches()`][drupal_flush_all_caches] if it can be
avoided. It's suggested that you dig into the linked Drupal API page,
and see what functions this container function calls. It might be
apparent that a less intensive function will do what's required. (Let's
make a point to actively share knowledge on what tends to work :)

- The Commerce Kickstart install profile has some [very useful functions
  that we should investigate][install_callbacks].

Resources
---------

- http://www.mc-kenna.com/tutorial/2009/06/building-drupal-installation-profiles
- http://wiredcraft.com/blog/drush-make-and-install-profiles-drupal-7/
- http://walkah.net/blog/every-drupal-site-install-profile/
- http://treehouseagency.com/blog/roger-lopez/2012/01/20/loosely-coupled-module-integration
- http://www.mediacurrent.com/blog/simplifying-use-specific-drupal-sites-installation-profiles-vs-distributions-vs-features

<!-- Links -->
   [drupal_flush_all_caches]: http://api.drupal.org/api/drupal/includes!common.inc/function/drupal_flush_all_caches/7
   [install_callbacks]:       http://drupalcode.org/project/commerce_kickstart.git/blob/7.x-2.x:/commerce_kickstart.install_callbacks.inc
   [module_enable]:           http://api.drupal.org/api/drupal/includes!module.inc/function/module_enable/7
