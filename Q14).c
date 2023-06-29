#include <stdio.h>

int main() {
  int array[10];
  int i, count = 0;

  printf("Enter 10 numbers: ");
  for (i = 0; i < 10; i++) {
    scanf("%d", &array[i]);
  }

  for (i = 0; i < 10; i++) {
    if (array[i] % 2 == 0) {
      count++;
    }
  }

  printf("The number of even numbers in the array is: %d\n", count);

  return 0;
}
