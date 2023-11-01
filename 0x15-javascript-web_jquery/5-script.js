// script that adds a <li> element to a list when the user clicks on theugj
const $ = window.$;
$('#add_item').bind('click', function () {
  $('UL.my_list').append('<li>Item</li>');
});
