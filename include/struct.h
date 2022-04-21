/*
** EPITECH PROJECT, 2022
** struct
** File description:
** struct
*/

#ifndef STRUCT
    #define STRUCT

typedef struct save_s {
    int x;
    int y;
}save_t;

typedef struct coords_s {
    int x;
    int y;
    int f;
}coords_t;

typedef struct random_s {
    int r_h;
    int r_w;
    int r_hole;
    int r_hole_2;
    int r;
    int r_2;
    int r_x;
}random_t;

typedef struct maze_s {
    char **maze;
    int width;
    int height;
    int nbr_stars;
    int m;
    int i_save;
    random_t random;
    coords_t *coords;
    save_t *save;
}maze_t;

#endif
