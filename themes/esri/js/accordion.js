(function ($) {

  // Accordions.
  Drupal.behaviors.accordion = {
    attach: function () {
      // Bind click event.
      $('.accordion-wrapper .accordion-title').click(function() {
        // Slide toggle.

        var expanding = true;
        $(this).siblings('.accordion-body').slideToggle(200, function() {
          // After animation.
          // Toggle class if we need to.
          if (expanding) {
            $(this).parent('.accordion-wrapper').toggleClass('expanded');
          }
          // Set expanding to false, since we only need to toggle once.
          expanding = false;
          // Remove queued animation.
          $(this).clearQueue();
        });
      });

      // Set all accordions to default to closed.
      if ($('.accordion-wrapper').length > 0) {
        $('.accordion-wrapper .accordion-body').hide();
        $('.accordion-wrapper').removeClass('expanded');
      }
    }
  }

})(jQuery);
