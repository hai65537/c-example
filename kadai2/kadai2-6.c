#include <stdio.h>

int main(void) {
  int x = 9;
  while (x > 0) {
    printf("x=%d\n", x);
    x -= 2;
  }
  return 0;
}
