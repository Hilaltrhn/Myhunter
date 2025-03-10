/*
** EPITECH PROJECT, 2024
** B-MUL-100-NCE-1-1-myhunter-hilal.tarhan
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
    #include <SFML/Graphics/Export.h>
    #include <SFML/Graphics/Color.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/Graphics/Types.h>
    #include <SFML/Graphics/PrimitiveType.h>
    #include <SFML/Graphics/RenderStates.h>
    #include <SFML/Graphics/Vertex.h>
    #include <SFML/Window/Event.h>
    #include <SFML/Window/VideoMode.h>
    #include <SFML/Window/WindowHandle.h>
    #include <SFML/Window/Window.h>
    #include <SFML/System/Vector2.h>
    #include <stddef.h>
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <time.h>

void init_flying_sprite(sfSprite **fly, sfTexture **fly_tex, sfIntRect *rect,
    sfVector2f *pos);
void update_flying_sprite(sfSprite *fly, sfIntRect *rect, sfVector2f *pos,
    sfClock *clock);
void destroy_sprites(sfSprite *sprite, sfSprite *fly, sfTexture *texture,
    sfTexture *fly_tex);
void draw_game(sfRenderWindow *window, sfSprite *sprite, sfSprite *fly);
int check_sprite_click(sfRenderWindow *window, sfSprite *fly);
void create_gameloop(sfRenderWindow *window, sfClock *clock);
void create_window(sfRenderWindow **window);
void close_window(sfRenderWindow *window, sfEvent event);
int main(int argc, char **argv);
int handle_h(int argc, char **argv);
#endif /* MY_H_ */
