/*
** EPITECH PROJECT, 2022
** strdup
** File description:
** strdup
*/

#include "prototype.h"
#include "struct.h"

char *my_strdup(char const *src)
{
    char *new_src = NULL;
    int len = my_strlen(src);
    int i = 0;

    new_src = malloc(sizeof(char) * (len + 1));
    while (src[i] != '\0') {
        new_src[i] = src[i];
        i++;
    }
    new_src[i] = '\0';
    return (new_src);
}
