#null pointer
# include <stdio.h>
int main(){
    int a =5,*ptr =NULL;
    ptr = (int*)malloc(sizeof(int));
    ptr = &a;
    if (ptr == NULL){
        printf('MEMEORY IS NOT ALLOCATDE');
    }
    else{
        printf('a =%d',*ptr);

    }
}
