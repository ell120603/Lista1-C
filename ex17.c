#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscaEmArray(int *array, int tamanho, int valor);


int main(){
    int tamanho, valor;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);
    int *array = (int *)malloc(tamanho * sizeof(int));
    if(array == NULL){
        printf("Erro ao alocar memoria\n");
        return 1;
    }
    for(int i = 0; i < tamanho; i++){
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);
    
    int resultado = buscaEmArray(array, tamanho, valor);
    
    if(resultado != -1){
        printf("Valor encontrado na posicao %d\n", resultado+1);
    } else {
        printf("Valor nao encontrado\n");
    }
    
    free(array);
    return 0;
}
int buscaEmArray(int *array, int tamanho, int valor) {
    if (tamanho == 0) {
        return -1; 
    }
    if (array[0] == valor) {
        return 0; 
    }
    
    int resultado = buscaEmArray(array + 1, tamanho - 1, valor);
    return (resultado == -1) ? -1 : resultado + 1;
}