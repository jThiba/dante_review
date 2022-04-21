/*
** EPITECH PROJECT, 2022
** file_open
** File description:
** file_open
*/

#include "prototype.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

static char **alloc_lines(char **lines, char *new_line, int nb_lines)
{
    char **result = malloc(sizeof(char *) * (nb_lines + 1));
    int i = 0;

    if (result == NULL)
        return NULL;
    if (lines != NULL) {
        for (i = 0; i < nb_lines - 1; i++) {
            result[i] = my_strdup(lines[i]);
        }
    }
    result[i] = my_strdup(new_line);
    return (result);
}

char **load_file_in_mem(char const *filepath)
{
    size_t size = 0;
    ssize_t count;
    FILE *handle;
    int x = 1;
    char *buffer = NULL;
    char **lines = NULL;

    handle = fopen(filepath, "r");
    if (handle == NULL)
        return NULL;
    while ((count = getline(&buffer, &size, handle)) != -1) {
        lines = alloc_lines(lines, buffer, x);
        x++;
    }
    lines[x - 1] = NULL;
    free(buffer);
    fclose(handle);
    return (lines);
}
