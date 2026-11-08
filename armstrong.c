
#include <stdio.h>
#include <math.h>

int main() {

    int num, digit, sum = 0, count = 0;
    int original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    do {
        num /= 10;
        count++;
    } while (num != 0);

    printf("Number of digits: %d\n", count);

    // Restore the original number
    num = original;

    // Extract digits and calculate their powers
    while (num != 0) {

        digit = num % 10;

        sum += pow(digit, count);

        num /= 10;
    }

    // Check whether the number is an Armstrong number
    if (original == sum) {
        printf("%d is an Armstrong number", original);
    } else {
        printf("%d is not an Armstrong number", original);
    }

    return 0;
}
