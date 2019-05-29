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

void init(int n, float x, float *o) {
  for (int i = 0; i < n; ++i) {
    o[i] = x;
  }
}

int main(void) {
  float y[6];
  print_oct(2, 3, y, "y");
  init(6, 7, y);
  print_oct(2, 3, y, "y");
  return 0;
}
