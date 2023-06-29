#include <stdio.h>

int main() {
  int marks[10];
  int i, max_marks = 0, min_marks = 100, sum_marks = 0;

  printf("Enter marks of 10 students: ");
  for (i = 0; i < 10; i++) {
    scanf("%d", &marks[i]);
  }

  for (i = 0; i < 10; i++) {
    if (marks[i] > max_marks) {
      max_marks = marks[i];
    } else if (marks[i] < min_marks) {
      min_marks = marks[i];
    }
  }

  for (i = 0; i < 10; i++) {
    sum_marks += marks[i];
  }

  printf("The maximum marks is: %d\n", max_marks);
  printf("The minimum marks is: %d\n", min_marks);
  printf("The average marks is: %.2f\n", (float)sum_marks / 10);

  return 0;
}
