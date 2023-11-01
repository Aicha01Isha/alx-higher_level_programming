// script that toggles the class of the <header> element when the user4ek
const $ = window.$;
$('#toggle_header').bind('click', function () {
  $('header').toggleClass('green red');
});
