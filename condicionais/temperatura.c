#include <stdio.h>
int main(){
    char escala;
    double temp, conversao;
    
    printf("Digite a escala para entrada:\n");
    scanf(" %c", &escala);
    printf("Qual a temperatura?\n");
    scanf("%lf", &temp);
    
    if (escala == 'C' || escala == 'c'){
        conversao = (temp * 9.0 / 5.0) + 32;
        printf ("Temperatura em Fahrenheit: %.2lf\n", conversao);
    }
    
    else if (escala == 'F' || escala == 'f'){
    conversao = (5.0/9.0)*(temp - 32);
    printf("Temperatura em Celsius: %.2lf\n", conversao);
    }
    else
    {
    printf("Escala invalida\n");
    }

return 0; 
}