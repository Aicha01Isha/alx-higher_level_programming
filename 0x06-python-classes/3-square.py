#!/usr/bin/python3
"""Define"""
class Square:
    """Represent"""
    def __init__(self, size=0):
        """Initialize
        Args:
            size (int): The size
        """
        if not isinstance(size, int):
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        self.__size = size
    def area(self):
        """Return"""
        return (self.__size * self.__size)
