// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[5]={1,2,3,4,6};
    //  pointer to an interger
    int *ptr,*q;  
    //  pointer to an array
    int (*p)[4];
    ptr = a;
    p =  &a;
    // q = p;
    
    printf("%d,%d\n",(*p)[0],*(ptr));
    ptr++;
    printf("%d,%d\n",(*p)[1],*(ptr + 1));
    // printf("%d,%d\n",*(q+2));
    ptr++;
    printf("%d,%d",(*p)[2],*(ptr +  2 ));

    // return 0;
}
