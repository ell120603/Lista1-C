#include <stdio.h>
int contagem_regressiva(int n);
int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    contagem_regressiva(n);

    return 0;
}
int contagem_regressiva(int n){
    if(n == 0){
        printf("FIM!");
        return 0;
    }
    printf("%d\n", n);
    return contagem_regressiva(n-1);
}
