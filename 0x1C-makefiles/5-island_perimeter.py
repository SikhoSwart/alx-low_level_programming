#!/usr/bin/python3
"""
function def island_perimeter(grid):
returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """ Return perimeter."""
    length = len(grid)
    width = len(grid[0])
    l_zone = 0
    n = 0
    for i in range(length):
        for j in range(width):
            if grid[i][j] == 1:
                l_zone += 1
                if i < length - 1 and grid[i+1][j] == 1:
                    n += 1
                if j < width - 1 and grid[i][j + 1] == 1:
                    n += 1
    return l_zone * 4 - 2 * n
