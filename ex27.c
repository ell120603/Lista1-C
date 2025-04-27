#include <stdio.h>


void findPaths(int x, int y, int m, int n, char path[], int idx);
int main() {
    int m = 3, n = 3;
    char path[m+n];
    findPaths(0, 0, m, n, path, 0);
    return 0;
}
void findPaths(int x, int y, int m, int n, char path[], int idx) {
    if (x == m - 1 && y == n - 1) {
        path[idx] = '\0';
        printf("%s\n", path);
        return;
    }
    if (x < m) {
        path[idx] = 'D';
        findPaths(x + 1, y, m, n, path, idx + 1);
    }
    if (y < n) {
        path[idx] = 'R';
        findPaths(x, y + 1, m, n, path, idx + 1);
    }
}


