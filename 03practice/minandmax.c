# include "ACEDEC_H"
# define N 5

void minandmax(int* min,int* max)
{
    int arr[N] = {1,4,5,2,3};
    int i;
    int* ptr;
    *max=*min=arr[0];
    ptr  = (int*) calloc(N,sizeof(int))
    if(ptr ==   NULL){
        printf("memory not allocated");
        return;
        }
    for(i=0,i < n; i++){
        ptr[i] == arr[i];
        if (ptr[i] < *min){
            *min = ptr[i];
        }     
        if(ptr[i]> *max)
        {
            *max = ptr[i]
        }
    }
    free(ptr);

}
    
