#include <stdio.h>

#define N_MAX 100

int solveNQueens(int board[][N_MAX], int col, int n) {
    if (col >= n) {
        return 1; // All queens placed successfully
    }

    // Try placing the queen in all rows of the current column
    for (int i = 0; i < n; i++) {
        // Check if placing queen is safe
        if (isSafe(board, i, col, n)) {
            board[i][col] = 1; // Place the queen
            if (solveNQueens(board, col + 1, n)) { // Recursively check next column
                return 1;
            }
            board[i][col] = 0; // Backtrack if placement doesn't lead to solution
        }
    }

    return 0; // No solution found in current column
}

int isSafe(int board[][N_MAX], int row, int col, int n) {
    // Check for queen in same row
    for (int i = 0; i < col; i++) {
        if (board[row][i] == 1) {
            return 0;
        }
    }

    // Check for queen in upper diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return 0;
        }
    }

    // Check for queen in lower diagonal
    for (int i = row, j = col; i < n && j >= 0; i++, j--) {
        if (board[i][j] == 1) {
            return 0;
        }
    }

    return 1; // Safe position
}

void printSolution(int board[][N_MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of queens: ");
    scanf("%d", &n);

    if (n < 1 || n > N_MAX) {
        printf("Invalid number of queens.\n");
        return 1;
    }

    int board[N_MAX][N_MAX];
    memset(board, 0, sizeof(board)); // Initialize board with zeros

    if (solveNQueens(board, 0, n)) {
        printf("Solution found:\n");
        printSolution(board, n);
    } else {
        printf("No solution exists.\n");
    }

    return 0;
}

