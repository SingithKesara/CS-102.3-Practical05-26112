#include <stdio.h>

int main() {
  int number, reversed_number = 0, digit;

  printf("Enter a number: ");
  scanf("%d", &number);

  do {
    digit = number % 10;
    reversed_number = reversed_number * 10 + digit;
    number = number / 10;
  } while (number > 0);

  printf("The reversed number is: %d\n", reversed_number);

  return 0;
}
