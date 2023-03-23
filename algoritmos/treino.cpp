#include <bits/stdc++.h> 
using namespace std; 

int main(){

    int a,b,c; 
    cin >> a >> b >> c; 
    if(a >= b && b>=c){
        cout << a << b << c; 
    }
    else if(a <= b && b<=c){
        cout << c << b << a; 
    }
    else if(a>=b && b<=c){
        cout << a << c << b; 
    }
    else if(a<=c && b>=c){
        cout << b << c << a; 
    }
    else if (b>=a && a>=c){
        cout << b << a << c; 
    }
    else if(c >=a && b<=a){
        cout << c << a << b;
    }
    

}
