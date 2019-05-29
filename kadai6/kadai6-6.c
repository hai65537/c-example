#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_oct(int m, int n, float *x, const char *name) {
  printf("%s = [", name);
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      printf(" %.4f", x[i * n + j]);
    }
    puts(";");
  }
  puts("];");
}

void rand_init(int n, float *o) {
  for (int i = 0; i < n; ++i) {
    o[i] = rand() / (double)RAND_MAX * 2 - 1;
  }
}

int main(void) {
  float y[6];
  print_oct(2, 3, y, "y");
  srand(time(NULL));
  rand_init(6, y);
  print_oct(2, 3, y, "y");
  return 0;
}
