#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int impresaoImpar(int x);


int main(){
    impresaoImpar(9);
    return 0;
}
int impresaoImpar(int x){
    if(x<0){
        return 0;
    }
    if(x%2!=0){
        printf("%d\n",x);
    }
    return impresaoImpar(x-1);
}