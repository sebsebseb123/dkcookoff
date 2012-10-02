(function ($) {
  var filterKeywordsTitle = '';
  var filterDateTitle = '';

  //Hide Labels - The Accessible Way
  Drupal.behaviors.resourcesLabels = {
    attach: function () {
      if ($('.view-resources').length > 0) {
        $.each($('.view-resources .view-filters .views-exposed-widget'), function() {
          $(this).children('label').addClass('element-invisible');
        });
      }
    }
  }

  //Keywords Field
  Drupal.behaviors.resourcesKeywords = {
    attach: function () {
      if ($('.form-item-keys').length > 0) {
        filterKeywordsTitle = $.trim($('.form-item-keys').closest('.views-widget-filter-keys').children('label').html());

        //If Search Terms is Blank on Load
        if ($('.form-item-keys > input').val() == '') {
          $('.form-item-keys > input').val(filterKeywordsTitle);
        }

        $('.form-item-keys > input').focus(function() {
          if($(this).val()==filterKeywordsTitle) {
            $(this).val('');
          }
        });

      }
    }
  }

  //Date Picker Field
  Drupal.behaviors.resourcesDate = {
    attach: function () {
      if ($('.form-item-date').length > 0) {
        filterDateTitle = $.trim($('.form-item-date').closest('.views-exposed-widget').children('label').html());

        //If Search Terms is Blank on Load
        if ($('.form-item-date input').val() == '') {
          $('.form-item-date input').val(filterDateTitle);
        }
      }
    }
  }

  //Clear Textfields on Submit
  Drupal.behaviors.resourcesInputSubmit = {
    attach: function () {
      //Form Submit
      $('.view-resources form').submit( function() {
        if ( $('.form-item-keys > input').val() == filterKeywordsTitle) $('.form-item-keys > input').val('');
        if ( $('.form-item-date input').val() == filterDateTitle) $('.form-item-date input').val('');

        return true;
      });
    }
  }

})(jQuery);
