#include <bits/stdc++.h>
using namespace std;


vector<long long int>v;

int main()
{
    int N;
    long long int x; 
    cin >> N;
    while(N--){
        cin >> x; 
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    for (int i =0; i<v.size()-1; i++){
        cout << v[i] << " ";
    }
    cout << v[v.size()-1] << endl;

    return 0;





}