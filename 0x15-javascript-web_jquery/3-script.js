// script that adds the class red to the <header> element when the useryfy
const $ = window.$;
$('#red_header').bind('click', function () {
  $('header').addClass('red');
});
