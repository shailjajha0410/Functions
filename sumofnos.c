#include <stdio.h>

int add(int, int);

int main() {
    int m = 10, n = 10, sum;

    sum = add(m, n);  // function call

    printf("sum is %d", sum);

    return 0;
}

// function definition
int add(int a, int b) {
    return (a + b);
}