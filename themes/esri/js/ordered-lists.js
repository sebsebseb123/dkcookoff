(function ($) {

  // Ordered list styles.
  Drupal.behaviors.orderedLists = {
    attach: function () {
      if ($('.node-inner ol').length > 0) {
        // For each ordered list.
        $('.node-inner ol').each(function() {
          // Add our class.
          $('.node-inner ol').addClass('ordered-list-processed');
        });

        // For each li item.
        $('.node-inner ol li').each(function() {
          // Get the existing content.
          var content = $(this).html();
          // Wrap it around a <p> tag.
          $(this).html('<p class="ordered-list-item">' + content + '</p>');
        });
      }
    }
  }

})(jQuery);
