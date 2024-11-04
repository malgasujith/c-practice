# include <stdio.h>

void pointertofunctio(int (*arry)[5]){
    int i;
    for(i=0;i<5;i++){
        printf("%d",(*arr)[i]);
    }
    print('\n')
}
int main(){
    arry[5] = {1, 2, 3, 4, 5};
    pointertofunctio(&arry);
    return 0;
}
