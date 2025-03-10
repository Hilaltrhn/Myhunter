/*
** EPITECH PROJECT, 2024
** B-MUL-100-NCE-1-1-myhunter-hilal.tarhan
** File description:
** main.c
*/
#include "../includes/my.h"

void init_flying_sprite(sfSprite **fly, sfTexture **fly_tex, sfIntRect *rect,
    sfVector2f *pos)
{
    *fly_tex = sfTexture_createFromFile("trix sprite.png", NULL);
    *fly = sfSprite_create();
    rect->left = 0;
    rect->top = 0;
    rect->width = 360;
    rect->height = 183;
    pos->x = 0;
    pos->y = 0;
    sfSprite_setTexture(*fly, *fly_tex, sfTrue);
    sfSprite_setTextureRect(*fly, *rect);
    sfSprite_setPosition(*fly, *pos);
    sfSprite_setScale(*fly, (sfVector2f){-0.8, 0.8});
}

void update_flying_sprite(sfSprite *fly, sfIntRect *rect, sfVector2f *pos,
    sfClock *clock)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.1f) {
        rect->left += 360;
        if (rect->left >= 360 * 5)
            rect->left = 0;
        sfSprite_setTextureRect(fly, *rect);
        sfClock_restart(clock);
    }
    pos->x += 0.5f;
    if (pos->x > 2080){
        pos->x = -360;
        pos->y = rand() % 540;
    }
    sfSprite_setPosition(fly, *pos);
}

void destroy_sprites(sfSprite *sprite, sfSprite *fly, sfTexture *texture,
    sfTexture *fly_tex)
{
    sfClock *clock = sfClock_create();

    sfSprite_destroy(sprite);
    sfSprite_destroy(fly);
    sfTexture_destroy(texture);
    sfTexture_destroy(fly_tex);
    sfClock_destroy(clock);
}

void draw_game(sfRenderWindow *window, sfSprite *sprite, sfSprite *fly)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_drawSprite(window, fly, NULL);
    sfRenderWindow_display(window);
}

int check_sprite_click(sfRenderWindow *window, sfSprite *fly)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);
    sfFloatRect bounds = sfSprite_getGlobalBounds(fly);

    return (sfFloatRect_contains(&bounds, mouse_pos.x, mouse_pos.y) &&
    sfMouse_isButtonPressed(sfMouseLeft));
}
