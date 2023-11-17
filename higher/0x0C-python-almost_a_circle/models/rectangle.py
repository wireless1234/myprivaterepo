#!/usr/bin/python3
"""Module defines the Rectangle Class
"""
from models.base import Base


class Rectangle(Base):
    """ Class Rectangle inherits Base
        Defines a rectangle
    """
    def __init__(self, width, height, x=0, y=0, id=None):
        """
        Constructor for Rectangle Class
        Args:
            width: width of rectangle
            height: height of rectangle
            x: private instance attribute
            y: private instance attribute
            id: base class attribute
        """
        super().__init__(id)
        self.__width = width
        self.__height = height
        self.__x = x
        self.__y = y

    @property
    def width(self):
        return self.__width

    @width.setter
    def width(self, width):
        self.check_integer("width", width)
        self.__width = width

    @property
    def height(self):
        return self.__height

    @height.setter
    def height(self, height):
        self.check_integer("height", height)
        self.__height = height

    @property
    def x(self):
        return self.__x

    @x.setter
    def x(self, x):
        self.check_integer2("x", x)
        self.__x = x

    @property
    def y(self):
        return self.__y

    @y.setter
    def y(self, y):
        self.check_integer2("y", y)
        self.__y = y

    def check_integer(self, name, att):
        """Checks if att is an integer
        """
        if not isinstance(att, int):
            raise TypeError("{} must be an integer".format(name))
        elif att <= 0:
            raise ValueError("{} must be > 0".format(name))

    def check_integer2(self, name, att):
        """checks if att is an integer
        """
        if not isinstance(att, int):
            raise TypeError("{} must be an integer".format(name))
        elif att < 0:
            raise ValueError("{} must be >= 0".format(name))

    def area(self):
        """Calculate and return the area of the rectangle."""
        return self.__width * self.__height

    def display(self):
        """ displays rectangle object
        """
        for i in range(self.__y):
            print()
        for j in range(self.__height):
            print(" " * self.__x + "#" * self.__width)

    def __str__(self):
        return "[Rectangle] ({}) {}/{} - {}/{}".format(
                self.id, self.x, self.y, self.width, self.height)

    def update(self, *args, **kwargs):
        """ update values of rectangle
        """
        if args:
            if len(args) >= 1:
                self.id = args[0]
            if len(args) >= 2:
                self.width = args[1]
            if len(args) >= 3:
                self.height = args[2]
            if len(args) >= 4:
                self.x = args[3]
            if len(args) >= 5:
                self.y = args[4]
        else:
            if 'id' in kwargs:
                self.id = kwargs['id']
            if 'width' in kwargs:
                self.width = kwargs['width']
            if 'height' in kwargs:
                self.height = kwargs['height']
            if 'x' in kwargs:
                self.x = kwargs['x']
            if 'y' in kwargs:
                self.y = kwargs['y']

    def to_dictionary(self):
        """Return a dictionary representation of the Rectangle."""
        return {
                'id': self.id,
                'width': self.__width,
                'height': self.__height,
                'x': self.__x,
                'y': self.__y
                }
