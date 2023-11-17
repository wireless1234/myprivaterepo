#!/usr/bin/python3
"""
Module contains script that saves all command arguments to file
"""
import json
import sys
load_from_json_file = __import__('6-load_from_json_file').load_from_json_file
save_to_json_file = __import__('5-save_to_json_file').save_to_json_file

my_list = []
try:
    old_list = load_from_json_file('add_item.json')
    my_list.extend(old_list)
except Exception as e:
    pass
for i in range(1, len(sys.argv)):
    my_list.append(sys.argv[i])
save_to_json_file(my_list, 'add_item.json')
