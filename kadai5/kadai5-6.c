#include <stdio.h>

int main(void) {
  float x = 1;
  for (int i = 0; i < 10; ++i) {
    x -= 1.0 / 3;
    if (x < 0) {
      break;
    }
    printf("%f\n", x);
  }
  return 0;
}
