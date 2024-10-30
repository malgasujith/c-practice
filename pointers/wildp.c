/  wild pointer

#include <stdio.h>

int main() {
    int *ptr;  // Wild pointer (uninitialized)

    *ptr = 10; // Dereferencing a wild pointer - leads to undefined behavior!

    printf("Value at ptr: %d\n", *ptr);

    return 0;
}


//  if a pointer wich is uninsialized is called wild pointer
# include <stdio.h>
int main(){
    int *ptr =NULL;
    int a=10;
    ptr = &a;
    printf("it is a wild pointer%d", *ptr);
// for that
}
