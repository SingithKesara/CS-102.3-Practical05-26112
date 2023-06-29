#include <stdio.h>

int main() {
  int first = 0, second = 1, fibonacci, count = 0;

  printf("The first 10 Fibonacci numbers are: \n");

  while (count < 10) {
    fibonacci = first + second;
    printf("%d ", fibonacci);
    first = second;
    second = fibonacci;
    count++;
  }

  return 0;
}
