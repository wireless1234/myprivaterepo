#!/usr/bin/python3


def new_in_list(my_list, idx, element):
    if idx < 0 or idx >= len(my_list):
        return my_list
    new_list = [i if i != my_list[idx] else element for i in my_list]
    return new_list
