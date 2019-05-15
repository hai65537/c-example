#include <limits.h>
#include <stdio.h>

int main(void) {
  int x[] = {4, 1, 8, 2, 9};

  for (int i = 0; i < 5; ++i) {
    printf("x[%d]=%d\n", i, i[x]); // i[x] == x[i]
  }

  int range = INT_MIN;
  for (int i = 0; i < 5; ++i) {
    if (x[i] > range) {
      range = i[x]; // i[x] == x[i]
    }
  }

  printf("max=%d\n", range);
  return 0;
}
