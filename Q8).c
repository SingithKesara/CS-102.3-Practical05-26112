#include <stdio.h>
#include <math.h>

int main() {
  int number, original_number, remainder, sum = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  original_number = number;

  while (number > 0) {
    remainder = number % 10;
    sum += pow(remainder, 3);
    number = number / 10;
  }

  if (sum == original_number) {
    printf("%d is an Armstrong number.\n", original_number);
  } else {
    printf("%d is not an Armstrong number.\n", original_number);
  }

  return 0;
}
