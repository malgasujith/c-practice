# include <stdio.h>


int main(){
    int i;
    int arr[5] = {1,2,3,4,5,5};
    int (*ptr)[5] = &arr;
    for(i=0;i<5;i++){
        printf("%d",(*ptr)[i])
    }
    return 0;
}


# include <stdio.h>
#  include <string.h>

void reverarray(){
    int i,
    int* ptr;
    int  arr[5] = 'sujith';
    int length = strlen(arr);
    char* ptr = arr+length-1;
    for(i= length -1;i>=0;i--){
        printf("%d",*ptr);
        ptr--;
    }
    printf('\n')
}

int main(){
    reverarray();
    return 0;
}
