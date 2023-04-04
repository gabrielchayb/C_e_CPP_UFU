//gabriel ribeiro filice chayb. Nº Matrícula: 12221BSI233

#include <bits/stdc++.h>
using namespace std;
 

int main(){
    int N,x=1,A=0,B=1,R=0;
    cin >> N;
    while(x<N){
	    if(x%2==1){
		    cout << R << " ";
            R = A + B;
            A = R;
        }
        else if(x==2){
            cout << R << " ";
        }
        else if(x%2==0){
            cout << R << " ";
            R = A+B;
            B= R;
        }
        x++;
    }

    cout << R << endl;
}