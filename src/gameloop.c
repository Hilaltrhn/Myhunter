/*
** EPITECH PROJECT, 2024
** B-MUL-100-NCE-1-1-myhunter-hilal.tarhan
** File description:
** gameloop.c
*/

#include "../includes/my.h"

void create_gameloop(sfRenderWindow *window, sfClock *clock)
{
    sfEvent event;
    sfTexture *texture = sfTexture_createFromFile("alfeaschoolpix.png", NULL);
    sfSprite *sprite = sfSprite_create(), *fly;
    sfTexture *fly_tex;
    sfIntRect rect;
    sfVector2f scale = {1.6, 1.6}, pos;

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    init_flying_sprite(&fly, &fly_tex, &rect, &pos);
    while (sfRenderWindow_isOpen(window)) {
        if (check_sprite_click(window, fly)) {
            pos.x = -360;
            pos.y = rand() % 540;
            }
        close_window(window, event);
        update_flying_sprite(fly, &rect, &pos, clock);
        draw_game(window, sprite, fly);
    }
    destroy_sprites(sprite, fly, texture, fly_tex);
}
