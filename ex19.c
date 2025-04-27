#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int torredeHanoi(int n, char origem, char destino, char auxiliar);
int main() {
    int n;
    printf("Digite o numero de discos: ");
    scanf("%d", &n);
    
    torredeHanoi(n, 'A', 'C', 'B');
    
    return 0;
}
int torredeHanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return 0;
    } else {
        torredeHanoi(n - 1, origem, auxiliar, destino);
        printf("Mover disco %d de %c para %c\n", n, origem, destino);
        torredeHanoi(n - 1, auxiliar, destino, origem);
    }
}