#include <stdio.h>

int main() {
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transposta[3][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}
