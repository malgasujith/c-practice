# include <stdio.h>
int main(){
    int a,b,c ,temp1,temp2;
    printf("enetr the a number");
    scanf("%d",&a);
    printf("enetr the b number");
    scanf("%d",&b);
    printf("enetr the c number");
    scanf("%d",&c);
    if (a>b){
        temp1 = a;
    }
    else{
        temp1 = b;
    }
    if(c > b){
        temp2  = c;
    }
    else{
        temp2 =  b;
    }
    if (temp1 > temp2){
        printf("higher number is %d\n",temp1);
    }
    else{
        printf("higher number is %d\n",temp2);
    }
    return 0;
}
