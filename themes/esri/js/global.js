/* ==========================================================
	  Global Scripts
	 ======================================================= */

(function ($) {

	/* ==========================================================
		HEADER SEARCH
		======================================================= */

	//Newsletter Input Field
	Drupal.behaviors.headerSearch = {
	    attach: function () {
			//Clear Input Field
			var clearFormKeys = ''; 
			clearFormKeys = $('#edit-search-block-form--2').attr('title');

			//If Search Terms is Blank on Load
			if ($('#edit-search-block-form--2').val() == '') {
				$('#edit-search-block-form--2').val(clearFormKeys);
			}

			$('#edit-search-block-form--2').focus(function() {
				if($(this).val()==$(this).attr('title')) {
					$(this).val('');
				}
			});
		}
	}

	/* ==========================================================
		FOOTER FEATURE
		======================================================= */

	//Newsletter Input Field
	  Drupal.behaviors.footerFeature = {
	    attach: function () {
			if ($('.view-footer-feature').length > 0) {
				$.each($('.view-footer-feature .views-row'), function() {
					//Add Link
					var footerfeatureLink = $(this).find('.views-field-field-link-to-text a').attr('href');
					$(this).children('.footer-feature-link').attr('href', footerfeatureLink);
				});

				$.each($('.view-footer-feature .views-row h3'), function() {
					var footerfeatureTitle = $(this).html();
					var hasSpace = footerfeatureTitle.indexOf(' ');

					if (hasSpace > 0) {
						var footerfeatureNewTitle = footerfeatureTitle.substr(0, hasSpace) + '<br /><span class="title-line-two">' + footerfeatureTitle.substr(hasSpace, footerfeatureTitle.length)  + '</span>';
						$(this).html(footerfeatureNewTitle);
					}
				});
			}
		}
	}

	/* ==========================================================
		FOOTER NEWSLETTER
		======================================================= */

	//Newsletter Input Field
	  Drupal.behaviors.newsletterInput = {
	    attach: function () {
			var clearNewsletterKeys = ''; 

			clearNewsletterKeys = $('#block-esri_theme_config-newsletter input.ea').attr('title');

			//If Search Terms is Blank on Load
			if ($('#block-esri_theme_config-newsletter input.ea').val() == '') {
				$('#block-esri_theme_config-newsletter input.ea').val(clearNewsletterKeys);
			}

			$('#block-esri_theme_config-newsletter input.ea').focus(function() {
				if($(this).val()==$(this).attr('title')) {
					$(this).val('');
				}
			});
	    }
	  }

})(jQuery);
