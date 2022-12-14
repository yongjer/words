#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[81];
    fgets(str, 80, stdin);
    char num[81];
    fgets(num, 80, stdin);
    printf("%s", str);
    // separate the string into an array of chars
    char *token = strtok(str, " ");
    char *arr[81];
    int i = 0;
    while (token != NULL) {
        arr[i] = token;
        token = strtok(NULL, " ");
        i++;
    }
    // convert the string to an int