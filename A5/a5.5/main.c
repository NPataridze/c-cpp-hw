#include <stdio.h>
#include <stdlib.h>

double scalarProduct(double v[], double w[], int n){
    double result;
    for(int i =0; i < n; i++){
        result += v[i] * w[i];
    }
    return result;
}

void findMinMax(double vector[], int n, double *minVal, int *minPos, double *maxVal, int *maxPos) {
    *minVal = vector[0];
    *maxVal = vector[0];
    *minPos = 0;
    *maxPos = 0;

    for(int i = 0; i < n; i++){
        if(vector[i] < *minVal){
            *minVal = vector[i];
            *minPos = i;
        }
        if(vector[i] > *maxVal){
            *maxVal = vector[i];
            *maxPos = i;
        }
    }
}

int main(){
    int n;

    printf("enter number of components for vectors:\n");
    scanf("%d", &n);

    double *v = (double *)malloc(n * sizeof(double));
    double *w = (double *)malloc(n * sizeof(double));

    if(v == NULL || w == NULL){
        return 1;
    }

    printf("enter components of vector v:\n");
    for(int i = 0; i < n; i++){
    scanf("%lf", &v[i]);
    }

    printf("enter components of vector w:\n");
    for(int i = 0; i < n; i++){
    scanf("%lf", &w[i]);
    }

    double scalar = scalarProduct(v, w, n);
    printf("scalar product = %lf\n", scalar);

    double minV, maxV;
    int minPosV, maxPosV;
    findMinMax(v, n, &minV, &minPosV, &maxV, &maxPosV);
    printf("smalles component in vector 'V' is %lf and its position is %d\n", minV, minPosV);
    printf("largest component in vector 'V' is %lf and its position is %d\n", maxV, maxPosV);

    double minW, maxW;
    int minPosW, maxPosW;
    findMinMax(w, n, &minW, &minPosW, &maxW, &maxPosW);
    printf("smalles component in vector 'W' is %lf and its position is %d\n", minW, minPosW);
    printf("largest component in vector 'W' is %lf and its position is %d\n", maxW, maxPosW);

    free(v);
    free(w);

    return 0;
}