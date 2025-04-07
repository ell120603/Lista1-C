#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int impresaoPar(int x);


int main(){
    impresaoPar(6);
    return 0;
}
int impresaoPar(int x){
    if(x<0){
        return 0;
    }
    if(x%2==0){
        printf("%d\n",x);
    }
    return impresaoPar(x-1);
}