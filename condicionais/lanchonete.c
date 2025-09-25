#include <stdio.h>
int main (){
    int codigo, quant;
    double preco, total;
    
    printf("Digite o codigo do produto:");
    scanf("%d", &codigo);
    
    printf("Digite a quantidade:");
    scanf("%d", &quant);
 
    switch (codigo){ 
    case 1:
    preco = 5.00;
    break;
    case 2:
    preco = 3.50;
    break;
    case 3:
    preco = 4.80;
    break;
    case 4:
    preco = 8.90;
    break;
    case 5:
    preco = 7.32;
    break;
   
    default:
    printf("Codigo invalido!\n");
    break;
}
    total = preco * quant;
    printf("Valor a pagar: R$ %.2lf\n", total);
    return 0;
}