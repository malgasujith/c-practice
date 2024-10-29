//   transpose of matrix

# include <stdio.h>
int main(){
    int a[2][3] i,j;
    printf("eneter the  array number");
    for(i=0;i<=1;i++){
        for(j=0;i<=2;j++)
        {
            scanf("%d\n",a[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for (j=0;j<=1;j++)
        {
            printf("%d",a[i][j]);
        }
    }
}
