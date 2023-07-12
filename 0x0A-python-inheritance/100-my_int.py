#!/usr/bin/python3
"""Defines a class MyInt that inherits from i"""
class MyInt(int):
    """Defines a cl"""
    def __init__(self, value):
        """Creates new instances of class My"""
        self.__value = value
    def __eq__(self, other):
        """The method equ"""
        return self.__value != other
    def __ne__(self, other):
        """The method not equ"""
        return self.__value == other
