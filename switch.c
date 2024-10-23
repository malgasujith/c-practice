# include <stdio.h> 
int main(){
    char op;
    double a,b;
    printf("enetr the any op in these +,-,/,*");  
    scanf("%c", &op);
    printf("enetr the number a");
    scanf("%lf",&a);
    printf("enetr the b number");
    scanf("%lf",&b);
    switch (op){
        case '+':
            printf("addition %lf",a+b);
            break;
        case '-':
            
            printf("subtraction %lf", a-b);
            break;
        case '/':
            if (b!=0){
                printf("div %lf", a/b);
            }
            break;
        case '*':
            printf("mul %lf", a*b);
            break;
        default: 
            printf("there is no option in op");
    }
    return 0;
}
  
