/*
** EPITECH PROJECT, 2022
** solver
** File description:
** solver
*/

#include "prototype.h"
#include <stdlib.h>
#include <stdio.h>

static void linked(maze_t *maze, char **maze_array, int i, int j)
{
    for (int s = 0; s < maze->nbr_stars; s++) {
        if (i == maze->coords[s].y && j == maze->coords[s].x
        && maze->coords[s].f == 0) {
            maze->save[maze->i_save].y = maze->coords[s].y;
            maze->save[maze->i_save].x = maze->coords[s].x;
            maze->i_save++;
            maze->m++;
            maze->coords[s].f = 1;
            my_realloc_memset(maze);
        }
    }
}

void solver_2(char **maze_array, maze_t *maze, int i, int j)
{
    if ((j < maze->width - 1) && (maze_array[i][j] == '*'
    && maze_array[i][j + 1] == '*')) {
        linked(maze, maze_array, i, j + 1);
    } else if ((i < maze->height - 1) && (maze_array[i][j] == '*'
    && maze_array[i + 1][j] == '*')) {
        linked(maze, maze_array, i + 1, j);
    } else if (maze_array[i][j] == '*' && maze_array[i - 1][j])
        linked(maze, maze_array, i - 1, j);
}

void solver(char **maze_array, maze_t *maze)
{
    int i = 0;
    int j = 0;

    maze->save = malloc(sizeof(save_t) * (maze->m));
    for (i = 0; i < maze->height; i++) {
        for (j = 0; j < maze->width; j++) {
            solver_2(maze_array, maze, i, j);
        }
    }
}

void display_maze_solve_2(char **maze_array, maze_t *maze, int i, int j)
{
    for (int k = 0; k < maze->i_save; k++) {
        if (i == maze->save[k].y && j == maze->save[k].x) {
            maze_array[i][j] = 'o';
        }
    }
}

void display_maze_solve(char **maze_array, maze_t *maze)
{
    for (int i = 0; i < maze->height; i++) {
        for (int j = 0; j < maze->width; j++) {
            maze_array[0][0] = 'o';
            display_maze_solve_2(maze_array, maze, i, j);
            printf("%c", maze_array[i][j]);
        }
    }
}
