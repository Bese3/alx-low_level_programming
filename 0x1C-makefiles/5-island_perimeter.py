#!/usr/bin/python3
"""
`island_perimeter` calculates grid perimeter
"""


def island_perimeter(grid):
    """Method tha returns the perimeter of the island described in grid."""
    neighbour_grid = [item[:] for item in grid]
    y = 0
    while y < len(grid):
        z = 0
        my_grid = grid[y]
        while z < len(my_grid):
            neighbour_grid[y][z] = 0
            z += 1
        y += 1
    i = 0
    while i < len(grid):
        my_list = grid[i]
        j = 0
        while j < len(my_list):
            if grid[i][j] == 1:
                try:
                    if my_list[j + 1] == 1:
                        neighbour_grid[i][j] += 1
                except IndexError:
                    pass
                try:
                    if my_list[j - 1] == 1 and j != 0:
                        neighbour_grid[i][j] += 1
                except IndexError:
                    pass
                try:
                    if grid[i + 1][j] == 1:
                        neighbour_grid[i][j] += 1
                except IndexError:
                    pass
                try:
                    if grid[i - 1][j] == 1 and i != 0:
                        neighbour_grid[i][j] += 1
                except IndexError:
                    continue
            j += 1
        i += 1
    p = 0
    for my_grid, my_neighbour in zip(grid, neighbour_grid):
        for i, j in zip(my_grid, my_neighbour):
            p += (i * (4 - j))
    return p
