#include <stdio.h>

void printMatrix(int matrix[][30], int rows, int cols)
{
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void printBelowMainDiagonal(int matrix[][30], int rows, int cols)
{
    printf("elements below the main diagonal:\n");
    for (int i = 1; i < rows; i++)
    {
        for (int j = 0; j < i && j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
    }
}

int main()
{
    int n, m;

    printf("Rows:\n");
    scanf("%d", &n);

    printf("Colums:\n");
    scanf("%d", &m);

    int matrix[30][30];

    printf("elements of the matrix row by row:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printMatrix(matrix, n, m);
    printBelowMainDiagonal(matrix, n, m);

    return 0;
}