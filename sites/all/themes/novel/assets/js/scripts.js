(function ($) {
  $(document).ready(function() {
    
  $('.js nav').prepend('<div class="menu-btn"><div id="nav-icon3"><span></span><span></span><span></span><span></span></div><div class="menu-label">Menu</div></div>');
  $('.js nav ul').addClass('hide');
  $(".menu-btn").click(function(){
        $(".js nav ul").toggleClass('hide');
        $(".menu-btn").toggleClass('close');
        $("#nav-icon3").toggleClass('open');
    });
  
  if(Modernizr.mq('only all')) {
    $('html').addClass('mq');
  } else {
    $('html').addClass('no-mq');
  };
  
  if ($(".header-image-static")[0]){
    $('body').addClass('header-image-static-exsists');
  } else {
      // Do something if class does not exist
  }
  
  // $('.slider').unslider({
  //   autoplay: true 
  // });

  $('.open-gallery-filter').click(function() {
    $('.gallery .view-filters').toggleClass('opened');
    $('body').toggleClass('dim');
    $('.close-gallery-filter').toggleClass('show');
  });
   $('.close-gallery-filter').click(function() {
    $('.gallery .view-filters').toggleClass('opened');
    $('body').toggleClass('dim');
    $('.close-gallery-filter').toggleClass('show');
  });

  });
})(jQuery);