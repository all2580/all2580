#include <stdio.h>

double unsigned_power(double x, int n) {

  if (n > 0 && n % 2 != 0) {
    return x * unsigned_power(x, n - 1);
  } else if (n > 0 && n % 2 == 0) {
    return unsigned_power(x, n / 2) * unsigned_power(x, n / 2);
  } else {
    return 1;
  }
}
double power (double x, int n){
  if (n >= 0) {
    return  unsigned_power( x, n);
  } else {
    return 1/ unsigned_power( x, -n);
  }
}

int main(void) {
  double x;
  int n;
  scanf("%lf %d", &x, &n);

  printf("%lf", power(x, n));
  return 0;
}

