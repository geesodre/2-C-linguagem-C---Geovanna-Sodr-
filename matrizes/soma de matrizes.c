#include <stdio.h>
int main(){
   int i, j, matrizA[3][3], matrizB[3][3], matrizC[3][3];

   for ( i = 0; i < 2; i++)
   {
    for (j = 0; j <2; j++)
    {
        printf("Digite A[%d][%d]: ", i, j);
        scanf("%d", &matrizA[i][j]);
        printf("Digite B[%d][%d]: ", i, j);
        scanf("%d", &matrizB[i][j]);
        matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
    }
   }
   for ( i = 0; i < 2; i++)
   {
    for ( j = 0; j < 2; j++)
    {
        printf("C[%d][%d]: %d\n", i, j, matrizC[i][j]);
    }
    printf("\n");
   }
return 0;
}