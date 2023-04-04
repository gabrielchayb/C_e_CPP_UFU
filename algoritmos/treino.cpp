#include <bits/stdc++.h>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i1,i2,f1,f2;
    cin >> i1 >> i2 >> f1 >> f2; //le tds os estados na lampada 
    if(i1==f1 && i2==f2) cout << "0" << endl; 
    else if(i1!=f1 && i2!=f2) cout << "1" << endl;
    else if(i1!=f1 && i2==f2) cout << "1" << endl;
    else cout << "2" << endl;
}

