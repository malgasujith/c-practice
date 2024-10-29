#include<stdio.h>
int main()
{

    int a[10];

    for(int i = 0; i < 10; i++)
    {
        printf("Enter Number of %d element in array\n", i);
        scanf("%d", &a[i]);
    }

    printf("Even numbers in Array: ");
    for(int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);

        }
    }
    printf("\n Odd Numbers in Array: ");
    for (int i = 0; i< 10; i++)
    {
        if(a[i] %2 != 0)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
