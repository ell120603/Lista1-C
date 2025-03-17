#include <stdio.h>

int soma_digitos(int n);


int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    soma_digitos(n);
    return 0;
}

int soma_digitos(int n){
    if(n == 0) return 0;
    return n % 10 + soma_digitos(n / 10);
}

