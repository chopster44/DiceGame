#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// all existing users
char *users[5] = { "Osc", "Set", "Adi", "Arc", "Dan" };

int verifyUser(char* name) {
  for(int i = 0; i < 5; i++){
    char *nameChecked = users[i];	
    if (!strcmp(name, nameChecked)){
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

void randomNumber() {
  int rand = random();
  printf("%d\n", rand);
  return;
}

int main(int argc, char *argv[]) {
  system("clear");	
  char *players[2] = { malloc(sizeof(char)*3), malloc(sizeof(char)*3)};
  printf("Welcome to Dice game!\n");
  printf("Who is playing?\n Player 1: ");
  login(0, players);
  printf("Player2: ");
  login(1, players);
  printf("Player1: %s, Player2: %s\n", players[0], players[1]);
  return 0;
}
