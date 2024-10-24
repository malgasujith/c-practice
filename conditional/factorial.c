// factorial 
# include <stdio.h>
int main(){
    int n=4,i,fact=1;
    for(i=1;i<=n;i++){
        fact = fact*i;
        // printf("%d",fact);
    }
    printf("%d",fact);
    return 0;
    
}
