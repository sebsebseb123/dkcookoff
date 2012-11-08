(function ($) {

/**
 * Core behavior for Administration menu.
 *
 * Test whether there is an administration menu is in the output and execute all
 * registered behaviors.
 */
Drupal.behaviors.adminMenu = {
  attach: function (context, settings) {
    if (settings.dkcSingle.timeStarted) {
      //alert(settings.dkcSingle.timeStarted);
      var now = Math.round(new Date().getTime() / 1000);
      var diff = now - settings.dkcSingle.timeStarted;
      alert (diff);
    }
  }
}

})(jQuery);
