#include <stdio.h>

#define countof(__array) (sizeof(__array) / sizeof(*__array))

int main(void) {
  char str[] = "Sun";
  int n[] = {10, 20, 40};
  double m[] = {1.5, 3.5, 7.5};

  for (int i = 0; i < countof(str) - 1; ++i) {
    printf("value: %c, address: %p\n", str[i], &str[i]);
  }
  for (int i = 0; i < countof(n); ++i) {
    printf("value: %d, address: %p\n", n[i], &n[i]);
  }
  for (int i = 0; i < countof(m); ++i) {
    printf("value: %f, address: %p\n", m[i], &m[i]);
  }
  return 0;
}
