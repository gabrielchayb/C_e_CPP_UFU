#include<bits/stdc++.h>
using namespace std;

int fibo (int N){
    if(N==0 || N==1) return N; 
    return fibo(N-1) + fibo(N-2);
}



int main (){
    int N, a=0; 
    cin >> N; 
    while(a<N-1){
        cout << fibo(a) << "";
        a++;
    }

    cout << fibo(N-1) << endl;
}