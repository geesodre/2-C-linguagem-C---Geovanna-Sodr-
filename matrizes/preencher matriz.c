#include <stdio.h>

int main() {
    int m[2][2];
    printf("Entre com 4 inteiros para a matriz 2x2:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            scanf("%d", &m[i][j]);

    printf("Matriz 2x2:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++) printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}