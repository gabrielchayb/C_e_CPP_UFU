#include <stdio.h>
#include <stdlib.h>


 main(){

  int A[2][3], B[2][3] ,C[2][3];

  // Obtendo a primeira matriz
  for(int i=0;i<2;++i){
   for(int j=0;j<3;++j){
     printf("A[%d][%d]: ",i,j);
     scanf("%d", &A[i][j]);
   }
  }
 
  // Afasta a matriz A da matriz B
  printf("\n");

  // Obtendo a segunda matriz
  for(int i=0;i<2;++i){
   for(int j=0;j<3;++j){
     printf("B[%d][%d]: ",i,j);
     scanf("%d", &B[i][j]);
   }
  }
 
  printf("\n");

  // Calculando e exibindo a soma
  for(int i=0;i<2;++i){
   for(int j=0;j<3;++j){
     C[i][j] = A[i][j] + B[i][j];
     /* \t é utilizado para organização
     da matriz tendo a função de tabulação*/
     printf("%d\t",C[i][j]);
     /* Quando j assumir valor 2 ocorrerá
     uma quebra de linha, caracterizando
     a estrutura da matriz*/
      if (j==2) printf("\n");
   }
  }
 
  printf("\n");
  system ("pause");

 }