#include <stdio.h>
int fatorial(int n);

int main(){
    int f = fatorial(5);
    printf("%d", f);
}
int fatorial(int n){
    if(n<=0) return 1;
    return n*fatorial(n-1);
}
//gcc ex1.c -o ex1.exe
