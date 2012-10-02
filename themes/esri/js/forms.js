(function ($) {

  // Webform - File Fields
  Drupal.behaviors.webformFile = {
    attach: function () {
      if ($('input[type=file]').length > 0) {
    		$.each($('input[type=file]'), function() {
    			$(this).addClass('file').addClass('hidden');
    			$(this).parent().append($('<div class="fakefile" />').append($('<input type="text" />').attr('id',$(this).attr('id')+'__fake')).append($('<input type="button" class="form-uploadbtn" value="Choose File"/>')));
     
    			$(this).bind('change', function() {
    				$('#'+$(this).attr('id')+'__fake').val($(this).val());;
    			});
    			$(this).bind('mouseout', function() {
    				$('#'+$(this).attr('id')+'__fake').val($(this).val());;
    			});
    		});
      }
    }
  }

  // Webform - Date Fields
  Drupal.behaviors.webformDate = {
    attach: function () {
  		if ($('.webform-component-date').length > 0) {
  			//Remove Padding on Last
  			$.each($('.webform-datepicker'), function() {
  				$(this).find('.form-item').last().addClass('last');
  			});

  			//Fix jQuery Mobile Placeholder title
  			$.each($('.webform-component-date .form-item select'), function() {
  				var currentLabel = $(this).find('option').val(0);
  			});

  			//Submit - Remove the value added before else you'll
  			//get drual illegal input error
  			$('form.webform-client-form').submit(function() {
  				$.each($('.webform-component-date .form-item select'), function() {
	  				var currentLabel = $(this).find('option').val('');
	  			});
  			});
  		}
  	}
  }

  //Hide Labels - The Accessible Way
  Drupal.behaviors.exposedSelectLabels = {
    attach: function () {
      if ($('.views-exposed-form select').length > 0) {
        $.each($('.views-exposed-form select'), function() {
          var currentLabel = $.trim($(this).closest('.views-exposed-widget').children('label').html());
          var newOption = '<option>' + currentLabel + '</option>';

          $(this).prepend(newOption);
        });
      }
    }
  }
  
})(jQuery);