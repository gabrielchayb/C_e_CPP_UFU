#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//gabriel ribeiro filice chayb. nº matrícula: 12221BSI233


int main() {
    double e = 1.0;
    double termo = 1.0;
    int n = 1;

    while (termo > 1e-8) {
        termo /= n;
        e += termo;
        n++;
    }

    printf("%lf",e);
}