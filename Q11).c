#include <stdio.h>
#include <math.h>

int main() {
  int number, i, flag = 1;

  printf("Enter a number: ");
  scanf("%d", &number);

  for (i = 2; i <= sqrt(number); i++) {
    if (number % i == 0) {
      flag = 0;
      break;
    }
  }

  if (flag == 1) {
    printf("%d is a prime number.\n", number);
  } else {
    printf("%d is not a prime number.\n", number);
  }

  return 0;
}
