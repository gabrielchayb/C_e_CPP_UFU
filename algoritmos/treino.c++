#include <bits/stdc++.h>
using namespace std;

int main() {
    int A[2][2];
    int v[3], R[3];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j< 2; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        cin >> v[i];
    } 

    for(int i = 0; i <2; i++){
        for(int j = 0; j<2; j++){
            R[i] += A[i][j] * v[i];
        }
    }

    for(int i = 0; i < 2; i++){
        cout << R[i] << endl;
    }
    
}