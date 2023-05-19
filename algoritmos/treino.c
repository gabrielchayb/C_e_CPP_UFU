#include <stdio.h>
#include <stdlib.h>

int main(){    	
    char str1[50]; 
	int n;
	gets(str1);
	n = strlen(str1);
    printf("%d", n);

    return 0;
}
