#include <stdio.h>

int soma(int n);

int main(){
 int f;
    printf("digite um numero:\n");
    scanf("%i",&f);
    int g = soma(f);
    printf("Resultado: %d",g);
    return 0;
}

int soma(int n){
    if(n<=0) return 0;
    return n+soma(n-1);
}