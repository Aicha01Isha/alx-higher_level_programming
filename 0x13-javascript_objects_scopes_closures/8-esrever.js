#!/usr/bin/node
/**
 * function to reverse a list
 * @param {list} list - list a
 * @returns {number} - the reversed 
 */
exports.esrever = function (list) {
  const newList = [];
  for (let i = list.length - 1; i >= 0; i--) {
    newList.push(list[i]);
  }
  return newList;
};
