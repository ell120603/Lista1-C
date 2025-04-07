#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int primos(int x,int y);
int main(){
    primos(5,2);
}

int primos(int x,int y){

    if(x<2){
        printf("Nao e primo\n");
        return 0;
    }
    if(y*y>x){
        printf("E primo\n");
        return 1;
    }
    if(x%y==0){
        printf("Nao e primo\n");
        return 0;
    }
    return primos(x,y+1);
}