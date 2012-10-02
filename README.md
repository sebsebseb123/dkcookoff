Esri Canada Install Profile
===========================

This is the D7 install profile for the Esri Canada project.

Layout
------

We will be attempting to follow the drush make guidelines laid out for
packaging distributions on drupal.org:

http://drupal.org/node/1476014

The rationale being that when we layout our projects according to these
guidelines, we don't need to document as much, and we will also know how
to package our own distribution for drupal.org in the future.

Here's the additional suggested folder structure for the install profile:

    +-modules/
    | +-contrib/  (gitignored - all contrib modules should go here via makefile)
    | +-custom/   (custom modules for the site)
    | +-features/ (all feature modules)
    +-themes/
    | +-contrib/  (gitignored - any contrib themes should go here via makefile)
    | +-custom/   (custom theme for the site)
    +-libraries/  (gitignored - generated via makefile)  
    +-tmp/        (for things that don't fit in standard install profile structure)
    | +-docs/     (project-specific docs)
    | +-scripts/  (any scripts related to project)
    | +-snippets/ (settings.php snippets)

*The `tmp/` directory is intended to be removed before pushing to Acquia.*

* If you'd like any code to be appended to `settings.php`, simply add a
  snippet as `tmp/snippets/mysnippetname.settings.php`. These snippets
will be appended in alphabetical order during the build script.

To Build
--------

To build a fresh install (full Drupal core + profile) for development,
run the following command:

    cd path/to/repo
    git submodule update --init --recursive
    export PATH=${PATH}:/fullpath/to/profile/tmp/scripts/rerun
    export RERUN_MODULES=/fullpath/to/profile/tmp/scripts/rerun-modules
    rerun 2ndlevel:build --project esricanada --build-file build-esricanada.make --destination path/destination/to/docroot

This will build the site and the repository will be located in
`path/to/destination/docroot/profiles/PROJECTNAME/`

* Please note that this builds the profile based only on pushed changes,
  not local changes that have yet to be pushed.

### To Deploy to Acquia

Follow the instructions at the top of the `deploy.sh` script. As
explained in its README header, you'll need to run the script within a
scratch space directory with the appropriate directory structure.

    export PATH=${PATH}:/fullpath/to/profile/tmp/scripts/rerun
    export RERUN_MODULES=/fullpath/to/profile/tmp/scripts/rerun-modules
    WORKSPACE=path/to/scratchspace rerun 2ndlevel:deploy \
      --project esricanada \
      --repo esricanada@svn-1745.prod.hosting.acquia.com:esricanada.git \
      --acapi-user d9b69484-7cf1-11e1-9eb5-12313928d5b8 \
      --apapi-pass Pau6uy8d9J3YBqxk3h7cWUqZYehOwRan1r/MafvsXGBU9FKNB1LUGcf9Tub0PHf3TGUPH74W1NYw


Development / Updates
---------------------

All custom themes, modules and features should be contained directly in
this repository. Standard `git pull` updates will bring the working copy
up to date. If there are changes to the make file, you can run
`rebuild.sh` from the profile repository to update the contrib
modules/themes/libraries. Please note that `rebuild.sh` will not append
new `settings.php` snippets, so you must be aware of changes and
manually edit `settings.php` accordingly.

Development Best-Pratice
------------------------

* If there are certain files that are easy to accidentally commit to
  Git, please consider updating the `.gitignore` to help others avoid
common mistakes. You'll notice that common compression formats like
`*.tar.gz` are already excluded.
* Please ensure that your `git config` settings are up-to-date so that
  your GitHub commits will be appropriately linked to your account in
the web UI. [[Reference][github-git-setup]]

<!-- Links -->
   [github-git-setup]: https://help.github.com/articles/set-up-git
   
Drupal Profile Install
----------------------

drush -y site-install esricanada --db-url=mysql://root:testing@localhost/esri --site-name=ESRI Canada --account-name=admin --account-pass=[password]

