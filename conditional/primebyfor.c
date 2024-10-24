// prime
# include <stdio.h>
int main(){
    int n,count,i,r;
    count = 0;
    for(n=0;n<=100;n++){
        count = 0;
        for(i=1;i<=n;i++){
            if(n%i == 0){
                count += 1;
                printf("%d\n",i);
        }
    }
    if(count <= 2){
        printf("it is a prime %d\n",n);
    }
    else{
        printf("it is not prime%d\n",n);
    }
    }
    
}
