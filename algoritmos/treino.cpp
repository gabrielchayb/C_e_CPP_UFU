#include <bits/stdc++.h>
using namespace std;


vector<long long int>v;

int main()
{
    
    int N,x;
    cin >> N; 
    for (int i=0; i<3; i++){
        cin >> x; 
        v.push_back(x);
       
        

    } 

    sort(v.begin(), v.end());

    int qtd=0; 

    for (int i=0; i<v.size(); i++){
        N -= v[i]; 

        if (N>=0){
            qtd++;
        }

    }

    cout << qtd << endl;





    return 0;





}