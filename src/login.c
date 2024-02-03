#include "login.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *users[5] = {"Osc", "Set", "Adi", "Arc", "Dan"};

int verifyUser(char *name) {
  for (int i = 0; i < 5; i++) {
    char *nameChecked = users[i];
    if (!strcmp(name, nameChecked)) {
      return 1;
    }
  }
  return 0;
}

void login(int playerNum, char *players[]) {
  char *playerTemp = malloc(sizeof(char) * 3);
  scanf("%s", playerTemp);
  if (!verifyUser(playerTemp)) {
    printf("%s, is not a registerd player\nTry again: ", playerTemp);
    free(playerTemp);
    login(playerNum, players);
  } else {
    printf("Welcome %s %d\n", playerTemp, playerNum);
    strncpy(players[playerNum], playerTemp, 3);
    free(playerTemp);
    return;
  }
}
