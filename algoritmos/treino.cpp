#include <iostream>
#include <string>
#include <iconv.h>
#include<bits/stdc++.h>
#include<locale>
using namespace std;

string convertAccentChars(const string& str) {
    iconv_t cd = iconv_open("ASCII//TRANSLIT", "UTF-8");

    if (cd == (iconv_t)-1) {
        cerr << "Erro ao abrir o conversor\n";
        return str;
    }

    string out;
    size_t inbytesleft = str.size();
    char* inbuf = const_cast<char*>(str.c_str());
    std::size_t outbytesleft = inbytesleft * 3;
    char* outbuf = new char[outbytesleft];
    char* outbufp = outbuf;

    if (iconv(cd, &inbuf, &inbytesleft, &outbufp, &outbytesleft) == (size_t)-1) {
        cerr << "Erro ao converter a string\n";
        delete[] outbuf;
        iconv_close(cd);
        return str;
    }

    out.assign(outbuf, outbufp - outbuf);

    delete[] outbuf;
    iconv_close(cd);

    return out;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    string str;
    while(getline(cin,str)){
    string out = convertAccentChars(str);
    for (int aux=0; aux<out.size(); aux++){
        if(out[aux]>='A'&& out[aux]<='Z' || out[aux]>='a'&& out[aux]<='z'){
        if(out[aux]>='A'&& out[aux]<='Z')out[aux]=char(out[aux]+32);
        }
        else{
            out.erase(aux,1);
            aux--;
        }
    }
    cout<<out<<endl;
    string ajuda=out;
    reverse(ajuda.begin(),ajuda.end());
    if(ajuda==out)cout<<"sim\n";
    else cout<<"nao\n";
     
}
    return 0;
}

    
