#include <bits/stdc++.h> 
using namespace std;

//passagem de referência

int troca (int *a , int *b){ //peguei a variavel a e b e transformei em ponteiros. //apesar de serem var locais, eles acessam o local de memória por serem ponteiros 
    int aux = *a; //criei uma aux que recebe o ptr de a 
    *a = *b; //inverto o ptr a com b
    *b = aux; //coloco b para aux 
} 

int main(){
    int a = 1;
    int b = 2; 
    troca (&a,&b); //coloco o & pois estou imprimindo um ptr 
    cout << a << b;


}