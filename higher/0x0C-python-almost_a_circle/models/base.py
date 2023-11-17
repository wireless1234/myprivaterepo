#!/usr/bin/python3
"""Module contains the Base Class
"""


class Base:
    """Create a base parent class
    """
    __nb_objects = 0

    def __init__(self, id=None):
        """
        Initialize attribues of base class
        Args:
            id: Instance attribute id
        """
        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects

    @staticmethod
    def to_json_string(list_dictionaries):
        """Convert a list of dictionaries to a JSON string."""
        if list_dictionaries is None or len(list_dictionaries) == 0:
            return "[]"
        return json.dumps(list_dictionaries)
