#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a = (long long) (n*n*n + 3*n*n + n +1);
    cout << a << endl;
    return 0;
}
