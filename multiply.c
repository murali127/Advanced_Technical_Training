#include <stdio.h>

int main() {
    int a, b, c = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b > 0) {
        if (b % 2 == 1) {
            c += a;
        }
        a *= 2;
        b /= 2;
    }

    printf("Product: %d\n", c);
    return 0;
}
