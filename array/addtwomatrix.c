// add two matrix

# include <stdio.h>
int main(){
    int i,j,a[2][3],b[2][3],sum[2][3];
    printf("enetr the number");
    printf("first matrix");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    pritf("second matrix");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("thrix matrix");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            sum[i][j] =a[i][j]+b[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            sum[i][j] =a[i][j]+b[i][j];
            printf("%d",sum[i][j]);
        }
    }
    return 0;
}


          
