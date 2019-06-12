#include <stdio.h>

int main(int argc, char **argv) {
  FILE *fin = fopen("test.txt", "r");
  if (!fin) {
    fprintf(stderr, "%s: ", argv[0]);
    perror("test.txt");
    return 1;
  }

  FILE *fout = fopen("test.bak", "w");
  if (!fout) {
    fprintf(stderr, "%s: ", argv[0]);
    perror("test.bak");
    return 1;
  }

  char buf[BUFSIZ];
  while (fgets(buf, BUFSIZ, fin)) {
    fputs(buf, fout);
  }

  fclose(fin);
  fclose(fout);

  return 0;
}
