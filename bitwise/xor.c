#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);
    
    // Swap using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
