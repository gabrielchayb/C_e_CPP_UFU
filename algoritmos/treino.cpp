#include <bits/stdc++.h>

using namespace std;

vector<int>v; 

int main()
{
    int t1, t2, t3;
    for (int i = 0; i < 3; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    t1 = v[0]; 
    t2 = v[1]; 
    t3 = v[2];


    cout << t1 << t2 << t3 << endl;
}

