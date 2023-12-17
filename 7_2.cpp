#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    unsigned char Dow[7];
    unsigned char Day;
    unsigned char Month;
    unsigned int Year;
}date_t;

int main()
{
    date_t Date;
    printf("Size of struct is: %d bytes\n", sizeof(Date));
    return 0;
}