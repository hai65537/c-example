#include <stdio.h>

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

void add(int n, float *x, float *o) {
  for (int i = 0; i < n; ++i) {
    o[i] += x[i];
  }
}

int main(void) {
  float x[] = {0, 1, 2, 3, 4, 5};
  float y[] = {1, 1, 2, 3, 5, 8};
  print_oct(2, 3, x, "x");
  print_oct(2, 3, y, "y");
  add(6, x, y);
  print_oct(2, 3, y, "y");
  return 0;
}
