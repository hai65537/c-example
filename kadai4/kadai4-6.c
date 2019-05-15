#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define countof(arr) (sizeof(arr) / sizeof(*arr))

static void hist(int n) {
  int _c[10] = {0};
  srand(time(NULL));
  for (int i = 0; i < n; ++i) {
    // int idx = rand() / (RAND_MAX + 1.0) * countof(_c); ++_c[idx];
    ++_c[(int)(rand() / (RAND_MAX + 1.0) * countof(_c))];
  }

  printf("n=%7d:", n);
  for (int i = 0; i < countof(_c); ++i) {
    printf("%6.1f", _c[i] / (double)n * 100);
  }
  putchar('\n');
}

int main(void) {
  hist(10);
  hist(100);
  hist(1000);
  hist(10000);
  hist(100000);
  hist(1000000);
  return 0;
}
