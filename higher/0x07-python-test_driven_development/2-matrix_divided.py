#!/usr/bin/python3
"""
    Module contains the matrix divided function
    Prototype: def matrix_divided(matrix, div)
    Function divides elements of matrix by div
"""


def matrix_divided(matrix, div):
    """
    Divides all elements of a matrix by a given number.

    Parameters:
    matrix (list of lists): Matrix of integers or floats.
    div (int or float): Number to divide the elements of the matrix by.

    Returns:
    list of lists: New matrix with elements divided by div

    Raises:
    TypeError: If matrix is not a list of lists of integers or floats.
    TypeError: If each row of the matrix does not have the same size.
    TypeError: If div is not a number (integer or float).
    ZeroDivisionError: If div is equal to 0.
    """
    error = "matrix must be a matrix (list of lists) of integers/floats"
    if not all(isinstance(row, list) and all(isinstance(num, (int, float))
                                             for num in row)
               for row in matrix):
        raise TypeError(error)
    if not all(len(row) == len(matrix[0]) for row in matrix):
        raise TypeError("Each row of the matrix must have the same size")
    if not isinstance(div, (int, float)):
        raise TypeError("div must be a number")
    if div == 0:
        raise ZeroDivisionError("division by zero")
    return [[round(num / div, 2) for num in row] for row in matrix]
