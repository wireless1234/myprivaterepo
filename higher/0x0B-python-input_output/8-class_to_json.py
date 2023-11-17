#!/usr/bin/python3
"""
Contains the class to json function
"""


def class_to_json(obj):
    """
    Returns dictionary description of an object
    """
    return obj.__dict__
