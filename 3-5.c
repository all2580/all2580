#include <stdbool.h>
#include <stdio.h>
#define N 5

bool Is_reshuffle(int str[]) {
  int counter = 0;
  for (int i = 1; i < N + 1; i++) {
    for (int j = 0; j < N; j++) {
      if (str[j] == i) {
        counter++;
      }
    }
    if (counter != 1) {
      return false;
    }
    counter = 0;
  }

  return true;
}

int main(void) {
  int arr[N][N];
  int count = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < N; i++) {
    if (Is_reshuffle(arr[i])) {
      count++;
    }
  }

  printf("%d", count);
  return 0;
}
