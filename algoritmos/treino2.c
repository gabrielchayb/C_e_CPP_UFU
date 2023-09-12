#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NMAX 10005

//festa olimpica OBI
int main(){ 
    int N,M,T,i,j;
    int *v1,*v2,*p; //
    p = &N; // guardou endereço de N no ponteiro P
    scanf("%d",p); // leu o N (numero de suditos)
    p = &M; // mesma coisa com M (qts de iterações sobre N);
    scanf("%d",p); //leu M
    v1 = (int *) malloc(NMAX*sizeof(int)); //alocou 105 posições de 4 bytes no ponteiro v1
    v2 = (int *) malloc(NMAX*sizeof(int)); // msm coisa aq
    for(i=0;i<N;i++){
        *(v1+i) = i+1; // 
    }
    int flag=0; 
    while(M--){
        p = &T; //p como endereço de T
        scanf("%d",p); // leu T
        j=0; 
        if(flag==0){ 
            flag++;
            for(i=0;i<N;i++){
                if((i+1)%T!=0){ //o bgl é indexado em 1 ent i + 1; se a posicao nao for multipla do numero T, ela é mantida no nosso vetor aux (vetor 2)
                    v2[j++] = v1[i]; 
                } 
            }
        }
        else{ //ou seja, ja entrou uma vez
            flag=0; //flag volta a ser 0
            for(i=0;i<N;i++){ //
                if((i+1)%T!=0){ //faz o mesmo processo */
                    v1[j++] = v2[i]; //fica alternando entre o v1 e o v2 pra salvar o novo vetor após a iteração de M (remoção dos multiplos de Ti)
                } 
            }
        }
        N = j; 
    }
    if(flag==0){
        if(N>10000) for(i=0;i<10000;i++) printf("%d\n",v1[i]);
        else for(i=0;i<N;i++) printf("%d\n",v1[i]); //se a flag terminar como 0, o ultimo salvo é o v1 logo o printamos
    }
    else{
        if(N>10000) for(i=0;i<10000;i++) printf("%d\n",v2[i]);
        else for(i=0;i<N;i++) printf("%d\n",v2[i]); //mesma coisa aqui inversa
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