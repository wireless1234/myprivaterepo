#!/usr/bin/python3
"""
Module contains load from json file function
"""
import json


def load_from_json_file(filename):
    """
    decode json object from file
    """
    with open(filename, 'r', encoding='UTF-8') as f:
        return json.load(f)
