#include <stdio.h>

int main() {
    int N;
    printf("Enter the base/height of the right-angled isosceles triangle: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("No 2x2 squares can fit in the given triangle.\n");
    } else {
        int count = ((N / 2) * ((N / 2) - 1)) / 2;
        printf("The number of 2x2 squares that can fit is: %d\n", count);
    }

    return 0;
}
