#include <stdio.h>
#include <wchar.h>
#include <locale.h>

void inverterString(wchar_t *str,int esquerda,int direita);

int main(){
    setlocale(LC_ALL,"");
    wchar_t str[] = L"OLÁ MUNDO";
    
    int tamanho = wcslen(str);
    inverterString(str,0,tamanho-1);
    wprintf(L"String invertida %ls\n",str);
    return 0;



}

void inverterString(wchar_t *str,int esquerda,int direita){
if(esquerda>=direita) return;
wchar_t temp = str[esquerda];
str[esquerda] = str[direita];
str[direita] = temp;

inverterString(str,esquerda + 1,direita -1);


}