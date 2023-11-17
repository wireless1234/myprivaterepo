#!/usr/bin/python3
"""
This module contains the add integer function
add_integer adds two integers and returns sum
Prototype: def add_integer(a, b=98)
"""


def add_integer(a, b=98):
    """i
    Adds two integers
    """
    if not isinstance(a, (int, float)):
        raise TypeError("a must be an integer")
    if not isinstance(b, (int, float)):
        raise TypeError("b must be an integer")
    if isinstance(a, float):
        a = int(a)
    if isinstance(b, float):
        b = int(b)
    return (a + b)
