#include <stdio.h>

int soma_linha_5x5(int m[5][5], int linha) {
    int soma = 0;
    for(int j=0;j<5;j++) soma += m[linha][j];
    return soma;
}

int main() {
    int m[5][5];
    printf("Entre com 25 inteiros para a matriz 5x5:\n");
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            scanf("%d", &m[i][j]);
            
    int linha;
    printf("Qual linha somar? (0 a 4): ");
    scanf("%d", &linha);
    if(linha < 0 || linha > 4) {
        printf("Linha invalida.\n");
        return 1;
    }
    printf("Soma da linha %d = %d\n", linha, soma_linha_5x5(m, linha));
    return 0;
}
