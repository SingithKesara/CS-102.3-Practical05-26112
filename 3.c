#include <stdio.h>

int main() {
  int prices[10];
  int i, count = 0, sum = 0;

  printf("Enter price of 10 items: ");
  for (i = 0; i < 10; i++) {
    scanf("%d", &prices[i]);
  }

  for (i = 0; i < 10; i++) {
    if (prices[i] > 200) {
      count++;
    }
    sum += prices[i];
  }

  printf("The average price is: %.2f\n", (float)sum / 10);
  printf("The number of items whose price is greater than 200 is: %d\n", count);

  return 0;
}
