#include <bits/stdc++.h> 
using namespace std;

int soma (int a, int b){
    int s = a + b; 
    return s;
}


int main(){
    int a, b;
    cin >> a >> b;
    int x = soma (a,b);
    if (x % 2 == 0){
        cout << "Bino vence" << endl; 
    }
    else {
        cout << "Cino vence" << endl; 
    }

}