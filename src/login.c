#include "login.h"

int login(char* name) {
  for(int i = 0; i < (sizeof(users)/sizeof(users[0])); i++){
    if (users[i] == name){
      return 1;
    }
  }
  return 0;
}
