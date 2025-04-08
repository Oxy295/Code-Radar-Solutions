#include <stdio.h>

int main() {
    int a, i;
    scanf("%d", &a);
    for (i = 1; i < a; i++) {
        if (a % i == 0) {
            if (i == a) {
                printf("Prime\n");
                return 0;
            }
        }
    }

    // If i == a after the loop, it's prime
    if (i != a) {
        printf("Not Prime\n");
    }

    return 0;
}
