#include <stdio.h>

int main(void) {
  int sum = 0;

  for (int x = 0; x < 100; ++x) {
    sum += x % 3 ? x : 0;
  }

  printf("sum=%d\n", sum);
  return 0;
}
