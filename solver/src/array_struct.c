/*
** EPITECH PROJECT, 2022
** array_struct
** File description:
** array_struct
*/

#include "struct.h"
#include "prototype.h"

static int count_stars(int stars, char c)
{
    if (c == '*')
        stars++;
    return (stars);
}

static void mem_alloc(char **maze_array, maze_t *maze)
{
    int stars = 0;

    for (int i = 0; maze_array[i] != NULL; i++) {
        for(int j = 0; maze_array[i][j] != '\0'; j++) {
            stars = count_stars(stars, maze_array[i][j]);
        }
    }
    maze->nbr_stars = stars;
    maze->coords = malloc(sizeof(coords_t) * maze->nbr_stars);
}

void initialize_coord(char **maze_array, maze_t *maze)
{
    int s = 0;

    mem_alloc(maze_array, maze);
    for (int i = 0; maze_array[i] != NULL; i++) {
        for (int j = 0; maze_array[i][j] != '\0'; j++) {
            if (maze_array[i][j] == '*') {
                maze->coords[s].y = i;
                maze->coords[s].x = j;
                maze->coords[s].f = 0;
                s++;
            }
        }
    }
}
