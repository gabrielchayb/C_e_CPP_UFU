#include<bits/stdc++.h>
using namespace std;



int main (){

    int v[10]; //declarei meu array simples 

    for(int i = 0; i <10; i++){ // i começa no zero e lê da posição 0 a 9 (10 valores)
        cin >> v[i]; 
    }

    for (int i = 9; i>=0; i--){ // i começa na ultima posição (9) e lê descrescente (i--) até i < 0; 
        cout << v[i] << endl;
    }

    return 0;
}