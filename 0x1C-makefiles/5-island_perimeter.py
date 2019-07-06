#!/usr/bin/python3
def island_perimeter(grid):
    cont = 0
    tamx = len(grid)
    tamy = len(grid[1])

    for iter in range(tamx):
        for iter2 in range(tamy):
            if grid[iter][iter2] == 1:
                cont += 1
                break
    for iter in range(tamx - 1, 0, -1):
        for iter2 in range(tamy - 1, 0, -1):
            if grid[iter][iter2] == 1:
                cont += 1
                break
    for iter in range(tamy):
        for iter2 in range(tamx):
            if grid[iter2][iter] == 1:
                cont += 1
                break
    for iter in range(tamy - 1, 0, -1):
        for iter2 in range(tamx - 1, 0, -1):
            if grid[iter2][iter] == 1:
                cont += 1
                break
    return(cont)
