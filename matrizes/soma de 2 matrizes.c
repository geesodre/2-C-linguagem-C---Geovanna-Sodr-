#include <stdio.h>

void soma_matrizes_3x3(int A[3][3], int B[3][3], int C[3][3]) {
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            C[i][j] = A[i][j] + B[i][j];
}

int main() {
    int A[3][3], B[3][3], C[3][3];
    printf("Entre com 9 inteiros para a matriz A (3x3):\n");
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) scanf("%d", &A[i][j]);

    printf("Entre com 9 inteiros para a matriz B (3x3):\n");
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) scanf("%d", &B[i][j]);

    soma_matrizes_3x3(A, B, C);

    printf("Matriz C = A + B:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
