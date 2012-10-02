/*
 * CrankSlider Script
 * By Jerry Low @ www.crankberryblog.com | www.jerrylow.com
 */ 

 (function ($) {
  $.fn.crankSlider = function (settings) {
    settings = jQuery.extend({
      slideTimer: 8000,
      slideWidth: 620,
      showNav: 1,
      hoverStop: 1,
      currentStrip: 1,
      currentSlide: 0,
      timer: ''
    }, settings);
    var totalSlide = $('.slide').size();
    var totalStrip = parseInt(settings.slideWidth) * parseInt(totalSlide);
    _initialize(totalSlide);

    function _initialize(totalSlide) {
      crankSlider(totalSlide);
      showNav();
      $('.slideTo').click(function () {
        var nextSlide = $(this).attr('id');
        crankSlideTo(nextSlide, totalSlide, 0, 0);
        if (nextSlide == totalSlide) crankSlideAppend();
      })
      $('#slider').hover(function () {
        if (settings.hoverStop == 1) clearTimeout(settings.timer);
      }, function () {
        if (settings.hoverStop == 1) settings.timer = setTimeout(function () {
          crankSlider(totalSlide)
        }, settings.slideTimer);
      });
      $('.slider_nav').hover(function () {
        if (settings.hoverStop == 1) clearTimeout(settings.timer);
      }, function () {
        if (settings.hoverStop == 1) settings.timer = setTimeout(function () {
          crankSlider(totalSlide)
        }, settings.slideTimer);
      });
    }

    function showNav() {
      if (settings.showNav == 1) {
        var navContent = '<ul class="slider_nav">';
        for (i = 1; i <= totalSlide; i++) {
          navContent += '<li><a href="javascript:void(0);" id="' + i + '" class="slideTo ';
          if (i == 1) navContent += ' active';
          navContent += '">&bull;</a></li>';
        }
        navContent += '</ul>';
        $('#slider').after(navContent);
      }
    }

    function crankSlider(totalSlide) {
      $('.sliderStrip').css('width', totalStrip + 'px');
      $('.sliderStrip_wrap').css('width', (totalStrip * 2) + 'px');
      var set_removePrev = 0;
      var restartSlide = 0;
      var prevStrip = settings.currentStrip;
      var nextSlide = settings.currentSlide + 1;
      if (nextSlide > totalSlide) {
        nextSlide = 1;
        crankSlideAppend();
        if (settings.currentStrip == 1) settings.currentStrip = 2;
        else if (settings.currentStrip == 2) settings.currentStrip = 1;
        restartSlide = 1;
      }
      crankSlideTo(nextSlide, totalSlide, restartSlide, prevStrip);
      clearTimeout(settings.timer);
      settings.timer = setTimeout(function () {
        crankSlider(totalSlide);
      }, settings.slideTimer);
    }

    function crankSlideAppend() {
      var currentHTML = $('#sliderStrip_' + settings.currentStrip).html();
      var nextId = 2;
      if (settings.currentStrip == 1) nextId = 2;
      else if (settings.currentStrip == 2) nextId = 1;
      var nextHTML = '<div class="sliderStrip" id="sliderStrip_' + nextId + '">' + currentHTML + '<div>';
      $('.sliderStrip_wrap').append(nextHTML);
    }

    function crankSlideTo(nextSlide, totalSlide, restartSlide, prevStrip) {
      if (nextSlide != settings.currentSlide) {
        for (i = 1; i <= totalSlide; i++) {
          $('#' + i).removeClass('active');
        }
        $('#' + nextSlide).addClass('active');
        if (restartSlide != 0) {
          var slideTo = ((totalSlide) * -1) * settings.slideWidth;
          $('#sliderStrip_' + prevStrip).filter(':not(:animated)').animate({
            marginLeft: slideTo + 'px'
          }, 1000, function () {
            $('#sliderStrip_' + prevStrip).remove();
          });
          $('#sliderStrip_' + settings.currentStrip).filter(':not(:animated)').animate({
            marginLeft: '0px'
          }, 1000);
        } else {
          var otherStrip = 1;
          if (settings.currentStrip == 1) otherStrip = 2;
          else if (settings.currentStrip == 2) otherStrip = 1;
          if ($('#sliderStrip_' + otherStrip).size() > 0) $('#sliderStrip_' + otherStrip).remove();
          var slideTo = ((nextSlide - 1) * -1) * settings.slideWidth;
          $('#sliderStrip_' + settings.currentStrip).filter(':not(:animated)').animate({
            marginLeft: slideTo + 'px'
          }, 1000);
        }
      }
      settings.currentSlide = parseInt(nextSlide);
    }
  }
})(jQuery);