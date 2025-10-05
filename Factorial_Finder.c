// Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main() {
    int n, product = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    // Adding an exception
    if (n<0) {
        printf("The factorial of negative numbers is not defined\n");
    }
    else {
        // Initializing the process
        for (int i = 1; i <= n; i++)
        {
            product *= i;
        }
        printf("The of given number is %d", product);
    }

    return 0;
}