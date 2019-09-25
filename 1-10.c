#include <stdio.h>

const int N =10;

int main(void) {
  int a [N];
  
  for(int i=0; i<N; i++ ){
    scanf("%d", &a[i]);
  }

  int current=1;
  int max=1;

  for(int i=1; i<N; i++ ){
    if (a[i]== a[i-1]){
      current+=1;
    }
    else{
      current= 1;
    }
    
    if(current>max){
      max= current;
    }
    
    
  }

  printf("%d",max);

  return 0;
}
