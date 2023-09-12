#!/usr/bin/node
/**
 * function that converts a number from base 10 to another base
 * @param {number} base - basea
 * @returns {any} - the number
 */
exports.converter = function (base) {
  function converted (number) {
    return number.toString(base);
  }
  return converted;
};
