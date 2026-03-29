#include <stdio.h>

int main(void) {
  int i;
  char *ptr[4] = { {"Korea"}, {"Seoul"}, {"Mapo"}, {"152번지 2/3"} };
  for (i = 0; i <4; i++){
    printf("\n %s", ptr[i]);
  }
  printf("\n");
  ptr[2] = "Jongno";
  for (i = 0; i <4; i++){
    printf("\n %s", ptr[i]);
  }
  
  return 0;

}