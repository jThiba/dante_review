/*
** EPITECH PROJECT, 2022
** prototype
** File description:
** prototype
*/

#ifndef PROTOTYPE
    #define PROTOTYPE

    #include "struct.h"
    #include <time.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define HORIZONTAL 1
    #define VERTICAL 2
    #define S 1
    #define E 2

/*lib*/

char *my_strdup(char const *src);
int my_strlen(char const *str);
void my_realloc_memset(maze_t *maze);

/*=========*/


/*generator*/

void div_maze(maze_t *maze);
void display_maze(maze_t *maze, int i, int j);
void conditions_perfect(maze_t *maze, int i, int j);
void imperfect_maze(maze_t *maze);
void conditions_imperfect(maze_t *maze, int i, int j);
void perfect_maze(maze_t *maze);
void initialize_coord(char **maze_array, maze_t *maze);
void initialize_size(maze_t *maze, char **maze_array);
int my_strlen(char const *str);
int array_len(char **array);
char **load_file_in_mem(char const *filepath);

/*=========*/

/*solver*/

void solver(char **maze_array, maze_t *maze);
void maze_solved(char **maze_array, maze_t *maze);
void display_maze_solve(char **maze_array, maze_t *maze);

/*=========*/

#endif
