#include<bits/stdc++.h>
using namespace std;


int main(){
    int A[2][2]; 
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin >> A[i][j];
        }
    }

    int menor = A[1][1];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(A[i][j] < menor){
                menor = A[i][j];
                cout << i << "" << j << endl;
            }
        }
    }


}