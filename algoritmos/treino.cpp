#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,c,menor=10000;
    cin >> a >> b >> c;
    for(int i=1;i<=3;i++){
        if(i==1 && (b*2)+(c*4) < menor) menor = (b*2)+(c*4);
        if(i==2 && (a*2)+(c*2) < menor) menor = (a*2)+(c*2);
        if(i==3 && (a*4)+(b*2) < menor) menor = (a*4)+(b*2);
    }
    cout << menor << endl;
}
