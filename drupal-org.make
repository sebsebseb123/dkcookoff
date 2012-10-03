api = 2
core = 7.x

; ; TEMPLATE
; projects[][subdir] = contrib
; projects[][version] =
; ; This is the issue title: http://drupal.org/node/xxxxxxx#comment-xxxxxxx
; projects[][patch][] =

; MODULES
; Ascending Alphabetical order from the module name

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.2

projects[entity][subdir] = contrib
projects[entity][version] = 1.0-rc3

projects[features][subdir] = contrib
projects[features][version] = 1.0-rc3
; Helps resolve drush install issues with caching http://drupal.org/node/1063204#comment-6217690
projects[features][patch][] = "http://drupal.org/files/features-static-caches-1063204-27.patch"

projects[link][subdir] = contrib
projects[link][version] = 1.0

projects[media][subdir] = contrib
projects[media][version] = 1.2

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[token][subdir] = contrib
projects[token][version] = 1.3

; ADMINISTRATIVE TOOLS

;projects[admin_menu][subdir] = contrib
;projects[admin_menu][version] = 3.0-rc3

; THEMES

;projects[rubik][type] = theme
;projects[rubik][subdir] = contrib
;projects[rubik][version] = 4.0-beta8

; LIBRARIES

;libraries[jquery.cookie][download][type] = "file"
;libraries[jquery.cookie][download][url] = "https://raw.github.com/carhartl/jquery-cookie/master/jquery.cookie.js"
;libraries[jquery.cookie][directory_name] = "jquery.cookie"
