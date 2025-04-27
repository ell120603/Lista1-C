#include <stdio.h>

#define N 3
#define M 4

int maze[N][M] = {
    {0, 1, 0, 0},
    {0, 0, 0, 1},
    {1, 0, 1, 0}
};

int sol[N][M] = {0};

int isSafe(int x, int y) {
    return (x >= 0 && y >= 0 && x < N && y < M && maze[x][y] == 0);
}

int solveMaze(int x, int y) {
    if (x == N - 1 && y == M - 1) {
        sol[x][y] = 1;
        return 1;
    }
    if (isSafe(x, y)) {
        sol[x][y] = 1;
        if (solveMaze(x + 1, y)) return 1;
        if (solveMaze(x, y + 1)) return 1;
        sol[x][y] = 0; 
    }
    return 0;
}

int main() {
    if (solveMaze(0, 0)) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++)
                printf("%c ", sol[i][j] ? '*' : (maze[i][j] ? '1' : '0'));
            printf("\n");
        }
    } else {
        printf("No solution\n");
    }
    return 0;
}
