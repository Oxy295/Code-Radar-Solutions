#include <stdio.h>

int main() {
    int a, i;
    scanf("%d", &a);

    // Check for factors from 2 to a-1
    for (i = 2; i < a; i++) {
        if (a % i == 0) {
            printf("Not Prime\n");
            return 0; // Exit if a divisor is found
        }
    }

    // If no divisors were found, it's prime
    printf("Prime\n");
    return 0;
}