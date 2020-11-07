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

            # If the current position is water, no perimeter must be added
            if here == 0:
                continue

            # if format:
            # if it is on the limits of the grid
            # OR
            # checks if the positions is a border of the island
            if row == 0 or grid[up][col] == 0:
                perimeter += 1
            if row + 1 == len(grid) or grid[down][col] == 0:
                perimeter += 1
            if col == 0 or grid[row][left] == 0:
                perimeter += 1
            if col + 1 == len(grid[row]) or grid[row][right] == 0:
                perimeter += 1
    return perimeter
