#include <stdio.h>
#include <stdlib.h>

void print(int m, int n, float *src) {
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      printf(" %.3f", src[i * n + j]);
    }
    putchar('\n');
  }
}

void load(char *fname, int m, int n, float *A, float *b) {
  FILE *fp = fopen(fname, "rb");
  if (!fp) {
    perror(fname);
    exit(1);
  }

  fread(A, sizeof(float), m * n, fp);
  fread(b, sizeof(float), m, fp);

  fclose(fp);
}

int main(int argc, char **argv) {
  int m = 0;
  int n = 0;
  if (argc > 2) {
    m = atoi(argv[1]);
    n = atoi(argv[2]);
  }

  float *A = malloc(m * n * sizeof(float));
  float *b = malloc(m * sizeof(float));

  load("test.dat", m, n, A, b);
  print(m, n, A);
  print(m, 1, b);

  free(A);
  free(b);
  return 0;
}
