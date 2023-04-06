#include <bits/stdc++.h>
using namespace std;



int main(){
    int soma = 0;
    int N; 
    cin >> N;
    int v[N];
    for(int i = 0; i < N; i++){ 
        cin >> v[i];
        soma = soma + i / (v[i]);
    } 
     
    cout << soma << endl; 


}

    
