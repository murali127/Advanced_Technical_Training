#include <stdio.h>

int main() {
    int a, b, c = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b > 0) {
        if (b&1) {
            c += a;
        }
        b=b>>1;
       a=a<<1;
    }

    printf("Product: %d\n", c);
    return 0;
}
