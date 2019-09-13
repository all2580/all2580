#include <stdio.h>

int main(void) {
 int x1, x2,temp,n;
  scanf("%d",&n );
  x1=1; x2=1;
 for (int i =0 ; i<n ; i++){
   printf ("%d ", x1);
   temp=x1+x2;
   x1=x2;
   x2=temp;
 }

  
  
  return 0;
}
