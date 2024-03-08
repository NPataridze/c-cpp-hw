#include <stdio.h>
#include <stdlib.h>

void readMatrix(int** matrix, int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int** matrix, int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int** multiplyMatrices(int** A, int n, int m, int** B, int p){
    int** result = (int**)malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++){
        result[i] = (int*)malloc(p * sizeof(int));
    }
    for(int i = 0; i < n; i++){
        for(int k = 0; k < p; k++){
            result[i][k] = 0;
            for(int j = 0; j < m; j++) {
                result[i][k] += A[i][j] * B[j][k];
            }
        }
    }
    return result;
}

void freeMatrix(int** matrix, int rows){
    for(int i = 0; i < rows; i++){
        free(matrix[i]);
    }
    free(matrix);
}

int main(){
    int n, m, p;
    printf("enter dimesions: ");
    scanf("%d %d %d", &n, &m, &p);

    int** A = (int**)malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++){
        A[i] = (int*)malloc(m * sizeof(int));
    }

    int** B = (int**)malloc(m * sizeof(int*));
    for(int i = 0; i < m; i++){
        B[i] = (int*)malloc(p * sizeof(int*));
    }

    int** C;

    printf("enter elements of matrix A (%d x %d):\n", n, m);
    readMatrix(A, n, m);

    printf("enter elements of matrix B (%d x %d):\n", m, p);
    readMatrix(B, m, p);

    if(m != m){
        printf("matrix multiplication is not possible, change the dimensions.\n");
    } else{
        C = multiplyMatrices(A, n, m, B, p);

        printf("result matrix C (%d x %d):\n", n, p);
        printMatrix(C, n, p);

        freeMatrix(C, n);
    }

    freeMatrix(A, n);
    freeMatrix(B, m);

    return 0;
}