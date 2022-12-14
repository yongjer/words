#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[81];
    fgets(str, 80, stdin);
    char nums[81];
    int num[81][81];
    fgets(nums, 80, stdin);
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
    int n = atoi(num);
    num_counter = 0;
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            num[j][k] = atoi(arr[num_counter]);
            num_counter++;
        }
    }
