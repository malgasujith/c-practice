// arthematic/subtraction operation using pointers
 #include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int *p, *q;
    p = a;           
    q = &a[3];       

 
    printf("%d, %d, %d\n", *p, *(p+1), *(p+2));  

    
    --q;                                         
    printf("%d, %d, %ld\n", *q, *p, q - p);     

    
    p++;                                         ]t
    printf("%d\n", ((*p) - 2) + 5);              

    return 0;
}

