#include <stdio.h>
# include <stdlib.h>

# define N 6

void prime_name(void);
int main(){
    prime_name();
    return 0;
}
void prime_name()
{
    int a[N]= {1,2,3,4,5,6};
    int* ptr;
    int i,j;
    ptr = (int*)calloc(N,sizeof(int));
    if (ptr == NULL){
        printf("menory is not allocated");  
        return ;  
    }
    for(i=0;i< N; i++){
       int  is_prime  = 1;
       int num  = a[i];
       if (num < 2){
            is_prime = 0;
            break;
        }
        else{
        for(j = 2; j <= num/2; j++){
            if(num%j == 0){
                is_prime = 0;
                break;
            }
        }
    }
        if(is_prime){
            printf("%d\n",num);

        }
    }
    free(ptr);
}
