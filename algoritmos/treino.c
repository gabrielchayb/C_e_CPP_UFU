#include <stdio.h>
#include <stdlib.h> 

int main(){
    int N = 10; 
    float M = 7.15; 
    char B = 'B'; 

    int *n = &N; 
    float *m = &M; 
    char *b = &B; 

    *n = 20; 
    *m = 15.30;
    *b = 'L';

    printf("novos valores:");
    printf("int: %d\n", N);
    printf("float: %f\n", M);
    printf("char: %c\n", B);

    return 0;
}
   
