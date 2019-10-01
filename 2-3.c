#include <stdio.h>

double power(double x, int n) {

  if (n > 0) {
    return x * power(x, n - 1);
  } else {
    return 1;
  }
}

int main(void) {
  double x;
  int n;
  scanf("%lf %d", &x, &n);

  printf("%lf", power(x, n));
  return 0;
}
