#include<bits/stdc++.h>
using namespace std;
#define INF 999999999

int v[11], pos_maior[11], pos_menor[11];


int main(){
    int i, maior=-INF, menor=INF, a=1, b=1;
    
    for(i = 0; i < 10; i++){
        cin >> v[i];
        if(v[i]>maior){
            maior= v[i];
        }
        if(v[i] < menor){
            menor = v[i];
        }

    }
    for(i=1; i<=10; i++){
        if(v[i]== maior){
            maior = pos_maior[i];
        }
        if(v[i] == menor){
            menor = pos_menor[i];
        }
    }

    cout << "as posicoes sao:"; 
    for(i=1; i<a; i++){
        cout << pos_maior << endl;
    }
    for(i=1; i<b; i++){
        cout << pos_menor << endl; 
    }
}