/* ==========================================================
	  Global Scripts
	 ======================================================= */

(function ($) {

	/* ==========================================================
		RELATED RESOURCES
		======================================================= */

	Drupal.behaviors.relatedResources = {
	  attach: function () {
			//Rows Exists
			if ($('.pane-related-resources .views-row ').length > 0 && $('.pane-related-resources .views-row').length <= 3) {
				$('.pane-related-resources .view-header').hide();
			}	
			else if ($('.pane-related-resources .views-row ').length > 3) {
				var related_group_total = $('.pane-related-resources .related-group').length;
				var related_current = 1;

				$('a.related-prev').click(function() {
					if (related_current != 1) {
						var next_page = related_current - 1;
						related_goto(next_page);
					}
				});

				$('a.related-next').click(function() {
					if (related_current != related_group_total) {
						var next_page = related_current + 1;
						related_goto(next_page);
					}
				});
			}

			function related_goto(next_page) {
				$('.related-group').hide();
				$('#related-group-' + next_page).fadeIn(150);

				related_current = next_page;
			}
		}
	}


})(jQuery);
