#include <iostream>
using namespace std;

void swap(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

int main(){
    int N; 
    cin >> N; 
    int v[N];
    for (int i = 0; i < N; i++){
        cin >> v[i]; 
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            swap(v[i],v[j]);
        }
    }
    cout << v[N] << endl;
}




