#include<bits/stdc++.h>
using namespace std;


int main(){
    int m[8][8], soma;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> m[i][j];
        }
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(i == j){
                soma = soma + m[i][j];
            }
        }
    }
    
    cout << soma << endl;

}