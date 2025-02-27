#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i+=2) {
        sum +=i*(n/i);
    }

    printf("Sum of odd factors: %d\n", sum);
    return 0;
}
