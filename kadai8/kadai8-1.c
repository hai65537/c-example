#include <stdio.h>
#include <stdlib.h>

#define countof(__array) (sizeof(__array) / sizeof(*__array))

void print(int *data, int len) {
  for (int i = 0; i < len; ++i) {
    printf(" %d", data[i]);
  }
  putchar('\n');
}

void swap(int *a, int *b) {
  int __tmp = *a;
  *a = *b;
  *b = __tmp;
}

void sort(int *data, int len) {
  for (int i = 0; i < len; ++i) {
    for (int j = 1; j < len - i; ++j) {
      if (data[j] < data[j - 1]) {
        swap(&data[j], &data[j - 1]);
      }
    }
    printf("loop%d:", i + 1);
    print(data, len);
  }
}

int main(void) {
  int n[] = {64, 30, 8, 87, 45, 13};
  printf("Data:");
  print(n, countof(n));
  printf("N: %lu\n", countof(n));
  putchar('\n');
  sort(n, countof(n));
}
