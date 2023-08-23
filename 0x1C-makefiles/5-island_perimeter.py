#!/usr/bin/python3
"""
`island_perimeter` calculates grid perimeter
"""


def island_perimeter(grid):
    """
    The function island_perimeter calculates
    the perimeter of an island represented by a grid, where
    each cell is either land (1) or water (0).
    """
    hor = 1
    ver = 1
    if type(grid) is not list:
        raise TypeError("typeerror")
    if type(grid[0]) is not list:
        raise TypeError("innerlist error")
    j = 0
    while j < len(grid):
        i = 0
        while i < len(grid[j]):
            if grid[j][i] == 0:
                i += 1
                continue
            if grid[j][i + 1] == 1:
                hor += 1
            if grid[j + 1][i] == 1:
                ver += 1
            # print(f"i = {i}, j = {j}, hor = {hor}, ver = {ver}")
            i += 1
        j += 1
    per = 2*(hor + ver)
    if per > 100:
        return 100
    return per
