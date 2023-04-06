#include <bits/stdc++.h>
using namespace std;



int main(){
    int N, m=0; 
    cin >> N; 
    int v[N+1];
    
    for (int i = 0; i < N; i++){
        cin >> v[i]; 
        m += v[i];
    }

    double dp=0;

    

    m = m/N;

    for (int i = 0; i < N; ++i) {
        dp+= pow(v[i] - m, 2);
    }
    dp= sqrt(dp / N);

    cout << dp << endl;


}

    
