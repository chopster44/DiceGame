#include <stdio.h>
#include <stdlib.h>
#include "login.h"

// all existing users
void randomNumber() {
  int rand = random();
  printf("%d\n", rand);
  return;
}

int main(int argc, char *argv[]) {
  system("clear");
  char *players[2] = {malloc(sizeof(char) * 3), malloc(sizeof(char) * 3)};
  printf("Welcome to Dice game!\n");
  printf("Who is playing?\n Player 1: ");
  login(0, players);
  printf("Player2: ");
  login(1, players);
  printf("Player1: %s, Player2: %s\n", players[0], players[1]);
  free(players[0]);
  free(players[1]);
  return 0;
}
