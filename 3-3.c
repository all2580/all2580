#include "stdio.h"

#define M 3
#define N 3

int diag_sum (int matrix [][N], int str_shift){
  int sum =0;
  for (int i=0; i<N; i++){
      sum+= matrix[ i + str_shift][i];
  }
  return sum;
}

int main(void) {
  int A [M][N];
  int max;

  for (int i=0; i<N; i++){
    for (int j=0; j<N; j++){
      scanf ("%d", &A[i][j]);
    }
  }
  
  if (diag_sum(A,0) > diag_sum(A,-(N-1))){
    max = diag_sum(A,0);
  } else {
    max =diag_sum(A,-(N-1));
  }
  printf("%d", max);
  
  return 0;
}
