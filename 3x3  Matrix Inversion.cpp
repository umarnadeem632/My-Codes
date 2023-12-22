#include <stdio.h>

int main() {
    // Declare matrices for input, inverse, and adjugate
    float matrix[3][3], inv_matrix[3][3], adj[3][3];

    // Input elements into the matrix
    printf("Enter elements of a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%f", &matrix[i][j]);
        }
    }

    // Calculate determinant of the matrix
    float det = 0;
    for (int i = 0; i < 3; i++) {
        det += (matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] - matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]));
    }

    // Check if the matrix is singular (inverse does not exist)
    if (det == 0) {
        printf("The matrix is singular, and its inverse does not exist.\n");
        return 0;
    }

    // Calculate the adjugate of the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            adj[i][j] = matrix[(i + 1) % 3][(j + 1) % 3] * matrix[(i + 2) % 3][(j + 2) % 3] - matrix[(i + 1) % 3][(j + 2) % 3] * matrix[(i + 2) % 3][(j + 1) % 3];
        }
    }

    // Transpose the adjugate matrix to get the final inverse matrix
    float trans_adj[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            trans_adj[i][j] = adj[j][i];
        }
    }

    // Calculate the inverse matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            inv_matrix[i][j] = trans_adj[i][j] / det;
        }
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the inverse matrix
    printf("\nInverse Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.4f\t", inv_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

