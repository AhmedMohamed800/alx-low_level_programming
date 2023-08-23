#!/usr/bin/python3
"""a module that contians island_permieter"""


def island_perimeter(grid):
    """that returns the perimeter of the island described in grid"""
    visited = set()

    def deep_serach(i, j):
        """search in every possible direction"""
        if i >= len(grid) or j >= len(grid[0]) or \
                i < 0 or j < 0 or grid[i][j] == 0:
            return 1
        if (i, j) in visited:
            return 0
        visited.add((i, j))
        depth = deep_serach(i, j + 1)
        depth += deep_serach(i + 1, j)
        depth += deep_serach(i, j - 1)
        depth += deep_serach(i - 1, j)
        return depth

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                return deep_serach(i, j)
    return 0
