#!/usr/bin/python3
""" Module contains locked class
"""


class LockedClass:
    """prevents the user from dynamically
    creating new instance attributes
    except first_name
    """
    __slots__ = ["first_name"]
