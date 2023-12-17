#include <iostream>

using namespace std;

int main(int n, char** args)
{
    cout << "Number of Param is "<<n<<endl;
    for(int i=0; i<n; ++i)
    {
        cout<<"Param[" << i <<"] = " << args[i] <<endl;
    }
    return 0;
}