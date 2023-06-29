#include <stdio.h>

int main() {
  int marks[10], total = 0, i;
  float average;

  for (i = 0; i < 10; i++) {
    printf("Enter mark %d: ", i + 1);
    scanf("%d", &marks[i]);
  }

  for (i = 0; i < 10; i++) {
    total += marks[i];
  }

  average = total / 10.0;

  printf("Total marks: %d\n", total);
  printf("Average: %.2f\n", average);

  if (average < 50) {
    printf("Fail!");
  } else {
    printf("Pass!");
  }

  return 0;
}
