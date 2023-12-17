#include <iostream>

using namespace std;
int myVar;
int main()
{
    // static int myVar;
    myVar++;
    cout << myVar <<endl;
    myVar++;
    cout<< myVar << endl;
    return 0;
}