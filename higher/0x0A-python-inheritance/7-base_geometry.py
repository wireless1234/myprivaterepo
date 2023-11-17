#!/usr/bin/python3
""" Module defines base geometry class
"""


class BaseGeometry:
    """ Class definition for geometry
    """
    def area(self):
        """ Calculates area
        """
        raise Exception("area() is not implemented")

    def integer_validator(self, name, value):
        """ check if value is integer and
        greater than 0
        """
        if not isinstance(value, int):
            raise TypeError(f"{name} must be an integer")
        if value <= 0:
            raise ValueError(f"{name} must be greater than 0")
