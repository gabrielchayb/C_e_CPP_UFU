#include <bits/stdc++.h>

using namespace std;

vector<int>v, pos;

int main(){
    int menor=1000,x,i; //variavel menor
    for(i=0;i<10;i++){
        cin >> x; //preenchi meu vetor
        v.push_back(x); //joguei os valores de x no vetor
        if(x < menor) menor = x; //descobre o menor valor "x" adicionado no vetor
    }
    for(i=0;i<10;i++){ 
        if(v[i]==menor){ //achei meus valores menores no v, 
            pos.push_back(i); v[i] = -1; // troquei eles por -1
        } 
    }
    cout << "Menor: " << menor << endl; //printa o menor valor do vetor v
    cout << "Ocorrencias: "; 
    for(i=0;i<pos.size()-1;i++) cout << pos[i] << " "; //indices que o menor valor apareceu (guarde no meu vetor auxiliar pos)
    cout << pos[pos.size()-1] << endl;
    for(i=0;i<v.size()-1;i++) cout << v[i] << " ";
    cout << v[v.size()-1] << endl; // printa o vetor resultante
}
    
