#include <stdio.h>

int main() {
    int m[3][3];
    printf("Entre com 9 inteiros para a matriz 3x3:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d", &m[i][j]);

    for(int i=0;i<3;i++){
        int left = 0, right = 2;
        while(left < right){
            int tmp = m[i][left];
            m[i][left] = m[i][right];
            m[i][right] = tmp;
            left++; right--;
        }
    }

    printf("Matriz com linhas invertidas:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}
