#include <stdio.h>

int main() {
  int base, exponent, power = 1;

  printf("Enter the base: ");
  scanf("%d", &base);

  printf("Enter the exponent: ");
  scanf("%d", &exponent);

  for (int i = 0; i < exponent; i++) {
    power *= base;
  }

  printf("The nth power of the base is: %d\n", power);

  return 0;
}
