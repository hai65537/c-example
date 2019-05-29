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

void mul(int m, int n, float *x, float *A, float *o) {
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 1; ++j) {
      o[i * 1 + j] = 0;
      for (int k = 0; k < 3; ++k) {
        o[i * 1 + j] += A[i * 3 + k] * x[k * 1 + j];
      }
    }
  }
}

int main(void) {
  float A[] = {1, 2, 3, 4, 5, 6};
  float x[] = {2, 3, 5};
  float o[2];
  mul(2, 3, x, A, o);
  print_oct(2, 3, A, "A");
  print_oct(3, 1, x, "x");
  print_oct(2, 1, o, "o");
  return 0;
}
