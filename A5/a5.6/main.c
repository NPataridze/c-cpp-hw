#include <stdio.h>

int main() {
    int n;
    printf("enter the length of an array: \n");
    scanf("%d", &n);

    if (n <= 0){
        return 1;
    }

    float arr[n];

    printf("enter %d float values with one at least one being negative:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }

    float *ptr = arr;
    int count = 0;

    while (*ptr >= 0){
        count++;
        ptr++;
    }

    printf("Number of non-negative values before the first negative value: %d\n", count);

    return 0;
}