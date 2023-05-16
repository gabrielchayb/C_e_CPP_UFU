#include<bits/stdc++.h>
using namespace std;

int main(){
    int m[5][5]; 

    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if (i == j){
                m[i][j] = 1; // diagonal principal
            }
            else{
                m[i][j] = 0; //resto da matriz
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << m[i][j];
        }
    }

}