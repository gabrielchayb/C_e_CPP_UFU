#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union teste{
    int x;
    float y;
} teste;

int main(){
    teste t1;
    t1.y = 50.0;
    printf(" %d ", t1.x);
    printf(" %d ", t1.y);

    t1.x = 50.0;
    printf(" %d ", t1.x);
    printf(" %d ", t1.y);

    return 0;
}