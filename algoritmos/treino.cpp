#include <bits/stdc++.h> 
using namespace std; 

int main(){

    double a,b,c; 
    cin >> a >> b >> c; 
    double x,y; 
    
    if(a==0){
        cout << "nao é uma equação do segundo grau" << endl;
    }

    double delta = (b*b) - 4*a*c; 
    x = (-b + sqrt(delta)) / 2*a;
    y = (-b - sqrt(delta)) / 2*a;

    cout << "o delta vale: " << delta << endl; 
    if (delta < 0){
        cout << "nao existe solução para as raízes" << endl; 
    }
    else if(delta == 0){
        cout << "existe uma unica raiz: " <<  x  << endl;
    }
    else if(delta > 0){
        cout << "existem duas raizes" << y << " e " << x << endl;
    }

    

}