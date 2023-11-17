#!/usr/bin/python3

import hidden_4
if __name__ == "__main__":
    mydir = dir(hidden_4)
    for name in mydir:
        if name[:2] != "__":
            print(name)
