#include<bits/stdc++.h>
using namespace std;



int mdc(int a, int b){ //funcao mdc padrão 
    if(a == 0) return b;
    return mdc(b%a, a);
}

int main(){
    int N, resp, x; //n = numero de numeros que tera, resposta sera a pos 1 do vector, e x sera o valor add no vector
    cin >> N; 
    vector<int>v;
    while(N--){
        cin >> x; 
        v.push_back(x);
    }

    resp = v[0]; // coloca o valor de resp como a pos 1 do vector 

    for(int i=1;i<v.size();i++){ // i começa na 2posição, percorre ate o vector acabar, e adiciona 1
        resp = mdc(resp, v[i]); // atualiza o valor da pos 1 do vector, com a func mdc em cima dos parametros da pos 1 e da nova posição (v[i]);
    }

    cout << resp << endl;
}