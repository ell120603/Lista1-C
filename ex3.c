#include <stdio.h>
int fibonacci(int n);

int main(){
int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    printf(" %d\n", n, fibonacci(n));
    
    return 0;
}

int fibonacci(int n){
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
