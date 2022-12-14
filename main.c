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
    for (int i = 0; i < 80; i++)