#include <stdio.h>

int main(void) {
  int i,j,k;
  int array[2][3][4];

  for(i = 0; i < 2; i++){
    for(j = 0; j < 3; j++){
      for(k =0; k < 4; k++){
        printf("array[%d][%d][%d] =", i, j, k);
        scanf("%d",&array[i][j][k]);
      }
    }
  }

  for(i = 0; i < 2; i++){
    for(j = 0; j < 3; j++){
      for(k =0; k < 4; k++){
        printf("array[%d][%d][%d] = %d \n", i, j, k, array[i][j][k]);
      }
    }
  }

  return 0;
}