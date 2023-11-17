#!/usr/bin/python3
""" Contains the Mylist class
"""


class MyList(list):
    """Class inherits list class
        Creates list object
    """
    def print_sorted(self):
        """ print a sorted list object
        """
        print(sorted(self))
