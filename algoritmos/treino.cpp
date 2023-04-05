#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll>v;

int main(){
    ll N,x,total=1,i,maior=0;
    cin >> N;
    for(i=1;i<=N;i++){
        cin >> x;
        v.push_back(x);
    }
    for(i=1;i<v.size()-1;i++){ //percorre todos menos pos 0 e pos final
        if(v[i-1]<0 && v[i]<0) total *= v[i-1]*v[i]*v[v.size()-1];
        else total *= v[i-1]*v[i]*v[i+1];
        if(total > maior) maior = total;
        total=1;
    }
    cout << maior << endl;
}

    
