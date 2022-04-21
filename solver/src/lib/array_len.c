/*
** EPITECH PROJECT, 2022
** calcul_len
** File description:
** calcul_len
*/

#include "prototype.h"
#include "struct.h"

int array_len(char **array)
{
    int i = 0;

    for (i = 0; array[i] != NULL; i++);
    return (i);
}
