#include <stdio.h>

int potencia(int x, int y);

int main(){
    int x,y;
    printf("digite um numero:\n");
    scanf("%i",&x);
    printf("\ndigite um numero:\n");
    scanf("%i",&y);
    int g = potencia(x,y);
    printf("Resultado: %d",g);

    return 0;
}


int potencia(int x, int y){
    if(y==0) return 1;
    return x*potencia(x,y-1);
}
