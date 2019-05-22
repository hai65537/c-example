#include <stdio.h>
#include <stdlib.h>

static int input(void) {
  int n;
  printf("n = ");
  while (scanf("%d", &n) != 1) {
    scanf("%*[^\n]");
    getchar();
    if (feof(stdin)) {
      abort();
    }
    printf("n = ");
  }
  return n;
}

static void dec2bin(int n) {
  static const unsigned mask_msb = 1u << 31;
  printf("%d(10) = ", n);
  for (int i = 0; i < 32; ++i, n <<= 1) {
    printf("%u", (n & mask_msb) >> 31);
  }
  puts("(2)");
}

int main(void) {
  dec2bin(input());
  return 0;
}
