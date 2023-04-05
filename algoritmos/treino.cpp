#include <bits/stdc++.h>

using namespace std;

vector<int>v;  


int main(){
    int N, l, c, soma;
    bool verificar = true; 
    cin >> N; 
    int m[N][N];
    for (int i = 0; i < N; i++){ // LINHAS HORIZONTAIS
        soma = 0; 
        for (l = 0; l < N; l++){
            cin >> m[l][c]; 
            soma = soma + m[l][c];
        }
        v.push_back(soma);


    }
    l=0; c=0; soma=0;
    while(true){ //linhas verticais
        if(c==N) break;
        soma += m[l][c];
        if(c==N-1){
            l=0;
            c++;
            v.push_back(soma);
            soma=0;
        }
        else l++;
    }
    l=0; c=0; soma=0;
    while(true){ //linha diagonal 1
        if(l==N) break;
        soma += m[l][c];
        l++; c++;
    } v.push_back(soma);
    l=0; c=N-1; soma=0;
    while(true){ //linha diagonal 2
        if(l==N) break;
        soma += m[l][c];
        l++; c--;
    } v.push_back(soma);

    for(auto it:v){
        if(it != soma){ verificar = false; break;}
    }
    if(verificar) cout << soma << endl;
    else cout << "-1" << endl;
}



    
