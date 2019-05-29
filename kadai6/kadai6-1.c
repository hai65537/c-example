#include <stdio.h>

void print(int m, int n, float *x) {
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      printf(" %.4f", x[i * n + j]);
    }
    putchar('\n');
  }
}

int main(int argc, char const *argv[]) {
  float m[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  print(3, 4, m);
  return 0;
}
