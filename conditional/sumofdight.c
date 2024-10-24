# include <stdio.h>
int main(){
    int n = 123,sum,res;
    // temp = n;
    sum = 0;
    while(n > 0){
        res = n%10;
        sum += res;
        n  = n/10;
    }
    printf("%d",sum);
}
