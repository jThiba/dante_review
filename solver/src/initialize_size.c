/*
** EPITECH PROJECT, 2022
** initialize_size
** File description:
** initialize_size
*/

#include "prototype.h"
#include "struct.h"

void initialize_size(maze_t *maze, char **maze_array)
{
    maze->height = array_len(maze_array);
    maze->width = my_strlen(maze_array[0]);
    maze->m = 1;
    maze->i_save = 0;;
}
