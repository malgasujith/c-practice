# include <stdio.h>
int main()
{
    int n;
    printf("enetr the year");
    scanf("%d",&n);
    if (n % 14 ==  0){
        if ( n % 100 == 0){
            if (n % 400 == 0){
                printf("it is a leap year",n);
            } else {
                printf("not a leap year",n);
            }
        } else {
            printf("not a leap year",n);
        }
    } else {
        printf("not a leap year",n);
    }
    return 0;
}
