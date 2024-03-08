#include <stdio.h>
#include <stdlib.h>

int*** allocate3Darray(int rows, int cols, int depth){
    int*** arr = (int***)malloc(rows * sizeof(int**));
    for(int i = 0; i < rows; i++){
        arr[i] = (int**)malloc(cols * sizeof(int*));
        for(int j = 0; j < cols; j++){
            arr[i][j] = (int*)malloc(depth * sizeof(int));
        }
    }
    return arr;
}

void free3Darray(int*** arr, int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);
}

void read3Darray(int*** arr, int rows, int cols, int depth){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            for(int k = 0; k < depth; k++){
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
}

void printXOY(int*** arr, int rows, int cols, int depth){
    for(int k = 0; k < depth; k++){
        printf("XOY section at depth %d:\n", k + 1);
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
    }
}

int main(){
    int rows, cols, depth;

    printf("enter dimensions of 3D array:\n");
    scanf("%d %d %d", &rows, &cols, &depth);


    int*** arr = allocate3Darray(rows, cols, depth);

    printf("enter elements of the 3D array:\n");
    read3Darray(arr, rows, cols, depth);

    printXOY(arr, rows, cols, depth);

    free3Darray(arr, rows, cols);

    return 0;
}