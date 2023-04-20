#include<bits/stdc++.h>
using namespace std;
#define INF 999999999


int main(){
    int v[20]; 
    for(int i = 1; i <20; i++){
        cin >> v[i]; 
        for(int j = 1; j < i; j++){
            if(i!=j && v[j]==v[i]){
                cout << v[i] << endl;
                break;
            }
        }
    }    
}