#include <stdio.h>

unsigned char invert(unsigned char x, unsigned char p, unsigned char n) {

  //printf(" %hhu", x);

  if (p > 7 || n <= 0)
    return x;
  
  unsigned char new_x = x ^ (1 << p);
  return invert(new_x, p+1, n-1);
}
int main(void) {
  unsigned char x, p, n;
 
  scanf("%hhu %hhu %hhu", &x, &p, &n);

  printf("  %hhu ", invert(x, p, n));

  return 0;
}
