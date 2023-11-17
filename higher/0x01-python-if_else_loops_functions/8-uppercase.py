#!/usr/bin/python3
def uppercase(str):
    for char in str:
        ascii_num = ord(char)
        if 97 <= ascii_num and ascii_num <= 122:
            uppercase = chr(ascii_num - 32)
        else:
            uppercase = char
        print("{}".format(uppercase), end='')
    print()
