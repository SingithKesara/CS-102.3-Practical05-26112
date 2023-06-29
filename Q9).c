#include <stdio.h>

int main() {
  char ch;

  for (ch = 'A'; ch <= 'Z'; ch++) {
    printf("The ASCII value of %c is %d\n", ch, ch);
  }

  return 0;
}
