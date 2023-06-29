#include <stdio.h>

int main() {
  int array[10];
  int i, positive_count = 0, negative_count = 0, zero_count = 0;

  printf("Enter 10 numbers: ");
  for (i = 0; i < 10; i++) {
    scanf("%d", &array[i]);
  }

  for (i = 0; i < 10; i++) {
    if (array[i] > 0) {
      positive_count++;
    } else if (array[i] < 0) {
      negative_count++;
    } else {
      zero_count++;
    }
  }

  printf("The number of positive numbers is: %d\n", positive_count);
  printf("The number of negative numbers is: %d\n", negative_count);
  printf("The number of zero numbers is: %d\n", zero_count);

  return 0;
}
