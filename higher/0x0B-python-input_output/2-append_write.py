#!/usr/bin/python3
"""
This module contains the append_write function
"""


def append_write(filename="", text=""):
    """
    This function appends a text to a file
    """
    with open(filename, 'a', encoding='UTF-8') as f:
        n = f.write(text)
        return n
