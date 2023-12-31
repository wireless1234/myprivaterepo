#!/usr/bin/python3
"""
Module contains the Student class
"""


class Student:
    """
    Defines a Student with firstname, Lastname and Age
    """
    def __init__(self, first_name, last_name, age):
        """
        Initialize firstname lastname and age
        """
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self):
        """
        get dictionary representation of object
        """
        return self.__dict__
