#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char* ptr = malloc(sizeof(char) * 10);
  printf("Enter up to 10 chars");
  scanf("%s", ptr);
  printf("%s \n", ptr);
  printf("Hello, World!");
  free(ptr);
  return 0;
}
