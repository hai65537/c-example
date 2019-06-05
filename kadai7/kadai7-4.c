#include <stdio.h>
#include <stdlib.h>

#define countof(__array) (sizeof(__array) / sizeof(*__array))

void minmax(int *data, int len, int *min, int *max) {
  *min = *max = data[0];
  for (int i = 1; i < len; ++i) {
    if (*min > data[i]) {
      *min = data[i];
    }
    if (*max < data[i]) {
      *max = data[i];
    }
  }
}

int main(void) {
  int n[3];
  printf("input 1st integer: ");
  if (scanf("%d", &n[0]) != 1) {
    abort();
  }
  printf("input 2nd integer: ");
  if (scanf("%d", &n[1]) != 1) {
    abort();
  }
  printf("input 3rd integer: ");
  if (scanf("%d", &n[2]) != 1) {
    abort();
  }

  int min, max;
  minmax(n, countof(n), &min, &max);
  printf("\nmin: %d, max: %d\n", min, max);
  return 0;
}
