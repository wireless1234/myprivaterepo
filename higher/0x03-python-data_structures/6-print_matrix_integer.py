#!/usr/bin/python3


def print_matrix_integer(matrix=[[]]):
    for j in matrix:
        for i in range(len(j)):
            if i < len(j) - 1:
                print("{:d}".format(i), end=' ')
            else:
                print("{:d}".format(i), end='')
        print()
