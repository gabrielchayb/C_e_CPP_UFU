#include <bits/stdc++.h>
using namespace std;


int main(){
    int N, menor1, menor2; 
    cin >> N; 
    int v[N];
    for (int i = 0; i < N; i++){
        cin >> v[i]; 
        if( v[i] < menor1) { 
            menor1 = v[i];
        }

    }

    for(int i = 0; i<N; i++){
        if (v[i] < menor2 && v[i] != menor1){
            menor2 = v[i];
        }
    }

    if (menor1 == menor2){
        cout << menor1 << menor1 << endl; 
    }

    cout << menor1 <<endl;


    
    



    



}

    
