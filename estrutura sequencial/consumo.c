#include <stdio.h>

int main(){
    double distancia, combustivel, consMedio;

    printf("Qual a distancia percorrida?");
    scanf("%lf", &distancia);

    printf("Quanto de combustivel foi gasto?");
    scanf("%lf", &combustivel);

    consMedio = distancia/combustivel;
    printf("O consumo medio deste veiculo foi de %lf\n", consMedio);
    return 0;

}