(function ($) {
  //Homepage Features
  Drupal.behaviors.homepageFeatures = {
    attach: function () {
      // Small Feature Hovers
      $('.view-homepage .views-row .small-feature a').hover(
        function() {
          $(this).find('.feature-big-arrow').show();
          $(this).find('.feature-big-arrow').animate({ opacity: 1, top: '42px'}, 200);
        },
        function() {
          $(this).find('.feature-big-arrow').animate({ opacity: 0}, 50, function() {
            $(this).css('top', '10px');
            $(this).find('.feature-big-arrow').hide();
          });
        }
      );

      // Large Feature Hovers
      $('.view-homepage .views-row .large-feature a').hover(
        function() {
          $(this).find('.feature-big-arrow').show();
          $(this).find('.feature-big-arrow').animate({ opacity: 1, top: '32px'}, 200);
        },
        function() {
          $(this).find('.feature-big-arrow').animate({ opacity: 0}, 50, function() {
            $(this).css('top', '10px');
            $(this).find('.feature-big-arrow').hide();
          });
        }
      );

      // Focal Slider Resizing
      focalResize($('.focal-slide-wrap').width());
      var focalPagination = 290;

      //Not IE8 and Below
      if (!($.browser.msie  && parseInt($.browser.version, 10) === 8) && !($.browser.msie  && parseInt($.browser.version, 10) === 7)) {
        // After load and resizing
        window.addEventListener("resize", function(e) {
            var focalWidth = $('.focal-slide-wrap').width();
            focalResize(focalWidth);
        });

        //Orientation Change
        $(window).bind('orientationchange', function(e) {
            setTimeout(function() { focalResizeDelay(1); }, 600);
            setTimeout(function() { focalResizeDelay(2); }, 1200);
        });
      }

      // Focal Slider Resizing Function
      function focalResize(focalWidth) {
        //For 1040
        if (focalWidth > 1040) {
          $('.focal-slide-wrap').height('');
          $('.focal-slide-wrap').find('.focal-pagination').css('top', focalPagination + 'px');
        } else if (focalWidth <= 1040 && focalWidth > 550) {
          $('.focal-slide-wrap').height( focalWidth * 0.3365);
          var newFocalPagination = (focalWidth * 0.3365) * 0.81;
          $('.focal-slide-wrap').find('.focal-pagination').css('top', newFocalPagination + 'px');
        } else if (focalWidth <= 550) {
          $('.focal-slide-wrap').height( focalWidth * 0.55);
          var newFocalPagination = focalWidth * 0.55;
        }
      }

      function focalResizeDelay(setNum) {
        if (setNum == 1) $('.focal-slide-wrap').find('img').css('height', '99.5%');
        else if (setNum == 2) $('.focal-slide-wrap').find('img').css('height', '100%');
      }

    }
  }

  //Focal Slider
  Drupal.behaviors.homepageFocal = {
    attach: function () {
      var currentSlide = 1;
      var slideStart = true;
      var slideTotal = 0;
      var slideTime = 6000;
      var slideTimeFunc = '';

      //Slider Exists
      if ($('.focal-slide-wrap').length > 0) {
        slideTotal = $('.focal-slide-wrap .views-row').length;

        //We Need Slides
        if (slideTotal > 1) {
          _focalInit();
        }
        //No slides so hide pagination controls
        else {
          $('.focal-pagination').hide();
          $('.focal-pagination-rsp').hide();
        }
      }

      if (slideTotal > 1) {

        //On Hover Stop animation
        $('.focal-slide-wrap .views-row').hover( 
          function() {
            focalStop();
          },
          function() {
            _focalInit();
        });

        //Next Button
        $('.focal-slide-wrap a.focal-next').click(function() {
          var nextSlide = currentSlide+1;
          if (nextSlide > slideTotal) nextSlide = 1;
          focalGoTo( currentSlide, nextSlide );
          focalStop();
        });

        //Previous Button
        $('.focal-slide-wrap a.focal-prev').click(function() {
          var nextSlide = currentSlide-1;
          if (nextSlide < 1) nextSlide = slideTotal;
          focalGoTo( currentSlide, nextSlide );
          focalStop();
        });

        //RESPONSIVE VERSION OF THE BUTTONS ABOVE

        //On Hover Stop animation - Next Button
        $('.focal-pagination-rsp a.focal-next').hover( 
          function() {
            focalStop();
          },
          function() {
            _focalInit();
        });

        //On Hover Stop animation - Previous Button
        $('.focal-pagination-rsp a.focal-prev').hover( 
          function() {
            focalStop();
          },
          function() {
            _focalInit();
        });

        //Next Button
        $('.focal-pagination-rsp a.focal-next').click(function() {
          var nextSlide = currentSlide+1;
          if (nextSlide > slideTotal) nextSlide = 1;
          focalGoTo( currentSlide, nextSlide );
        });

        //Previous Button
        $('.focal-pagination-rsp a.focal-prev').click(function() {
          var nextSlide = currentSlide-1;
          if (nextSlide < 1) nextSlide = slideTotal;
          focalGoTo( currentSlide, nextSlide );
        });
      }

      //The automated slider function
      function _focalInit() {
        var nextSlide = currentSlide+1;
        if (nextSlide > slideTotal) nextSlide = 1;

        if (!slideStart) {
          focalGoTo( currentSlide, nextSlide );
        } else {
          slideStart = false;
        }
        slideTimeFunc = setTimeout( function() { 
          _focalInit(); 
        }, slideTime);
      }

      //Actual Animation
      function focalGoTo( focalCurrent, focalNext ) {
        $('.focal-slide-wrap .views-row.slide-' + focalCurrent).fadeOut(300);
        $('.focal-slide-wrap .views-row.slide-' + focalNext).fadeIn(300);

        currentSlide = focalNext;
      }

      //Stop Animation
      function focalStop() {
        clearTimeout(slideTimeFunc);
        slideStart = true;
      }
    }
  }

})(jQuery);
