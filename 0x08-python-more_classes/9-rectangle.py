#!/usr/bin/python3
""" empty class """
class Rectangle:
    """ class """
    number_of_instances = 0
    print_symbol = "#"
    def __init__(self, width=0, height=0):
        """ Instantiation """
        self.width = width
        self.height = height
        type(self).number_of_instances += 1
    @property
    def width(self):
        """wid"""
        return self.__width
    @property
    def height(self):
        """he"""
        return self.__height
    @width.setter
    def width(self, value):
        """width """
        if type(value) is not int:
            raise TypeError("width must be an integer")
        if value < 0:
            raise ValueError("width must be >= 0")
        self.__width = value

    @height.setter
    def height(self, value):
        """height """
        if type(value) is not int:
            raise TypeError("height must be an integer")
        if value < 0:
            raise ValueError("height must be >= 0")
        self.__height = value

    @staticmethod
    def bigger_or_equal(rect_1, rect_2):
        if type(rect_1) is not Rectangle:
            raise TypeError("rect_1 must be an instance of Rectangle")
        if type(rect_2) is not Rectangle:
            raise TypeError("rect_2 must be an instance of Rectangle")
        return rect_1 if rect_1.area() >= rect_2.area() else rect_2
    @classmethod
    def square(cls, size=0):
        return Rectangle(size, size)
    def area(self):
        """ returns """
        return self.__width * self.__height
    def perimeter(self):
        """ returns """
        if self.__width is 0 or self.__height is 0:
            return 0
        return self.__width * 2 + self.__height * 
    def __str__(self):
        """ return """
        if self.__width is 0 or self.__height is 0:
            return ""
        return ("\n".join(["".join([str(self.print_symbol)
                for i in range(self.__width)]) for j in range(self.__height)]))
    def __repr__(self):
        """ return """
        return "Rectangle({}, {})".format(self.__width, self.__height)
    def __del__(self):
        """Prin"""
        type(self).number_of_instances -= 1
        print("Bye rectangle...")
