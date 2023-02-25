#!/usr/bin/python3
"""The calculation of the perimeter of an island in a grid"""


def num_of_waters(grid, i, j):
    """Returns the number of waters cell in a grid near island"""

    n = 0

    if i <= 0 or not grid[i - 1][j]:
        n += 1
    if j <= 0 or not grid[i][j - 1]:
        n += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        n += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        n += 1
    return n


def island_perimeter(grid):

    """Returns the perimeter of island in a given grid"""
    Perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                Perimeter += num_of_waters(grid, i, j)

    return Perimeter
