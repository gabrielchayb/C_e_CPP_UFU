#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int M[5];
    int *p = M;

    for(int i = 0; i < 5; i++){
        scanf("%d", p+i);  
    }

    
    for(int i = 0; i < 5; i++){
        printf("%d", *(p+i) * 2);  
    }

}
