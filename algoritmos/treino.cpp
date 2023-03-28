#include <bits/stdc++.h> 
using namespace std;


int main(){
	int a,b, maior, menor;
    cin >> a >> b;
    if (a>=b){
        menor = b;
        maior = a;
    }
    else {
        menor = a; 
        maior = b; 
    }
    while(menor <= maior){
        cout << menor << "" <<  endl; 
        menor++;
    }

}