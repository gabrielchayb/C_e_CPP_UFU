#include <bits/stdc++.h>

using namespace std;

vector<int>v;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if(v[0] + v[1] < v[2]){
        cout << "1" << endl; 
    }
    else if(v[0] + v[1] == v[2]){
        cout << "2" << endl; 
    }
    {

    }
    
}

