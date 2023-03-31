#include<bits/stdc++.h>
using namespace std;



int main(){
    int v[10], cont=0, x, ind[10], j=0; 

    for(int i = 0; i<10; i++){
        cin >> v[i]; // preenchi meu vetor com valores do usuario
    }

    cout << "digite o numero de verificação: " << endl; 
    cin >> x; //qual numero iremos checar?

    for(int i = 0; i < 10; i++){
        if(v[i]==x){ //se o numero estiver no vetor
            cont++; //add 1 na variavel contadora
            ind[j] = i; // coloque esse valor no meu vetor auxiliar, na minha posição auxiliar (j)
            j++; // adicione 1 na pos aux do vetor aux
        }
    }

    if(cont > 0){
        cout << cont << endl; //se a var contadora for maior que zero imprima-a 
        for (int i = 0; i < cont; i++){
            cout << ind[i] << endl;  // se a var contadora for maior que zero, printe meu vetor aux , até que a posição dese valor seja igual a minha contadora 
    }
    }
    else{
        cout << "mia x" << endl;
    }
}