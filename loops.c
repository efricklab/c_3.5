#include <stdio.h>

int main() {
    int i, n, sum = 0;

    // Do-while loop to ensure the user enters a positive number
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);

    // For loop to print numbers from 1 to n
    printf("Numbers from 1 to %d using a for loop:\n", n);
    for (i = 1; i <= n; ++i) {
        printf("%d ", i);
    }
    printf("\n");

    // While loop to calculate the sum of numbers from 1 to n
    i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }

    // Display the sum
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
