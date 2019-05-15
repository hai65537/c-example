#include <stdio.h>

#define M 3
#define N 4

int main(void) {
  int a[M][N];

  // Place `display` into the same loop as `assign`
  for (int i = 0; i < M; ++i) {
    for (int j = 0; j < N; ++j) {
      // `assign`
      a[i][j] = 10 * i + j;

      // `display`
      if (j) {
        printf("  ");
      }
      printf("%2d", a[i][j]);
    }
    putchar('\n');
  }

  return 0;
}
