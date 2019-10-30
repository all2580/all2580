#include "stdio.h"

#define M 3
#define N 3

int oddnes (int* str ){
  for (int i=0; i<N; i++){
    if ((str[i])%2 == 0){
      return 0;
    }
  }
  return 1;
}

int abs_sum (int* str ){
  int sum =0;
  for (int i=0; i<N; i++){
    sum += (str[i]);
  }
  return sum;
}

int main(void) {
  int A [M][N];
  int max=0;

  for (int i=0; i<M; i++){
    for (int j=0; j<N; j++){
      scanf ("%d", &A[i][j]);
    }
  }
  
  for (int i=0; i<M; i++){
    if(oddnes( A[i])){
      if (abs_sum(A[i]) > max ){
        max = abs_sum( A[i]);
      }
    }
  }
  
  printf("%d", max);
  
  return 0;
}
