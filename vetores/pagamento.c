#include <stdio.h>

int main(){
    char nome[50];
    double valor, horas, pagamento;

    printf("Qual o seu nome?");
    scanf("%s", nome);

    printf("Quanto voce recebe por hora?");
    scanf("%lf", &valor);

    printf("Quantas horas voce trabalha?");
    scanf("%lf", &horas);

    pagamento = horas*valor;
    printf("O funcionario %s recebe um pagamento de %.2lf.\n", nome, pagamento);
    return 0;

}