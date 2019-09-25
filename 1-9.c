#include <stdio.h>

const int N =10;

int main(void) {
  int a [N];
  
  for(int i=0; i<N; i++ ){
    scanf("%d", &a[i]);
  }

  int max =a[0];
  int min =a[0];
  float everage=0; 

  for(int i=0; i<N; i++ ){
    everage+= a[i];
    if (a[i]>= max ){
      max=a[i];
    }
    else if (a[i]<=min){
      min =a[i];
    }
  }

  everage/=N;
  printf( "%d %d %f", min, max, everage);

  return 0;
}
