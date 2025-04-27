#include <stdio.h>



void generateParenthesis(int open, int close, char str[], int pos, int n);
int main() {
    int n = 3;
    char str[2 * n + 1];
    generateParenthesis(0, 0, str, 0, n);
    return 0;
}
void generateParenthesis(int open, int close, char str[], int pos, int n) {
    if (pos == 2 * n) {
        str[pos] = '\0';
        printf("%s\n", str);
        return;
    }
    if (open < n) {
        str[pos] = '(';
        generateParenthesis(open + 1, close, str, pos + 1, n);
    }
    if (close < open) {
        str[pos] = ')';
        generateParenthesis(open, close + 1, str, pos + 1, n);
    }
}


