#include <bits/stdc++.h>
using namespace std;


int main(){
     int maior=-999999;
     int m[3][3];
     for(int i=0; i<3;  i++){
         for(int j=0; j<3; j++){
             cin>>m[i][j];
             if(m[i][j]>maior)maior=m[i][j];
         }
     }
     for(int i=0; i<3;  i++){
         for(int j=0; j<3; j++){
             if(m[i][j]==maior)m[i][j]=-1;
         }
     }
     int i, j;
     for(i=0; i<3;  i++){
         for(j=0; j<2; j++){
             cout<<m[i][j]<<" ";
         }cout<<m[i][j]<<endl;
     }
}