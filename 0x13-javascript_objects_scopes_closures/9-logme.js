#!/usr/bin/node
/**
 * function  that prints the number of arguments already printed
 * @param {item} str - argument passed a
 * @returns nothing
 */
let narg = 0;
exports.logMe = function (item) {
  console.log(`${narg}: ${item}`);
  narg++;
};
