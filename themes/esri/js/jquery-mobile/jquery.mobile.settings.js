(function($){
  $(document).bind("mobileinit", function(){
    $.extend(  $.mobile , {
      ajaxEnabled: false,
      defaultPageTransition: 'none',
      hashListeningEnabled: false,
      linkBindingEnabled: false,
      loadingMessage: false
    });
  });

  //Fix Select Placeholders
  /*
  Drupal.behaviors.selectPlaceholder = {
    attach: function () {
      $.each($('select option'), function() {
        if ($(this).attr('value') == '0') {
          $(this).removeAttr('value');
        }
      });
    }
  }
  */
})(jQuery);