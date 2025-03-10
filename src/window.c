/*
** EPITECH PROJECT, 2024
** B-MUL-100-NCE-1-1-myhunter-hilal.tarhan
** File description:
** window.c
*/

#include "../includes/my.h"

void create_window(sfRenderWindow **window)
{
    sfVideoMode mode = {1920, 1080, 32};

    *window = sfRenderWindow_create(mode, "my_hunter",
    sfResize | sfClose, NULL);
}

void close_window(sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        }
}
