// dangling pointer

# include <stdio.h>
int main(){
    int * ptr = (int*)malloc(sizeof(int));
    * ptr  = 42;
    free(ptr);
    if (ptr == NULL){
        printf("MERRORY IS NOT ALLOCATED");
    }
    else{
        printf("now ptr is a dangling pinter %d",*ptr);
    }    
}
