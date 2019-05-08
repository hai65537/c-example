#include <stdio.h>

int main(void) {
  for (int i = 0; i < 10; ++i) {
    for (int j = i; j < 10; ++j) {
      if (j != i) {
        putchar(' ');
      }
      printf("%d", j);
    }
    putchar('\n');
  }
  return 0;
}
