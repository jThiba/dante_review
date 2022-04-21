/*
** EPITECH PROJECT, 2022
** strlen
** File description:
** strlen
*/

#include "prototype.h"
#include "struct.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}
