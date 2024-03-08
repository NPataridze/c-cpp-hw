#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[101];
    char str2[101];

    printf("enter first string:\n");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("enter second string:\n");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int totalLength = strlen(str1) + strlen(str2);

    if(totalLength > 100){
        printf("you are out of space\n");
        return 1;
    }

    char *result = (char*)malloc(totalLength + 1);

    if(result == NULL){
        return 1;
    }

    //copy and concatenate
    strcpy(result, str1);
    strcat(result, str2);

    printf("Concatenated string: %s\n", result);

    free(result);

    return 0;
}