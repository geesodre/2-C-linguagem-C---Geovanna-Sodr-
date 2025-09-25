#include <stdio.h>
int main(){
    int a, b;
    printf("Digite dois numeros:");
    scanf("%d", &a);
    scanf("%d", &b);

 if (a % b == 0) {
 printf("%d e multiplo %d\n", a, b);
}
 else if (b % a == 0){
 printf("%d e multiplo de %d\n", a, b);
}
 else {
 printf("Nenhum e multiplo do outro\n");
}
return 0;
}