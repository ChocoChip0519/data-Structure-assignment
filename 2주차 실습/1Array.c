#include <stdio.h>

int main(void) {
  int i, length;
  char str[50];

  printf("문자열을 입력하세요: ");
  gets(str);
  printf("\n입력된 문자열은 \n");
  for(i = 0; str[i]; i++){
  printf("%c",str[i]); 
  length ++; 
  }
  printf("\n입니다. \n");

  printf("입력된 문자열의 길이 = %d \n", length);

  return 0;
}