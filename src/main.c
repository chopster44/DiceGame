#include "login.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void randomNumber() {
  int rand = random();
  printf("%d\n", rand);
  return;
}

void cls() { system("clear"); }

int main(int argc, char *argv[]) {
  cls();
  char *players[2] = {malloc(sizeof(char) * 3), malloc(sizeof(char) * 3)};
  printf("Welcome to Dice game!\n");
  printf("Who is playing?\n Player 1: ");
  login(0, players);
  printf("Player2: ");
  login(1, players);
  printf("Player1: %s, Player2: %s\n", players[0], players[1]);
  printf("Begin? ");
  char *temp = malloc(sizeof(char));
  scanf("%s", temp);
  if (strcmp(temp, "")) {
    free(players[0]);
    free(players[1]);
    free(temp);
    return 0;
  }
  cls();
  free(temp);
  free(players[0]);
  free(players[1]);
  return 0;
}
