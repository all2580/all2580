#include "stdio.h"

#define L 2
#define M 3
#define N 2

int main(void) {
  int A [L][M];
  int B [M][N];
  int C [L][N];
  int B_tr [N][M];
  //scan 1 matrix 
  for (int i=0; i<L; i++){
    for (int j=0; j<M; j++){
      scanf ("%d", &A[i][j]);
    }
  }
   for (int i = 0; i < L;i++) {
    printf("\n");
    for ( int j = 0; j < M; j++) {
      printf("%d ", A[i][j]);
    }
  }
  //scan 2 matrix
  for (int i=0; i<M; i++){
    for (int j=0; j<N; j++){
      scanf ("%d", &B[i][j]);
    }
  }
  
  for (int i = 0; i < M;i++) {
    printf("\n");
    for ( int j = 0; j < N; j++) {
      printf("%d ", B[i][j]);
    }
  }
  //transp 2 matrix
  for (int i=0; i<M; i++){
    for (int j=0; j<N; j++){
      B_tr [j][i] = B [i][j];
    }
  }

  //nullify resulring matrix
  for (int i=0; i<L; i++){
    for (int j=0; j<N; j++){
      C[i][j]=0;
    }
  }
 
  

  //composition
  for (int i=0; i<L; i++){
    for (int j=0; j<N; j++){
      for(int k=0; k<M; k++){
        C[i][j]+= A[i][k] * B_tr[j][k];
      }
    }
  }

  //print result 
  for (int i = 0; i < L;i++) {
    printf("\n");
    for ( int j = 0; j < N; j++) {
      printf("%d ", C[i][j]);
    }
  }

  return 0;
}
