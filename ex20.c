#include <stdio.h>
#include <string.h>


void swap(char *x, char *y);
void permute(char *str, int l, int r);
int main() {
    char str[] = "abc";
    permute(str, 0, strlen(str) - 1);
    return 0;
}

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            swap(&str[l], &str[i]);
            permute(str, l + 1, r);
            swap(&str[l], &str[i]);
        }
    }
}

