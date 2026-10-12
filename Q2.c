//To implement matrix multiplication using nested for loops//
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Input dimensions for Matrix A
    printf("Enter rows for Matrix A: ");
    scanf("%d", &r1);
    printf("Enter columns for Matrix A: ");
    scanf("%d", &c1);

    // Input dimensions for Matrix B
    printf("Enter rows for Matrix B: ");
    scanf("%d", &r2);
    printf("Enter columns for Matrix B: ");
    scanf("%d", &c2);

    // Condition for matrix multiplication: columns of A must equal rows of B
    if (c1 != r2) {
        printf("Multiplication not possible. Columns of Matrix A must equal rows of Matrix B.\n");
        return 1;
    }

    int a[r1][c1], b[r2][c2], result[r1][c2];

    // Input elements for Matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements for Matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication using three nested loops
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display the resultant matrix
    printf("\nResultant Matrix (%d x %d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}