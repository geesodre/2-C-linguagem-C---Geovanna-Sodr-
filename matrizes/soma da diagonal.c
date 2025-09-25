#include <stdio.h>

int main() {
    int m[3][3];
    printf("Entre com 9 inteiros para a matriz 3x3:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d", &m[i][j]);

    int soma_principal = 0, soma_secundaria = 0;
    for(int i=0;i<3;i++) {
        soma_principal += m[i][i];
        soma_secundaria += m[i][2 - i];
    }
    printf("Soma da diagonal principal = %d\n", soma_principal);
    printf("Soma da diagonal secundaria = %d\n", soma_secundaria);
    return 0;
}
