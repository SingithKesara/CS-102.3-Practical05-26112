#include <stdio.h>

#define NORMAL_RATE 150
#define OVERTIME_RATE 200
#define MAX_HOURS 40
#define MIN_PAYMENT 4000

int main() {
    int employeeNumber;
    int hoursWorked;
    int overtimePayment;
    int totalEmployees = 0;
    int overtimeEmployees = 0;

    printf("Enter employee number (-999 to end): ");
    scanf("%d", &employeeNumber);

    while (employeeNumber != -999) {
        printf("Enter hours worked by employee %d: ", employeeNumber);
        scanf("%d", &hoursWorked);

        if (hoursWorked > MAX_HOURS) {
            overtimePayment = (hoursWorked - MAX_HOURS) * OVERTIME_RATE + MAX_HOURS * NORMAL_RATE;
        } else {
            overtimePayment = hoursWorked * NORMAL_RATE;
        }

        printf("Employee number: %d\n", employeeNumber);
        printf("Overtime Payment: %d\n", overtimePayment);

        totalEmployees++;
        if (overtimePayment > MIN_PAYMENT) {
            overtimeEmployees++;
        }

        printf("\nEnter employee number (-999 to end): ");
        scanf("%d", &employeeNumber);
    }

    if (totalEmployees > 0) {
        float percentage = (float) overtimeEmployees / totalEmployees * 100;
        printf("\nPercentage of employees whose overtime payment exceeds Rs. 4000: %.2f%%\n", percentage);
    } else {
        printf("\nNo employees entered.\n");
    }

    return 0;
}
