#include <stdio.h>

// function to calculate a^b
int power(int a, int b) {
    int result = 1;
    for (int i = 1; i <= b; i++) {
        result = result * a;
    }
    return result;
}

int main() {
    int a, b;
    printf("Enter base (a): ");
    scanf("%d", &a);

    printf("Enter exponent (b): ");
    scanf("%d", &b);

    int ans = power(a, b);
    printf("%d^%d = %d\n", a, b, ans);

    return 0;
}
