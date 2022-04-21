/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "prototype.h"
#include "struct.h"
#include <stdio.h>

int main(int ac, char **av)
{
    maze_t maze;
    char **maze_array = load_file_in_mem(av[1]);

    ac = ac;
    initialize_size(&maze, maze_array);
    initialize_coord(maze_array, &maze);
    solver(maze_array, &maze);
    display_maze_solve(maze_array, &maze);
    return (0);
}
