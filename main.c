#include <stdio.h>
#include <stdlib.h>

void randomNumber() {
  int rand = random();
  printf("%d\n", rand);
  return;
}

int main(int argc, char *argv[]) {
  char* ptr = malloc(sizeof(char) * 10);
  printf("Enter up to 10 chars");
  scanf("%s", ptr);
  printf("%s \n", ptr);
  printf("Hello, World!");
  free(ptr);
  randomNumber();
  return 0;
}
