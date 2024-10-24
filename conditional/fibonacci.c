# include <stdio.h>
int main(){
    int n=10,i,a,next,b;
    a = 0;
    b = 1;
    for(i=1;i<=n;i++){
        printf("%d",a);
        next = a+b ;
        a = b;
        b = next;    
        }
}
