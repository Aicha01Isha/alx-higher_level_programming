// script that updates the text of the <header> element to New Header!!!hkhi
const $ = window.$;
$('#update_header').bind('click', function () {
  $('header').replaceWith('New Header!!!');
});
