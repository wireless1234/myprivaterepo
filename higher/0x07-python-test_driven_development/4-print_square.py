#!/usr/bin/python3
"""
Module contains print square function
Prototype: def print_square(size)
"""


def print_square(size):
    """
    Prints a square of '#' characters with the given size.

    Parameters:
    size (int): Size length of the square.

    Raises:
    TypeError: If size is not an integer.
    ValueError: If size is less than 0.
    TypeError: If size is a float and is less than 0.
    """
    if not isinstance(size, int):
        raise TypeError("size must be an integer")

    if size < 0:
        raise ValueError("size must be >= 0")
    for i in range(size):
        print("#" * size)
