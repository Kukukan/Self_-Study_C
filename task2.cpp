#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
int main(int n, char** args)
{
    time_t t;
    struct tm* cur;
    
    while (1)
    {
        Sleep(1000);
        t = time(NULL);
        cur = localtime(&t);
        cout << asctime(cur) << endl;
    }
    
    return 0;
}