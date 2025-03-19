#include <stdio.h>
int somaV(int v[], int pos);
int main() {
    int v[]={1,2,10,4};
    
    printf("a soma dos elementos é %d\n",somaV(v,3));
    return 0;
}

int somaV(int v[],int pos){
    if(pos<=0) return v[0];
    return v[pos]+somaV(v,pos-1);
}
