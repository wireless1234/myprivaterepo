#!/usr/bin/python3
"""Module contins the inherits_from function
"""


def inherits_from(obj, a_class):
    """ Function returns True if the object is an
    instance of a class that inherited (directly or indirectly)
    from the specified class
    """
    return (isinstance(obj, a_class) and type(obj) is not a_class)
