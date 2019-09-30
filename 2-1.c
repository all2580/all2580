#include <stdio.h>

unsigned char invert(unsigned char x, unsigned char p, unsigned char n) {

  printf(" %hhu", x);

  if (p > 7) {
    return x;
  } else if (n > 0) {
    x = x ^ (1 << (p));
    n--;
    p++;
    return invert(x, p, n);
  } else {
    return x;
  }
}

int main(void) {
  unsigned char x;
  unsigned char p;
  unsigned char n;
  scanf("%hhu %hhu %hhu", &x, &p, &n);

  printf("  %hhu ", invert(x, p, n));

  return 0;
}

