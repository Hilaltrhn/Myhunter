/*
** EPITECH PROJECT, 2024
** B-MUL-100-NCE-1-1-myhunter-hilal.tarhan
** File description:
** handle_h.c
*/

#include "../includes/my.h"

int handle_h(int argc, char **argv)
{
    if (argc != 2) {
        return 0;
    }
    if (argv[1][0] == '-' && argv[1][1] == 'h' && argv[1][2] == '\0') {
        write(1, "Winx Club: Hunter Game - Help\n", 30);
        write(1, "Welcome to the Winx Club-themed hunter game!\n", 45);
        write(1, "In this game, you play as a hero trying to stop Icy.\n", 54);
        write(1, "Your goal is to shoot Icy as she flies across the screen.\n",
        59);
        write(1, "Game Objective:\n", 17);
        write(1, "-Shoot Icy, the villain,to stop her from causing trouble.\n",
        59);
        write(1, "Available User Inputs:\n", 23);
        write(1, "-h : Display this help message.\n", 33);
        write(1, "Tips:\n", 6);
        write(1, "- Don't let Icy escape,", 23);
        write(1, "as she will continue flying and causing chaos!\n", 47);
        return 1;
    }
    return 0;
}
