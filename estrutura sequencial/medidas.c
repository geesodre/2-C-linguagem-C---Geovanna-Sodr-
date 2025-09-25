#include <stdio.h>

int main(){
    double A, B, C, quadrado, trapezio, triangulo;

    printf("Qual o valor da medida A?");
    scanf("%lf", &A);

    printf("Qual o valor da medida B?");
    scanf("%lf", &B);

    printf("Qual o valor da medida C?");
    scanf("%lf", &C);

    quadrado = A*A;
    triangulo = A*B / 2;
    trapezio = ((A+B) * C) / 2;

    printf("A area do quadrado e: %.4lf\n", quadrado);
    printf("A area do triangulo e: %.4lf\n", triangulo);
    printf("A area do trapezio e: %.4lf\n", trapezio);
    return 0;
}