#include <stdio.h>
int main(){
    int i, maior, menor, vetor[15];
    
    printf("Digite 15 número:\n");
    for ( i = 0; i < 15; i++)
    {
      scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
       
       for ( i = 0; i < 15; i++);{
        if (vetor[i] > maior){
            maior = vetor[i];
        }
        if (vetor[i] < menor){
            menor = vetor[i];
        }
       }
       printf("Maior valor: %d\n", maior);
       printf("Menor valor: %d\n", menor);
    return 0;
}