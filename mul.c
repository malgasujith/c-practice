# include <stdio.h>
int main(){
    int i = 1,n;
    scanf("%d",&n);
    printf("enetr the table you need");
    while (i <= 10){
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}
