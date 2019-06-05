#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char str[128];
  printf("Input a word");
  scanf("%127[A-Za-z]", str);
  if (feof(stdin)) {
    abort();
  }

  for (char *s = str; *s; ++s) {
    if (*s >= 'a') {
      *s = 'a' + (*s - 'a' + 1) % 26;
    } else if (*s >= 'A') {
      *s = 'A' + (*s - 'A' + 1) % 26;
    }
  }
  puts(str);
  return 0;
}
