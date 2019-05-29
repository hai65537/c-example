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

int main(int argc, char const *argv[]) {
  float m[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  print_oct(3, 4, m, "m");
  return 0;
}
