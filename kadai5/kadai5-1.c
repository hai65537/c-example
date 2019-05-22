#include <stdio.h>
#include <stdlib.h>

static int C(int n, int r) {
  if (n <= 0 || n < r) {
    abort();
  } else if (n == r || r == 0) {
    return 1;
  } else if (r == 1) {
    return n;
  } else {
    return C(n - 1, r - 1) + C(n - 1, r);
  }
}

int main(void) {
  int n, r;

#define SCAN_A_NUM(var) \
  do { \
    while (scanf("%d", &var) != 1) { \
      scanf("%*[^\n]"); \
      getchar(); \
      if (feof(stdin)) { \
        abort(); \
      } \
      printf(#var " = "); \
    } \
  } while (0)

  printf("n = ");
  SCAN_A_NUM(n);
  printf("r = ");
  SCAN_A_NUM(r);

#undef SCAN_A_NUM

  printf("C(n,r)=%d\n", C(n, r));
  return 0;
}
