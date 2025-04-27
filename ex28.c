#include <stdio.h>
#include <stdbool.h>

#define N 4
bool isSafe(int board[N][N], int row, int col);
void printBoard(int board[N][N]);
void solveNQUtil(int board[N][N], int col);
int main() {
    int board[N][N] = {0};
    solveNQUtil(board, 0);
    return 0;
}
void printBoard(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf(board[i][j] ? "Q " : ". ");
        printf("\n");
    }
    printf("\n");
}

bool isSafe(int board[N][N], int row, int col) {
    for (int i = 0; i < col; i++)
        if (board[row][i]) return false;
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j]) return false;
    for (int i = row, j = col; i < N && j >= 0; i++, j--)
        if (board[i][j]) return false;
    return true;
}

void solveNQUtil(int board[N][N], int col) {
    if (col == N) {
        printBoard(board);
        return;
    }
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;
            solveNQUtil(board, col + 1);
            board[i][col] = 0;
        }
    }
}


