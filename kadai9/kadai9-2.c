#include <stdio.h>
#include <stdlib.h>

#define SWAP(_T, a, b) \
  do { \
    _T __tmp = a; \
    a = b; \
    b = __tmp; \
  } while (0)

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

void sort(int n, float *data) {
  for (int i = 0; i < n; ++i) {
    for (int j = 1; j < n - i; ++j) {
      if (data[j] < data[j - 1]) {
        SWAP(float, data[j], data[j - 1]);
      }
    }
  }
}

void shuffle(int n, int *x) {
  for (int i = 0; i < n; ++i) {
    int idx = rand() / (RAND_MAX + 1.0) * n;
    SWAP(int, x[i], x[idx]);
  }
}

int main(int argc, char **argv) {
  int n = 0;
  if (argc > 1) {
    n = atoi(argv[1]);
  }

  float *x = malloc(n * sizeof(float));
  rand_init(n, x);
  print(n, x);
  sort(n, x);
  print(n, x);

  int *idx = malloc(n * sizeof(int));
  for (int i = 0; i < n; ++i) {
    idx[i] = i;
  }
  shuffle(n, idx);

  for (int i = 0; i < n; ++i) {
    printf(" %.4f", x[idx[i]]);
  }
  putchar('\n');

  free(x);
  free(idx);
  return 0;
}
