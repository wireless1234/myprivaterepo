#!/usr/bin/python3
"""
This module contains one function
"""


def write_file(filename="", text=""):
    """
    This function writes into a file
    """
    with open(filename, 'w', encoding='UTF-8') as f:
        n = f.write(text)
        return n
