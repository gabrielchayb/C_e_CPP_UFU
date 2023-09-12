#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NMAX 105

//festa olimpica OBI
int main(){ 
    int N,M,T,i,j;
    int *v1,*v2,*p;
    p = &N;
    scanf("%d",p);
    p = &M;
    scanf("%d",p);
    v1 = (int *) malloc(NMAX*sizeof(int));
    v2 = (int *) malloc(NMAX*sizeof(int));
    for(i=0;i<N;i++){
        *(v1+i) = i+1;
    }
    int flag=0;
    while(M--){
        p = &T;
        scanf("%d",p);
        j=0;
        if(flag==0){
            flag++;
            for(i=0;i<N;i++){
                if((i+1)%T!=0){
                    v2[j++] = v1[i];
                } 
            }
        }
        else{
            flag=0;
            for(i=0;i<N;i++){
                if((i+1)%T!=0){
                    v1[j++] = v2[i];
                } 
            }
        }
        N = j;
    }
    if(flag==0){
        if(N>10000) for(i=0;i<10000;i++) printf("%d\n",v1[i]);
        else for(i=0;i<N;i++) printf("%d\n",v1[i]);
    }
    else{
        if(N>10000) for(i=0;i<10000;i++) printf("%d\n",v2[i]);
        else for(i=0;i<N;i++) printf("%d\n",v2[i]);
    }
}
/*
problema: dado 1 a N, e M intervalos, em cada intervalo tem um inteiro T, que, removera os indices multiplos de T do vetor,
depois imprima o vetor.
1 2 3 4 5 6 7 8 9 10
t=2
1 3 5 7 9 (agora tem indices de 1 a 5)
t=3
1 3 7 9
*/