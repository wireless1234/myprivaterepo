#!/usr/bin/python3
"""
Module defines rectangle class
rectangle class inherits base geometry
"""
BaseGeometry = __import__('5-base_geometry').BaseGeometry


class Rectangle(BaseGeometry):
    """Rectangle class definition
    Rectangle inherits base geometry
    """

    def __init__(self, width, height):
        self.__width = self.integer_validator("width", width)
        self.__height = self.integer_validator("height", height)
