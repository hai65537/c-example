#include <stdio.h>

int main(void) {
  int x;
  printf("Type an integer: \n");
  scanf("%d", &x);

  if (x % 3 && x % 5) {
    printf("NO\n");
  } else {
    printf("YES\n");
  }
  return 0;
}
