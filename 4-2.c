#include <stdio.h>
#include <stdlib.h>

#define ON 1
#define OFF 0

int str_len(char str[]) {
  int len = 0;
  while (str[len] != '\0') {
    len++;
  }
  return len;
}
// void str_copy(char* dest, const char* src);
// char* strdup_(const char* str);

void cap_char(char *x, int turn) {
  if (turn) {
    *x -= 32;
  } else {
    *x += 32;
  }
}

void cap_string(char *str) {
  int len = str_len(str);
  int first_letter_index;

  for (int i = 0; i < len; i++) {
    if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90)) {
      first_letter_index = i;
      break;
    }
  }

  if (str[first_letter_index] >= 97 && str[first_letter_index] <= 122) {
    cap_char(&str[first_letter_index], ON);
  }

  for (int i = first_letter_index + 1; i < len; i++) {
    if (str[i] >= 65 && str[i] <= 90) {
      cap_char(&str[i], OFF);
    }
  }
}

int main(void) {

  char str[] = "bIBA! nuH";

  cap_string(str);
  printf("%s\n", str);
}
