#include<bits/stdc++.h>
using namespace std; 

int main(){
    int N, qtd=0, x; 
    cin >> N; 
    while (cin >> N){
        if(N % 2 != 0){
            break;
        }
        if(N%2 == 0){
            qtd++;
        }
        if( qtd==5){
            cout << "preste atencao na msg" << endl;
        }
        while(N--){
            cin >> x; 
            if (x%2 == 0){cout<< "par" << endl;}
            if (x%2 != 0){cout << "impar"<< endl;}
        }
    }
    
}