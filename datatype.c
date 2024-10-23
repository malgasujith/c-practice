#include <stdio.h>

int main() {

    int integerVar = 10;         
    float floatVar = 5.25f;     
    double doubleVar = 3.14159;  
    char charVar = 'G';          

  
    printf("Integer value: %d\n", integerVar);
    printf("Float value: %.2f\n", floatVar);         
    printf("Double value: %.5lf\n", doubleVar);      
    printf("Character value: %c\n", charVar);

 
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));

    return 0;
}
