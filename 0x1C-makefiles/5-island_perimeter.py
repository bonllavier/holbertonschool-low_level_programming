#!/usr/bin/python3
"""
module 5-island_perimeter
"""


def island_perimeter(grid):
    """
    return the perimeter
    """
    cont = 0
    tamx = len(grid)
    tamy = len(grid[0])
    num_ant = 0

    for iter in range(tamx):
        num_ant = 0
        for iter2 in range(tamy):
            if grid[iter][iter2] == 1 and num_ant == 0:
                cont += 1
            num_ant = grid[iter][iter2]
    num_ant = 0
    for iter in range(tamx - 1, -1, -1):
        num_ant = 0
        for iter2 in range(tamy - 1, -1, -1):
            if grid[iter][iter2] == 1 and num_ant == 0:
                cont += 1
            num_ant = grid[iter][iter2]
    num_ant = 0
    for iter in range(tamy):
        num_ant = 0
        for iter2 in range(tamx):
            if grid[iter2][iter] == 1 and num_ant == 0:
                cont += 1
            num_ant = grid[iter2][iter]
    num_ant = 0
    for iter in range(tamy - 1, -1, -1):
        num_ant = 0
        for iter2 in range(tamx - 1, -1, -1):
            if grid[iter2][iter] == 1 and num_ant == 0:
                cont += 1
            num_ant = grid[iter2][iter]
    return(cont)
