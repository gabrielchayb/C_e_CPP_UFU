#include <bits/stdc++.h>
using namespace std;



int main(){
    int N; 
    cin >> N; 
    int v[N];
    for (int i = 0; i < N; i++){
        cin >> v[i];
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < i; j++){
            if (i > j){
                v[i] == v[j];
            }
        }
    }

    cout << v[N] << endl; 



}

    
