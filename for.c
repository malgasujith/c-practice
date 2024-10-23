# include <stdio.h>
# include <stdbool.h>
int main(){
    int n,i=2;
    bool is_prime = true;
    printf("enetr the number");
    scanf("%d",&n);
    if(n<=1){
        printf("it is not a prime");
    }
    for(i=2;i< n/2;i++){
        if (n%i == 0){
            is_prime = false;
            break;
        }
        i++;
    }
    if (is_prime){
        printf("%d it is prime",n);
    }
    else{
        printf("%d not prime",n);
    }
}
