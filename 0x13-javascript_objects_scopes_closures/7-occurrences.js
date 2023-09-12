#!/usr/bin/node
/**
 * function to count number of occurrences in a list
 * @param {list} list - lisat
 * @param {number} searchElement - element
 * @returns {number} - the number
 */
exports.nbOccurences = function (list, searchElement) {
  let count = 0;
  list.forEach((item) => {
    if (item === searchElement) {
      count++;
    }
  });
  return count;
};
// alternative to arrow function
// list.forEach(function (item) {
//   if (item === searchElement) {
//     i++;
//   }
// });
