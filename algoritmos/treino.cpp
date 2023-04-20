#include<bits/stdc++.h>
using namespace std;

int main(){
  int v[10], qtd=0, soma=0; 
  for (int i = 0; i < 10; i++){
    cin >> v[i];
    if(v[i] < 0){
      qtd++;
    }
    else if(v[i] >= 0){
      soma = soma + v[i];
    }
  }
   
    cout << qtd << endl; 
    cout << soma << endl;



}