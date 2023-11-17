#!/usr/bin/python3
"""
    Module contains the say_my_name function
    Function says your name
    Prototype: def say_my_name(first_name, last_name="")
"""


def say_my_name(first_name, last_name=""):
    """
    Prints the formatted full name.

    Parameters:
    first_name (str): First name.
    last_name (str, optional): Last name. Defaults to an empty string.

    Raises:
    TypeError: If first_name or last_name is not a string.
    """
    if not isinstance(first_name, str):
        raise TypeError("first_name must be a string")
    if not isinstance(last_name, str):
        raise TypeError("last_name must be a string")

    message = f"My name is {first_name} {last_name}"

    print(message)
