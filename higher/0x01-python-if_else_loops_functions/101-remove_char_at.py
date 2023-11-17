#!/usr/bin/python3
def remove_char_at(str, n):
    mystr = ""
    for i in range(len(str)):
        if i == n:
            continue
        mystr += str[i]
    return (mystr)
