#!/usr/bin/python3
"""Perimeter of an Island
"""


def island_perimeter(grid):
    """Function that finds the perimeter of an island

    Args:
        grid (list): 2d array of integers where 1 is land and 0 is water

    Returns:
        int: perimeter of the 'island'
    """
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i][j+1] == 0:
                    count += 1
                if grid[i][j-1] == 0:
                    count += 1
                if grid[i+1][j] == 0:
                    count += 1
                if grid[i-1][j] == 0:
                    count += 1
    return count
