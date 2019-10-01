#include <stdio.h>

double power(double x, int n) {

  if (n > 0 && n % 2 != 0) {
    return x * power(x, n - 1);
  } else if (n > 0 && n % 2 == 0) {
    return power(x, n / 2) * power(x, n / 2);
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
