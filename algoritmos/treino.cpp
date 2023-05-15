#include<bits/stdc++.h>
using namespace std;

int main(){
    int m[3][3];
    int soma = 0; 
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            soma = soma + m[i][j]; 
        }
    }

    cout << soma << endl;

}