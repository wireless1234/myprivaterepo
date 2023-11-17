#!/usr/bin/python3
"""
This module contains the from_json_string function
"""
import json


def from_json_string(my_str):
    """
    Return object represented by JSON
    """
    return json.loads(my_str)
