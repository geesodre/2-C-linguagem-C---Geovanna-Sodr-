#include <stdio.h>
int main(){
    double glicose;
    
    printf("Qual seu nivel de glicose?\n");
    scanf("%lf", &glicose);
    if (glicose < 100) {
        printf("NORMAL");
    }
    else if (glicose > 100 && glicose < 140) {
        printf("ELEVADO");
    }
    else{
        printf("DIABETICO");
    }
return 0;
}
