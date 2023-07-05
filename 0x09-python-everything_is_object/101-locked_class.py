#!/usr/bin/python3
"""Defins"""
class LockedClass:
""" Attributes:
        first_name"""
    __slots__ = ["first_name"]
    def __init__(self):
        """Cre"""
        self.first_name = "first_name"
