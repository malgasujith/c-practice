#include <stdio.h>

int main() {
    int x = 5, y = 10;
    int *px = &x, *py = &y;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Swapping without a function
    int temp = *px;
    *px = *py;
    *py = temp;

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
