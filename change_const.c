#include <stdio.h>

int main()
{
    const int num = 5;
    printf ("Gia tri cua num la %d\n", num);
    int *ptr = &num;
    *ptr = 10;
    printf("Gia tri cua num sau khi thay doi la %d\n", num);
    return 0;
}