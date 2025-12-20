#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;   // start with 1
    for(int i = 2; i <= n; i++) {
        fact = fact * i;   // multiply each number till n
    }
    return fact;   // return final factorial value
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int fact = factorial(n);   // call the function
    printf("Factorial of %d is: %d\n", n, fact);

    return 0;
}
