#!/usr/bin/python3
""" This is a module that finds the
perimeter of an island, represented by 1s, and
water is represented by 0s. How many 0s touch the 1s
in a veritcal or horizontal fashion? """


def island_perimeter(grid):
    """ do some funky magic
    WTF WHY DOESNT THIS WORK?!?!
    UGHHHHHH

    Args: Grid is a list of a list of ints
    Returns: The count
    """

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
    return (count)
