#include <stdio.h>

void print_matrix(int matrix[][3], int rows, int cols) {
    if (rows != 0 && cols != 0) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    } else if (rows == 0 || cols == 0) {
        return;
    }
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print_matrix(matrix, 3, 3);
    return 0;
}
