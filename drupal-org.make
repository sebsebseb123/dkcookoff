api = 2
core = 7.x

; ; TEMPLATE
; projects[][subdir] = contrib
; projects[][version] =
; ; This is the issue title: http://drupal.org/node/xxxxxxx#comment-xxxxxxx
; projects[][patch][] =

; MODULES
; Ascending Alphabetical order from the module name

projects[accordion_blocks][subdir] = contrib
projects[accordion_blocks][version] = 3.x-dev

projects[acquia_connector][subdir] = contrib
projects[acquia_connector][version] = 2.7

projects[attachment_links][subdir] = contrib
projects[attachment_links][version] = 1.0

projects[apachesolr][subdir] = contrib
projects[apachesolr][version] = 1.0-rc3

projects[apachesolr_attachments][subdir] = contrib
projects[apachesolr_attachments][version] = 1.2

projects[auto_nodetitle][subdir] = contrib
projects[auto_nodetitle][version] = 1.0

projects[backup_migrate][subdir] = contrib
projects[backup_migrate][version] = 2.4

projects[better_exposed_filters][subdir] = contrib
projects[better_exposed_filters][version] = 3.0-beta1

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.2

projects[date][subdir] = contrib
projects[date][version] = 2.x-dev
; Resolve issue with remember last selection for exposed date filters: http://drupal.org/node/1732650#comment-6351152
projects[date][patch][] = "http://drupal.org/files/date-remember_the_last_selection-1732650-2.patch"

projects[elfinder][subdir] = contrib
projects[elfinder][version] = 2.x-dev

projects[entity][subdir] = contrib
projects[entity][version] = 1.0-rc3

projects[entity_translation][subdir] = contrib
projects[entity_translation][version] = 1.0-alpha2

projects[entityreference][subdir] = contrib
projects[entityreference][version] = 1.0-rc3

projects[facetapi][subdir] = contrib
projects[facetapi][version] = 1.1

projects[features][subdir] = contrib
projects[features][version] = 1.0-rc3
; Helps resolve drush install issues with caching http://drupal.org/node/1063204#comment-6217690
projects[features][patch][] = "http://drupal.org/files/features-static-caches-1063204-27.patch"

projects[features_override][subdir] = contrib
projects[features_override][version] = 2.0-beta1

projects[feeds][subdir] = contrib
projects[feeds][version] = 2.0-alpha5

projects[feeds_tamper][subdir] = contrib
projects[feeds_tamper][version] = 1.0-beta3

projects[feeds_xls][subdir] = contrib
projects[feeds_xls][version] = 0.0

projects[field_collection][subdir] = contrib
projects[field_collection][version] = 1.0-beta4

projects[field_group][subdir] = contrib
projects[field_group][version] = 1.1

projects[google_analytics][subdir] = contrib
projects[google_analytics][version] = 1.2

projects[i18n][subdir] = contrib
projects[i18n][version] = 1.x-dev

projects[imagefield_focus][subdir] = contrib
projects[imagefield_focus][version] = 1.x-dev
projects[imagefield_focus][type] = module
projects[imagefield_focus][download][type] = git
projects[imagefield_focus][download][url] = http://git.drupal.org/project/imagefield_focus.git
projects[imagefield_focus][download][revision] = 3db50767cd819b30d5dc

projects[job_scheduler][subdir] = contrib
projects[job_scheduler][version] = 2.x-dev

projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = 2.x-dev
; Backend and front end separation
projects[jquery_update][patch][] = "http://drupal.org/files/jquery_update_visibility_pages-1524944-16.patch"

projects[linkchecker][subdir] = contrib
projects[linkchecker][version] = 1.x-dev

projects[link][subdir] = contrib
projects[link][version] = 1.0

projects[media][subdir] = contrib
projects[media][version] = 1.2

projects[media_browser_plus][subdir] = contrib
projects[media_browser_plus][version] = 1.0-beta3

projects[menu_block][subdir] = contrib
projects[menu_block][version] = 2.x-dev
; Active menu trail not working
; projects[menu_block][patch][] = "https://drupal.org/files/issues/allow-all-active-menus-1162956-1.patch"

projects[multiblock][subdir] = contrib
projects[multiblock][version] = 1.x-dev

projects[module_filter][subdir] = contrib
projects[module_filter][version] = 1.7

projects[node_export][subdir] = contrib
projects[node_export][version] = 3.0

projects[page_title][subdir] = contrib
projects[page_title][version] = 2.7

projects[panels][subdir] = contrib
projects[panels][version] = 3.3

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2

projects[phone][subdir] = contrib
projects[phone][version] = 1.x-dev

projects[redirect][subdir] = contrib
projects[redirect][version] = 1.0-beta4

projects[references][subdir] = contrib
projects[references][version] = 2.0

projects[scheduler][subdir] = contrib
projects[scheduler][version] = 1.0

projects[search_config][subdir] = contrib
projects[search_config][version] = 1.0

projects[sharethis][subdir] = contrib
projects[sharethis][version] = 2.4

projects[smartcrop][subdir] = contrib
projects[smartcrop][version] = 1.0-beta2

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[title][subdir] = contrib
projects[title][version] = 1.x-dev

projects[token][subdir] = contrib
projects[token][version] = 1.3

projects[uuid][subdir] = contrib
projects[uuid][version] = 1.x-dev

projects[variable][subdir] = contrib
projects[variable][version] = 2.1

projects[views][subdir] = contrib
projects[views][version] = 3.3

projects[views_php][subdir] = contrib
projects[views_php][version] = 1.x-dev

projects[webform][subdir] = contrib
projects[webform][version] = 3.18

projects[webform_phone][subdir] = contrib
projects[webform_phone][version] = 1.6

projects[workbench][subdir] = contrib
projects[workbench][version] = 1.1

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.1
; Allow export of profiles in features: http://drupal.org/node/624018#comment-5278644
projects[wysiwyg][patch][] = "http://drupal.org/files/0001-feature.inc-from-624018-211-drush_make-7.x-2.1.patch"

projects[wysiwyg_template][subdir] = contrib
projects[wysiwyg_template][version] = 2.7

; ADMINISTRATIVE TOOLS

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc3

projects[devel][subdir] = contrib
projects[devel][version] = 1.3

; THEMES

projects[tao][type] = theme
projects[tao][subdir] = contrib
projects[tao][version] = 3.0-beta4

projects[rubik][type] = theme
projects[rubik][subdir] = contrib
projects[rubik][version] = 4.0-beta8

projects[adaptivetheme][type] = theme
projects[adaptivetheme][subdir] = contrib
projects[adaptivetheme][version] = 3.0-rc2

; LIBRARIES

libraries[tinymce][download][type] = "file"
libraries[tinymce][download][url] = "http://github.com/downloads/tinymce/tinymce/tinymce_3.5.6.zip"
libraries[tinymce][directory_name] = "tinymce"

libraries[elfinder][download][type] = "file"
libraries[elfinder][download][url] = "http://downloads.sourceforge.net/project/elfinder/elfinder-2.0-rc1.tar.gz?r=&ts=1347403683&use_mirror=tenet"
libraries[elfinder][directory_name] = "elfinder"

libraries[jquery.cookie][download][type] = "file"
libraries[jquery.cookie][download][url] = "https://raw.github.com/carhartl/jquery-cookie/master/jquery.cookie.js"
libraries[jquery.cookie][directory_name] = "jquery.cookie"
