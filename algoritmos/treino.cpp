#include <bits/stdc++.h>
using namespace std;

int main() {
    int m[5][4], K;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            cin >> m[i][j];
        }
    }

    cout << "digite o numero da linha: "; 
    cin >> K;

    for(int i = 0; i < 4; i++){
        cout << m[K][i] << endl;
    }
}