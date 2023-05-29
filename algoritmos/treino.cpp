#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[2][2];
    int sim = 0;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            if(A[i][j] != A[j][i]){
                sim = 1;
            }
        }
    }

    if(sim == 1){
        cout << " a matriz n eh simetrica" << endl;
    }
    else{
        cout << " a matriz  eh simetrica" << endl;
    }


}