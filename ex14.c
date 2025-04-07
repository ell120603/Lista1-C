#include <stdio.h>
#include <stdlib.h> 
#include <string.h>


int decimalParaBinario(int n);

int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("O numero %d em binario e: %d\n", n, decimalParaBinario(n));
    return 0;

}
int decimalParaBinario(int n){
    if(n == 0) return 0;
    return n % 2 + 10 * decimalParaBinario(n / 2);
}
