#include <stdio.h>

int main() {
  int number, sum = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  while (number != -1) {
    sum += number;
    printf("Enter a number: ");
    scanf("%d", &number);
  }

  printf("The sum is: %d\n", sum);

  return 0;
}
