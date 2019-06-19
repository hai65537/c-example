#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

void print(int n, float *src) {
  for (int i = 0; i < n; ++i) {
    printf(" %.4f", src[i]);
  }
  putchar('\n');
}

void rand_init(int n, float *dest) {
  for (int i = 0; i < n; ++i) {
    dest[i] = rand() / (double)RAND_MAX * 2 - 1;
  }
}

void softmax(int n, float *x, float *y) {
  float tmp = 0;
  for (int i = 0; i < n; ++i) {
    tmp += exp(x[i]);
  }
  for (int i = 0; i < n; ++i) {
    y[i] = exp(x[i]) / tmp;
  }
}

int main(int argc, char **argv) {
  int n = 0;
  if (argc > 1) {
    n = atoi(argv[1]);
  }

  float *x = malloc(n * sizeof(float));
  float *y = malloc(n * sizeof(float));
  rand_init(n, x);
  print(n, x);
  softmax(n, x, y);
  print(n, y);

  free(x);
  free(y);
  return 0;
}
