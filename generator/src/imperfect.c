/*
** EPITECH PROJECT, 2022
** imperfect
** File description:
** imperfect
*/

#include "prototype.h"
#include "struct.h"

void conditions_imperfect(maze_t *maze, int i, int j)
{
    if (i % 2 == 0) {
        if (j == maze->random.r_x && i != 0) {
            maze->maze[i][maze->random.r_x] = 'X';
            printf("%c", maze->maze[i][maze->random.r_x]);
        } else
            printf("*");
    }
    else if (i % 2 != 0) {
        if (j == maze->random.r) {
            maze->maze[i][maze->random.r] = '*';
            printf("%c", maze->maze[i][maze->random.r]);
        }
        else if (j == maze->random.r_2) {
            maze->maze[i][maze->random.r_2] = '*';
            printf("%c", maze->maze[i][maze->random.r_2]);
        } else {
            maze->maze[i][j] = 'X';
            printf("%c", maze->maze[i][j]);
        }
    }
}

void imperfect_maze(maze_t *maze)
{
    for (int i = 0; i < maze->height; i++) {
        maze->random.r = rand() % maze->height;
        maze->random.r_2 = rand() % maze->height;
        maze->random.r_x = rand() % maze->height;
        for (int j = 0; j < maze->width; j++)
            conditions_imperfect(maze, i, j);
        if (i == maze->height - 1)
            break;
        else
            printf("\n");
    }
}
