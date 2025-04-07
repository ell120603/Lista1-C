#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comprimentoString(char *str, int i, int cont);


int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    
    int comprimento = comprimentoString(str, 0, 0);
    printf("O comprimento da string '%s' e: %d\n", str, comprimento-1);
    
    return 0;
}

int comprimentoString(char *str, int i, int cont) {
    if (str[i] == '\0') {
        return cont;
    } else {
        return comprimentoString(str, i + 1, cont + 1);
    }
}