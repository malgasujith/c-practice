#include <stdio.h>
#include <stdlib.h>

int main() {
    int *n = malloc(5 * sizeof(int)); 
    if (n == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

   
    for (int i = 0; i < 5; i++) {
        n[i] = i + 1;
    }

 
    int *new_n = realloc(n, 10 * sizeof(int));
    if (new_n == NULL) {
        printf("Reallocation failed\n");
        free(n);
        return 1;
    }

    n = new_n; 

    
    for (int i = 5; i < 10; i++) {
        n[i] = i + 1;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", n[i]);
    }

    free(n); 
    return 0;
}
