#include <stdio.h>
#include <stdlib.h>
#include "login.h"

void randomNumber() {
  int rand = random();
  printf("%d\n", rand);
  return;
}

int main(int argc, char *argv[]) {
  printf("Users: ");
  for (int i = 0; i < (sizeof(users) / sizeof(users[0])); i++) {
    printf("%s \t", users[i]);
  }
  printf("\n");
  return 0;
}
