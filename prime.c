# include <stdio.h>
# include <stdbool.h>
int main(){
    int n,i = 2;
    bool is_prime = true;
    printf("eneter the number");
    scanf("%d", &n);
    if (n <= 1){
        printf("it is not a prime%d",n);
        return 0;
    }
    while(i <= n/2){
        if (n%i == 0){
            is_prime = false;
            break;
        }
        i++;
    }
    if (is_prime){
        printf("%d is prime",n);
    }
    else{
        printf("not prime");

    }
    
}
