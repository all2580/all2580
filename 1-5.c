#include <stdio.h>

int main(void) {
 int n, count ;
  scanf("%d",&n );
  for (int i =2; i<=n; i++ ){
    count=1;
    for (int j=2; j<(i/2)+1 ; j++){
        if (i%j == 0){
          count=0;
        }
    }
    if (count==1){
      printf("%d " , i);
    }
  }

  return 0;
}
