#include <string.h>

int main(){
    char str1[50];
    gets(str1);
    setbuf(stdin, NULL);
    int N = strlen(str1); 
    for(int i = 0; i < N; i++){
        if(str1[i] >= "A" && str[i] <= "Z"){ //se ela for maiuscula ou tiver elementos maiusculas
            str1[i]+= 32; // transforma td em minusculo pelo ASCII
        }
        
        if(str1[i] != " "){ //se for diferente de espaço
             str1[i] += 3; // soma 3 como a criptografia de cesar
             if(str1[i] > "z"){ // se o elemento ultrapassar z
             str[i] -= 26; //tire 26 para voltar ao começo do alfabeto
        }
        }

        puts(str1);
       
    }

}