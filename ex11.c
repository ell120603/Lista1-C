#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contagemCaracteres(char *str, char c);


int main(){
    char str[100], c;
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    printf("O caractere '%c' aparece %d vezes na string '%s'\n", c, contagemCaracteres(str, c), str);
    return 0;
}
int contagemCaracteres(char *str, char c){
    int i, cont = 0;
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == c) cont++;
    }
    return cont;
}