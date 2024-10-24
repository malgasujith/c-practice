// amstrong
# include <stdio.h>
int main(){
    int n= 153,temp,res,sum,result;
    temp=n;
    res = 0;
    result = 0;
    while(n > 0){
        res = n % 10;
        sum = res*res*res;
        result += sum;
        n = n/10;
    }
    if (temp == result){
        printf("it is  a amstromng%d",temp);
    }
    else{
        printf("it is not amstrong %d",temp);
    }
}
