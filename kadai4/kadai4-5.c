#include <assert.h>
#include <limits.h>
#include <stdio.h>

/**
 * return an integer in range [0, 12]
 */
static int input(void) {
  int n = INT_MIN;
  printf("n = ");
  while (scanf("%d", &n) != 1 || n < 0 || n > 12) {
    scanf("%*[^\n]");
    getchar();
    fprintf(stderr, "Invalid input\n");
    printf("n = ");
  }
  return n;
}

/**
 * return n!
 */
static int fact(int n) {
  // n! is not defined if n is negative
  // n! > INT_MAX if n > 12
  if (n < 0 || n > 12) {
    abort();
  }

  // 0! = 1
  if (!n) {
    return 1;
  }

  int prod = n;
  for (; --n; prod *= n) {
  }
  return prod;
}

/**
 * return n!/(n-r)!
 */
static int perm(int n, int r) {
  if (r < 0 || n < r) {
    abort();
  }
  return fact(n) / fact(n - r);
}

int main(void) {
  int n = input();

  for (int i = 0; i <= n; ++i) {
    printf("perm(%d,%d) = %d\n", n, i, perm(n, i));
  }
  return 0;
}
