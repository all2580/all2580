#include <stdio.h>

int main(void) {
 int sum, n;
  scanf("%d",&n );
  sum=0;
  while (n>0){
    sum+= n%10;
    n/=10;
  }
  printf( "%d" , sum);
  return 0;
}
