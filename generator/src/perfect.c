/*
** EPITECH PROJECT, 2022
** div_maze
** File description:
** div_maze
*/

#include "prototype.h"
#include "struct.h"

void conditions_perfect(maze_t *maze, int i, int j)
{
    if (i % 2 == 0)
        printf("*");
    else if (i % 2 != 0) {
        if (j == maze->random.r) {
            maze->maze[i][maze->random.r] = '*';
            printf("%c", maze->maze[i][maze->random.r]);
        } else {
            maze->maze[i][j] = 'X';
            printf("%c", maze->maze[i][j]);
        }
    }
}

void perfect_maze(maze_t *maze)
{
    for (int i = 0; i < maze->height; i++) {
        maze->random.r = rand() % maze->height;
        for (int j = 0; j < maze->width; j++)
            conditions_perfect(maze, i, j);
        if (i == maze->height - 1)
            break;
        else
            printf("\n");
    }
}
