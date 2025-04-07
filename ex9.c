#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int mdc(int a, int b);

int main(){
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("O mdc de %d e %d é %d\n", a, b, mdc(a, b));
    return 0;
}
int mdc(int a, int b){
    if (b == 0) return a;
    return mdc(b, a % b);
}