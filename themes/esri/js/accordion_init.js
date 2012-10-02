(function($) {
  Drupal.behaviors.accordion_blocks = {
	  attach: function() {
	    $('.accordion_blocks_container').accordion(
				{
					header: "h2", 
					autoHeight: false,		
					change: function(event,ui) {
							var hid = ui.newHeader.children('a').attr('id');
							
							if (hid === undefined) {
								$.cookie('esrifilter', null);
							} else {
								$.cookie('esrifilter', hid, { path: '/', expires: 2 });
							}
					}
					
					
				}
			);
			
			if($.cookie('esrifilter')) {
				$('.accordion_blocks_container').accordion('option', 'animated', false);
				$('.accordion_blocks_container').accordion('activate', $('#' + $.cookie('esrifilter')).parent('h2'));
				$('.accordion_blocks_container').accordion('option', 'animated', 'slide');
			}
	  }
  };
})(jQuery);