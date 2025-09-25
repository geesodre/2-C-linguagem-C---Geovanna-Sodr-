#include <stdio.h>

int main(){
    int duracao, horas, minutos, segundos;

    printf("Digite a duracao em segundos");
    scanf("%d", &duracao);

    horas = duracao / 3600;
    duracao= duracao % 3600;
    minutos = duracao/ 60;
    segundos = duracao % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}