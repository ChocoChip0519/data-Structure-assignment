#include <stdio.h>

int main(void) {
  int i,j,k;
  char student[2][3][20];

  for (i = 0; i < 2; i++){
    printf("\n 학생 %d의 이름 : ", i + 1);
    gets(student[i][0]);
    printf("\n 학생 %d의 학과 : ", i + 1);
    gets(student[i][1]);
    printf("\n 학생 %d의 학과 : ", i + 1);
    gets(student[i][2]);
  }

  for(i = 0; i < 2; i ++){
    printf("학생%d \n", i + 1);
      for(j = 0; j < 3; j++){
        // printf("  %c \n", student[i][j][20]);
        for (k = 0; student[i][j][k] != '\0'; k++) {
          printf("  %c \n", student[i][j][k]);
        }
    }
  }
  return 0;
}