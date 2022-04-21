/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "struct.h"
#include "prototype.h"

static char **meme_malloc(maze_t *maze)
{
    char **mem_array;
    int i;

    mem_array = malloc(sizeof(char *) * maze->height + 1);
    for (i = 0; i < maze->height; i++)
        mem_array[i] = malloc(sizeof(char) * maze->width + 1);
    return (mem_array);
}

static void initialize(maze_t * maze, char **av)
{
    maze->width = atoi(av[1]);
    maze->height = atoi(av[2]);
    maze->random.r_h = rand() % maze->height;
    maze->random.r_w = rand() % maze->width;
    maze->random.r_hole = rand() % maze->height;
    maze->random.r_hole_2 = rand() % maze->width;
    maze->maze = meme_malloc(maze);
}

static int error(int ac)
{
    if (ac == 1)
        return (84);
    return (0);
}

int main(int ac, char **av)
{
    srand(time(NULL));
    maze_t maze;
    if (error(ac) == 84)
        return (84);
    initialize(&maze, av);
    if (ac == 4 && strcmp(av[3], "perfect") == 0)
        perfect_maze(&maze);
    else
        imperfect_maze(&maze);
       return (0);
}
