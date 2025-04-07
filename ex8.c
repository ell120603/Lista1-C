#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inverte(char *n,int y, int x);
int palindromo (char *n);




int main(){
    palindromo("banana");
    palindromo("anna");
    palindromo("ana");
    palindromo("bananab");
    palindromo("aa");
    palindromo("a");
    palindromo("eliel");
    palindromo("ele");
    palindromo("elefante");
    palindromo("elefantefanele");
    palindromo("santos");
}


int inverte(char *n,int y, int x){
    if (y <= x) return 1;
    else {
        if (n[y] != n[x]) return 0;

        return inverte(n, y-1, x+1);
    } 
}
int palindromo (char *n){
    int x1, x = 0;
    x1 = inverte(n, strlen(n) - 1, x);
    if (x1 == 1) printf(" palindromo\n");
    else printf("Nao palindromo\n");
}