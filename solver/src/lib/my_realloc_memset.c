/*
** EPITECH PROJECT, 2022
** realloc
** File description:
** realloc
*/

#include "struct.h"
#include "prototype.h"

void my_realloc_memset(maze_t *maze)
{
    save_t *tmp = malloc(sizeof(save_t) * maze->m);

    for (int i = 0; i < maze->m - 1; i++) {
        tmp[i].y = maze->save[i].y;
        tmp[i].x = maze->save[i].x;
    }
    free(maze->save);
    maze->save = tmp;
}
