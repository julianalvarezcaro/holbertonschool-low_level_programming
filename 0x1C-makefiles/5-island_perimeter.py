#!/usr/bin/python3
"""
island_perimeter module
"""


def island_perimeter(grid):
    """Function that returns the perimeter of an island represented by a grid
    """

    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            here = grid[row][col]
            up = row - 1
            down = row + 1
            left = col - 1
            right = col + 1

            if here == 0:
                continue
            if grid[up][col] == 0:
                perimeter += 1
            if grid[down][col] == 0:
                perimeter += 1
            if grid[row][left] == 0:
                perimeter += 1
            if grid[row][right] == 0:
                perimeter += 1
    return perimeter
