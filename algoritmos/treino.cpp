#include <bits/stdc++.h> 
using namespace std;

float menor(float a, float b){
        if (a>=b){
            return b;
        } 
        else {
            return a;
        }
    }



int main(){
    int a,b;
    cin >> a >> b;
	int x = menor (a,b); 
    cout << x << endl;

}