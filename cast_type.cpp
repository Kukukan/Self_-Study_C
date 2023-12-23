#include <iostream>
using namespace std;

int main()
{
    /* static_cast example */
    float f = 3.5;
 
    // Implicit type case
    // float to int
    int a = f;
    cout << "The Value of a: " << a;
 
    // using static_cast for float to int
    int b = static_cast<int>(f);
    cout << "\nThe Value of b: " << b <<endl;

    int i = 10;
    void* v = static_cast<void*>(&i);
    int* ip = static_cast<int*>(v);
    cout << *ip;
    return 0;
}