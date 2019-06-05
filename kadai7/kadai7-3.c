#include <stdio.h>
#include <stdlib.h>

void inc(int *n) { ++*n; }

int main(void) {
  int n;
  printf("input a digit: ");
  if (scanf("%d", &n) != 1) {
    abort();
  }
  inc(&n);
  printf("output: %d\n", n);
  return 0;
}
