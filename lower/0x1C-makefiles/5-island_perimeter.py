#!/usr/bin/python3
"""Module contains the
island_perimeter function
"""
"""
# Intialize Perimeter to 0
# Traverse over the list
# Find cell with number 1
# Check cell in previous list at same index
# If cell does not contain number 1
#       increment perimeter by 1
# Repeat for:
#   cell in next list at same index
#   cell in same list at previous index
#   cell in same list at next index
#   Return Perimeter
"""

def island_perimeter(grid):
    perimeter = 0
    for listindex in range(len(grid)):
        for cellindex in range(len(grid[listindex])):
            if grid[listindex][cellindex] == 1:
                if grid[listindex - 1][cellindex] != 1 or listindex == 0:
                    perimeter += 1
                if grid[listindex + 1][cellindex] != 1:
                    perimeter += 1
                if grid[listindex][cellindex - 1] != 1:
                    perimeter += 1
                if grid[listindex][cellindex + 1] != 1:
                    perimeter += 1
    return(perimeter)

grid = [
[0, 0, 0, 0, 0, 0],
[0, 1, 0, 0, 0, 0],
[0, 1, 0, 0, 0, 0],
[0, 1, 1, 1, 0, 0],
[0, 0, 0, 0, 0, 0]
]
print(island_perimeter(grid))
