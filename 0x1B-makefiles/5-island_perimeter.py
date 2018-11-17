#!/usr/bin/python3
""" algo """


def island_perimeter(grid):
    """ do some funky magic """

    if grid is None or len(grid) is 0:
        return 0

    count = 0
    # length = len(grid)
    # length2 = len(grid[0])
    # print(length, length2)

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    count += 1  # up check
                if grid[i + 1][j] == 0:
                    count += 1  # down check
                if grid[i][j - 1] == 0:
                    count += 1  # left check
                if grid[i][j + 1] == 0:
                    count += 1  # right check
    return count
