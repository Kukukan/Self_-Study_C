#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << INT_MIN << " " << INT_MAX <<endl;
    cout << LLONG_MIN << " " << LLONG_MAX <<endl;

    long long x,y,tong,hieu,tich;
    double thuong;
    cin>>x>>y;

    tong = x + y;
    hieu = x - y;
    tich = x*y;
    thuong = 1.0*x/y;
    cout << fixed << setprecision(2) << tong << " " << hieu << " " << tich << " " << thuong <<endl;
    return 0;
}
