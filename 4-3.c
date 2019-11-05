#include <stdio.h>

int str_len(const char str[]) {
  int len = 0;
  while (str[len] != '\0') {
    len++;
  }
  return len;
}

int _atoi(const char *str, int *out) {
  int len = str_len(str);
  int first_num = 0;

  if (str[0] < 48 || str[0] > 57) {
    if (str[0] != 43 && str[0] != 45) {
      return -1;
    } else {
      first_num = 1;
    }
  }

  for (int i = 1; i < len; i++) {
    if (str[i] < 48 || str[i] > 57) {
      return -1;
    }
  }

  *out = 0;
  for (int i = first_num; i < len; i++) {
    *out = (*out) * 10 + str[i] - 48;
    // printf("%d ", *out);
  }
  if (str[0] == 45) {
    *out = -*out;
  }
  return 0;
}

int main(void) {
  char str[] = "r324";
  int res = 0;
  int val = _atoi(str, &res);
  printf("%s %d %d", str, val, res);
  return 0;
}
