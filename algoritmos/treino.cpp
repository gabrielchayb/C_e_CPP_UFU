#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[3][2], B[3][2], igual;

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cin >> A[i][j];
        }
    } 

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cin >> B[i][j];
        }
    } 

    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            if(A[i][j] == B[i][j]){
                igual = 1;
            }
            else{
                igual = 0;
            }
        }
    } 

    if(igual == 1){
        cout << "As matrizes sao iguais" << endl;
    }

    else{
        cout << "as matrizes são diferentes nas seguintes posiçoes: " << endl;
        for(int i = 0; i < 2; i++){
            for (int j = 0; j < 3; j++){
                if(A[i][j] != B[i][j]){
                    cout<<i<<" "<<j<<endl;
                }   
            }
        } 
    }
}