/**
 * © 2019 Luc Khai Hai
 **/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));

  int hand_com, hand_input, is_win;
  for (;;) {
    printf("Your input (0, 2, 5): ");

    while (scanf("%d", &hand_input) != 1
           || (hand_input != 0 && hand_input != 2 && hand_input != 5)) {
      scanf("%*[^\n]");
      getchar();
      fprintf(stderr, "Invalid input => Input again.\n");
      printf("Your input (0, 2, 5): ");
    }

    /**
     * Because of not uniform, MUST not use modulo operation to generate random
     * value, like this:
     *    rand() % 3
     *
     * ISSUE: Because rand() is a bad pseude random number generator(PRNG), use
     *        another better PRNG like Xorshift or MT19337.
     **/
    // hand_com \in {floor(3 * x): x \in [0, 1)}
    hand_com = rand() / (RAND_MAX + 1.0) * 3;
    // 0 -> 0, 1 -> 2, 2 -> 5
    hand_com += 3u >> (2 - hand_com);

    // 0 -> rock, 2 -> scissors, 5 -> paper
    printf("Comp:%d vs You:%d => ", hand_com, hand_input);
    int diff = hand_com - hand_input;
    if (!diff) {
      puts("Try again.");
      continue;
    }

    if (diff == 5) {
      is_win = 0;
    } else if (diff == -5) {
      is_win = 1;
    } else if (diff < 0) {
      is_win = 0;
    } else {
      is_win = 1;
    }
    break;
  }
  printf("You %s.\n", is_win ? "win" : "lose");

  return 0;
}
