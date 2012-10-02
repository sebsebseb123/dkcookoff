/* ==========================================================
	  NAVIGATION
	 ======================================================= */

(function ($) {
  
  /* ==========================================================
    TOP NAVIGATION
    ======================================================= */

  Drupal.behaviors.topNav = {
    attach: function (context, settings) {
      // handler for hover over primary nav tabs
      $('nav .block-menu ul.menu li', context).hover(
          // over
          function (event) {
            $(event.target).siblings('li').children('div.submenu').hide();
            $('div.submenu', this).show();
          },
          // out
          function (event) {
            // we only want to remove the opened class if the focus has 
            // left both the primary and secondary box
            submenu = $('div.submenu', this);
            if (!submenu.hasClass('hovered')) {
              submenu.hide();
              _hoverTertiaryMenuOut(submenu.children('ul'));
            }
          }
      );

      
      // handler for hover over secondary menu boxes
      $('nav .block-menu div.submenu > ul > li.expanded', context).hover(
        function(event) {
          //iPad Fix
          $(this).children('ul').show();
          _hoverTertiaryMenu($(this));
        }, 
        function() {
          //iPad Fix
          $(this).children('ul').hide();
        }
      );  
      // handler for none expanded menus
      $('nav .block-menu div.submenu > ul > li').not('.expanded').mouseover(      
        function(event) {
          _hoverTertiaryMenuOut($(this));
        }
      );
              
      // helper function for hover events on secondary menu boxes
      function _hoverTertiaryMenu(currentObj) {
        // parse the parent class out of this li's classes
        classes = currentObj.attr('class').split(' ');
        jQuery.each(classes, function(indexInArray, elemClass) {

          // Break up element's class to get id
          classArray = elemClass.split('-');
          if (classArray.length == 2 && classArray[0] == 'mid') {
            tertiaryMenu =  $('.child-' + elemClass);

            // If This element has a tertiary menu at all
            if (tertiaryMenu.length > 0) {
              currentObj.closest('.submenu').find('.tertiary_menu').hide();
              currentObj.closest('.submenu').find('.secondary-description').hide();
              $('.child-' + elemClass).show();
            }
          }
        }); 
      }

      // hover out of secondary li
      function _hoverTertiaryMenuOut(currentObj) {
        currentObj.closest('.submenu').find('.tertiary_menu').hide();
        currentObj.closest('.submenu').find('.secondary-description').show();
      }

      // Move Last 4th Items Over
      if ($('nav .block-menu div.content > ul.menu > li:nth-child(4)').length > 0) {
        var currentObj = $('nav .block-menu div.content > ul.menu > li:nth-child(4)');
        if (currentObj.hasClass('expanded') && currentObj.children('.submenu').length > 0) currentObj.children('.submenu').css('left', '-130px');
      }

      // Move Last 5th Items Over
      if ($('nav .block-menu div.content > ul.menu > li:nth-child(5)').length > 0) {
        var currentObj = $('nav .block-menu div.content > ul.menu > li:nth-child(5)');
        if (currentObj.hasClass('expanded') && currentObj.children('.submenu').length > 0) currentObj.children('.submenu').css('left', '-250px');
      }

      // Move Last 6th Items Over
      if ($('nav .block-menu div.content > ul.menu > li:nth-child(6)').length > 0) {
        var currentObj = $('nav .block-menu div.content > ul.menu > li:nth-child(6)');
        if (currentObj.hasClass('expanded') && currentObj.children('.submenu').length > 0) currentObj.children('.submenu').css('left', '-350px');
      }
    }
  };

  /* ==========================================================
    FOOTER NAVIGATION
    ======================================================= */

  Drupal.behaviors.footerNav = {
    attach: function (context, settings) {
      if ($('.rsp-navigation .tertiary_menu').length > 0) {
        $.each($('.rsp-navigation .tertiary_menu'), function() {
          var currentName = $(this).attr('id').replace('child-', '');
          var currentSub = $(this).html();

          // Append Tertiary Menu to Submenu
          if ($('.rsp-navigation li.' + currentName).length > 0) {
            $('.rsp-navigation li.' + currentName).append(currentSub);
          }
        });
      }
    }
  };

  Drupal.behaviors.footerNavAccordian = {
    attach: function (context, settings) {
      // Click Action - Secondary
      $('.rsp-navigation .content > ul.menu > li.expanded > a').click(function(event) {
        event.preventDefault();
        
        var currentLink = $(this).attr('href');

        // If Already Expanded
        if ($(this).siblings('.submenu').is(":visible")) {
           // Go To Link
           window.location.href = currentLink;
        // Not Expanded
        } else {
          footerSecondaryOpen($(this));
        }
      });

      // Click Action - Tertiary
      $('.rsp-navigation .content > ul.menu > li.expanded > div.submenu > ul.menu > li.expanded > a').click(function(event) {
        event.preventDefault();
        
        var currentLink = $(this).attr('href');

        // If Already Expanded
        if ($(this).siblings('ul.menu').is(":visible")) {
           // Go To Link
           window.location.href = currentLink;
        // Not Expanded
        } else {
          footerTertiaryOpen($(this));
        }
      });

      if ($('.rsp-navigation .content').length > 0) {
        // Check For Active Secondary Menus
        $.each($('.rsp-navigation .content > ul.menu > li.expanded'), function() {
          //Check Child for Active
          if ($(this).children('a').hasClass('active')) {
            footerSecondaryOpen($(this).children('a'));
          }
        });

        // Check For Active Tertiary Menus
        $.each($('.rsp-navigation .content > ul.menu > li.expanded > div.submenu > ul.menu > li.expanded'), function() {
          //Check Child for Active
          if ($(this).children('a').hasClass('active-trail')) {
            //Open Parent
            footerSecondaryOpen($(this).closest('div.submenu').siblings('a'));
            
            //Open Itself
            footerTertiaryOpen($(this).children('a'));
          } else if ($(this).children('ul.menu').children('li').children('a').hasClass('active')) {
            //Open Parent
            footerSecondaryOpen($(this).closest('div.submenu').siblings('a'));
            
            //Open Itself
            footerTertiaryOpen($(this).children('a'));
          }
        });
      }

      // Open Secondary
      function footerSecondaryOpen(currentObj) {
        footerSecondaryCollapse();
        footerTertiaryCollapse();
        currentObj.parent('li').addClass('expanded-active');
        currentObj.siblings('.submenu').slideDown(300);
      }

      // Collapse Secondary
      function footerSecondaryCollapse() {
        $('.rsp-navigation .submenu').slideUp(300);
        $('.rsp-navigation li').removeClass('expanded-active');
      }

      // Open Tertiary
      function footerTertiaryOpen(currentObj) {
        footerTertiaryCollapse();
        currentObj.parent('li').addClass('expanded-active');
        currentObj.siblings('ul.menu').slideDown(300);
      }

      // Collapse Tertiary
      function footerTertiaryCollapse() {
        $('.rsp-navigation .submenu ul.menu li ul.menu').slideUp(300);
        $('.rsp-navigation .submenu ul.menu li').removeClass('expanded-active');
      }
    }
  };

  /* ==========================================================
    LEFT NAVIGATION
    ======================================================= */

  Drupal.behaviors.leftNav = {
    attach: function () {
      if ($('#sidebar-first-inner .block-menu-block').length > 0) {

        // Hide Ul with no content in them
        $.each( $('.region-sidebar-first .block-menu-block ul.menu'), function() {
     
          if ($(this).html() == '' || $(this).html() == null) {
            $(this).addClass('element-invisible');
          }
        });

        //Remove Expanded From Empty Menu
        $.each( $('.region-sidebar-first .block-menu-block ul.menu li.expanded'), function() {
          if ($(this).children('ul.menu').length == 0) {
            $(this).removeClass('expanded');
          }
        });
      }
    }
  };

})(jQuery);