#include <stdio.h>

#define M 3
#define N 4

static int a[M][N];

/**
 * Assign values to `a`, which is global variable.
 * `a` is a matrix which has `M` rows and `N` columns.
 * a_ij = 10i + j
 */
static void assign(void) {
  for (int i = 0; i < M; ++i) {
    for (int j = 0; j < N; ++j) {
      a[i][j] = 10 * i + j;
    }
  }
}

/**
 * Display the matrix `a`.
 */
static void display(void) {
  for (int i = 0; i < M; ++i) {
    for (int j = 0; j < N; ++j) {
      if (j) {
        printf("  ");
      }
      printf("\t%d", a[i][j]);
    }
    putchar('\n');
  }
}

int main(void) {
  assign();
  display();

  return 0;
}
