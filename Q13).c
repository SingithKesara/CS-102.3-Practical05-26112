#include <stdio.h>

int main() {
  int array[10];
  int i;

  printf("Enter 10 numbers: ");
  for (i = 0; i < 10; i++) {
    scanf("%d", &array[i]);
  }

  printf("The array is: ");
  for (i = 0; i < 10; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}
