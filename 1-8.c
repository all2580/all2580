#include <stdio.h>
#include <math.h>

int main(void) {
  float a,b,c,x1,x2;
  scanf("%f %f %f" ,&a,&b,&c);
  if (a==0){
    x1= -c/b;
    printf ("%f", x1);
  }
  else{
    float d= b*b -4*a*c;
    if (d>=0){
      x1= (sqrtf( d )-b)/(a*2);
      x2= (-sqrtf ( d )-b)/(a*2);
      printf("%f %f",x1, x2);
    }
    
    else{
       printf ("no roots");
    }
  }
  return 0;
}
