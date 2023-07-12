#!/usr/bin/python3
"""Defines a function is_kind_of_class()"""
def is_kind_of_class(obj, a_class):
    """Returns True if the object is an instance of or if the object is,
    an instance of a class that inherited from, the"""
    # print("---> obj type {}".format(type(obj)))
    # print("---> a_class type {}".format(type(a_class)))
    return isinstance(obj, a_class)
