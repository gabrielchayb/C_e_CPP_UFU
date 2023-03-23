#include <bits/stdc++.h>
using namespace std;


vector<long long int>v, aux, novo;

int main()
{
    
    int N,x;
    cin >> N; 
    for (int i=0; i<N; i++){
        cin >> x; 
        v.push_back(x);
        aux.push_back(x);
        

    } 

    sort(aux.begin(),aux.end());
    for (int i=0; i<N; i++){
        if(v[i] != aux[i]){
            novo.push_back(i);
        }

    }

    cout << novo.size() << endl; // 2
    for(int i=0;i<novo.size()-1;i++){
        cout << novo[i] << " ";// 1 
    }
    cout << novo[novo.size()-1] << endl; // 7 





    return 0;





}