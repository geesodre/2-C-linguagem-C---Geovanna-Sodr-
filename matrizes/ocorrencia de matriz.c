#include <stdio.h>

int contar_ocorrencias_4x4(int m[4][4], int valor) {
    int cont = 0;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(m[i][j] == valor) cont++;
    return cont;
}

int main() {
    int m[4][4];
    printf("Entre com 16 inteiros para a matriz 4x4:\n");
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            scanf("%d", &m[i][j]);

    int valor;
    printf("Qual numero contar? ");
    scanf("%d", &valor);
    printf("O numero %d aparece %d vezes.\n", valor, contar_ocorrencias_4x4(m, valor));
    return 0;
}
