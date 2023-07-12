#!/usr/bin/python3
"""Defines a class Square based on 9-rectangle."""
Rectangle = __import__('9-rectangle').Rectangle
class Square(Rectangle):
    """Defines a class Square."""
    def __init__(self, size):
        """Creates new instances of class Squ"""
        self.integer_validator("size", size)
        self.__size = size
        super().__init__(size, size)
    def area(self):
        """Calculates the area of a squar"""
        return self.__size ** 2
