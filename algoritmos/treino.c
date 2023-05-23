#include <bits/stdc++.h>
using namespace std;

//Questao 4
int main()
{
    char c;
    while(true)
    {
        setbuf(stdin,NULL);
        scanf("%c", &c);
        char verso[9][30] = { "o sapo nao lava o pe",

                              "nao lava porque nao quer",

                              "ele mora la na lagoa",

                              "nao lava o pe porque nao quer",

                              "o sapo nao lava o pe",
 "nao lava porque nao quer",

                              "ele mora la na lagoa",

                              "nao lava o pe porque nao quer",

                              "mas que chule"
                            };

        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c==' ')
        {
            if(c==' ')return 0;
            for (int i = 0; i < 9; i++)
            {
                int t=strlen(verso[i]);
                for(int j=0; j<t; j++)
                {
                    if(verso[i][j]=='a' || verso[i][j]=='e' || verso[i][j]=='i' || verso[i][j]=='o' || verso[i][j]=='u')
                        verso[i][j]=c;
                }
            }
            for (int i = 0; i < 9; i++)printf("%s\n",verso[i]);
            printf("\n");
        }
        else
        {
            printf("Digite outro caracter: \n");
        }
    }
    return 0;

}