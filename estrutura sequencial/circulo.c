#include <stdio.h>
#include <math.h>

int main (){
    double raio, area, pi;
    pi = 3.14159;

    printf("Qual o raio?");
    scanf("%lf", &raio);

    area = pi * raio * raio;

    printf("A area do circulo e %3lf", area);
    return 0;

}