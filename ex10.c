#include <stdio.h>

int mutiplicar(int a,int b);


int main(){
    int a,b;
    printf("digite um numero:\n");
    scanf("%d",&a);
    printf("\ndigite um numero:\n");
    scanf("%d",&b);
    int c = mutiplicar(a,b);
    printf("Resultado: %d",c);
    return 0;
}

int mutiplicar(int a,int b){
    if(a||b<=0) return 0;
    return a+mutiplicar(a,b-1);

}