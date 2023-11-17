#!/usr/bin/python3

import sys
if __name__ == "__main__":
    arc = len(sys.argv) - 1
    if arc == 0:
        print(f"{arc} arguments.")
    elif arc == 1:
        print(f"{arc} argument:\n{arc}: {sys.argv[arc]}")
    else:
        print(f"{arc} arguments:")
        for i in range(1, (arc + 1)):
            print(f"{i}: {sys.argv[i]}")
