# define N 5
# include <stdio.h>
# include "ACEDEC_H"

void acending(){
    int i,j;
    int*  ptr1  ptr1;
    int temp;
    int arr[N] = {7,8,5,2,3};
    for(ptr1 = arr; pt1 < arr + N - 1; ptr1++){
        for(ptr2 = pt1 + 1; ptr2 < arr + N; ptr2++){
            if(*ptr1 > ptr2){
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp 
            }
        }
    } 
     for(ptr1  = arr;ptr1 <arr + N,ptr1++){
            printf("%d\n",*ptr1)
    }
}

void decending(int arr[N]){
    int i;
    int* ptr1,ptr2;
    int temp;
    for(ptr1 = arr; ptr1 < arr + N - 1; ptr1++){
        for(ptr2 = ptr1 + 1; ptr2 < arr + N ; ptr2++){
            if(*ptr1 < *ptr2){
                temp = *ptr1;
                *ptr1  = *ptr2;
                *ptr2  = temp;
            }
        }
    }
    for(ptr1 = arr; ptr1 < arr + N; ptr1++){
        printf("arr=%d\n",*ptr1)
    }
}
