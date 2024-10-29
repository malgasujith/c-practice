// two domessional 
# include <stdio.h>
  void main()
  {
    int a[5],b[5],c[5];
    int i,sum;
    printf("enter the number ");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<=4;i++)
    {
        c[i] = a[i]+b[i];
        printf("%d is %d",i ,c[i]);
    }
    return 0;
  }
