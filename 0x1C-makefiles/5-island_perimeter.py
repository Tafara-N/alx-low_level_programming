#!/usr/bin/python3

"""
A function that returns the perimeter of the island described in grid

Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes” (water inside that isn’t connected to the water
around the island).
"""


def island_perimeter(grid):
    """
    Args:
        grid (list): A list of list of integers representing an island
    Returns:
        Perimeter of the island defined in grid.
    """

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for x in range(height):
        for y in range(width):
            if grid[x][y] == 1:
                size += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    edges += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    edges += 1
    return size * 4 - edges * 2
