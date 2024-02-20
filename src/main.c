#include "login.h"
#include "gameplay.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cls() { system("clear"); }

int main(int argc, char *argv[])
{
    cls();
    char *players[2] = {malloc(sizeof(char) * 3), malloc(sizeof(char) * 3)};
    int *score[2] = {malloc(sizeof(int)), malloc(sizeof(int))};
    printf("Welcome to Dice game!\n");
    printf("Who is playing?\n Player 1: ");
    login(0, players);
    printf("Player2: ");
    login(1, players);
begin:
    printf("Player1: %s, Player2: %s\n", players[0], players[1]);
    printf("Begin? [y/n] ");
    char *temp = malloc(sizeof(char));
    scanf("%s", temp);
    if (!strcmp(temp, "n"))
    {
        printf("Quiting\n");
        free(temp);
        free(players[0]);
        free(players[1]);
        return 0;
    }
    else if (!strcmp(temp, "y"))
    {
        goto game;
    }
    else
    {
        printf("Unknown char, try again\n");
        goto begin;
    }
game:
    cls();
    // game loop
    int *rolls[2] = {malloc(sizeof(int)), malloc(sizeof(int))};
    int *tempInt = malloc(sizeof(int));
    *rolls[0] = 0;
    *rolls[1] = 0;
    for (int i = 1; i < 6; i++) {
        printf("Round %d:\n:", i);
        *rolls[0] = randomNumber(6);
        *tempInt = calculateScore(rolls[0]);
        *score[0] += *tempInt;
        printf("Player 1 rolled a %d, scoring %d\n", *rolls[0], *tempInt);
        *rolls[1] = randomNumber(6);
        *tempInt = calculateScore(rolls[1]);
        *score[1] += *rolls[1];
        printf("Player 2 rolled a %d, scoring %d\n", *rolls[1], *tempInt);
        if (*rolls[0] > *rolls[1]) {
            printf("Player 1 won!\n");
        } else if (*rolls[0] == *rolls[1]) {
            printf("It was a draw!\n");
        } else {
            printf("Player 2 won\n");
        }
        printf("Continue? [y/n]:");
        char *temp = malloc(sizeof(char));
        scanf("%s", temp);
        if (!strcmp(temp, "y")) {
            free(temp);
            continue;
        } else {
            printf("Quitting");
            goto finish; 
        }
    }
finish: 
    printf("Player 1 scored %d and Player 2 scored %d\n Quitting", *score[0], *score[1]);
    free(temp);
    free(players[0]);
    free(players[1]);
    free(score[0]);
    free(score[1]);
    return 0;
}
