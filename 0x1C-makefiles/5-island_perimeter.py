#!/usr/bin/python3


def island_perimeter(grid):
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



if __name__ == '__main__':
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    island_perimeter(grid)