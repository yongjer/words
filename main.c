#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[80];
    fgets(str, 80, stdin);
    int num[80];
    fgets(num, 80, stdin);
    puts(str);
    puts(num);
    return 0;
}