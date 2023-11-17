#!/usr/bin/python3
"""
Module contains the save to json function
"""
import json


def save_to_json_file(my_obj, filename):
    """
    writes object to text file
    """
    with open(filename, 'w', encoding='UTF-8') as f:
        json.dump(my_obj, f)
