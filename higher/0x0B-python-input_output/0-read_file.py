#!/usr/bin/python3
"""
Module doctring
"""


def read_file(filename=""):
    """
    reads file with filename as name
    """
    with open(filename, encoding='UTF-8') as f:
        for line in f:
            print(line, end='')
