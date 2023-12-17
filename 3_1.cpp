#include <stdio.h>

int main()
{
    int i = 196;
    char c = i;
    int j = c & 0xFF;
    printf("%d\n", j);
    return 0;
}