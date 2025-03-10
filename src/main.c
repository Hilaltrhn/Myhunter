/*
** EPITECH PROJECT, 2024
** B-MUL-100-NCE-1-1-myhunter-hilal.tarhan
** File description:
** main.c
*/

#include "../includes/my.h"

int main(int argc, char **argv)
{
    sfRenderWindow *window;
    sfClock *clock;

    if (handle_h(argc, argv)) {
        return 0;
    }
    srand(time(NULL));
    create_window(&window);
    create_gameloop(window, clock);
    sfRenderWindow_destroy(window);
    return 0;
}
