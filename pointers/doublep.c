
pointer to pointer 
 # include <stdio.h>
 int main(){

    int a=10,b=25;
    int *p, *q;
    int **r;
    p = &a;
    q = &b;
    // c = &q
    r = &c;

    printf("a = %d,%d,%d",b,*q,**r);
    return 0;

 }
// Double pointer
// a pointer which pois the addres of another pointer is a]called Double pointer

#include <stdio.h>

int main() {
    int a = 3, b = 5;
    int *p;       // Single pointer
    int **ptr;    // Double pointer

    p = &a;       // p points to the address of a
    ptr = &p;     // ptr points to the address of p

    printf("%d, %d\n", *p, **ptr);  

    return 0;
}
