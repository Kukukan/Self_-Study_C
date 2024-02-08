#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    unsigned int nam = n / 365;
    unsigned int du = n % 365;
    unsigned int tuan = du / 7;
    unsigned int ngay = du % 7;
    cout << nam << " " << tuan  << " " << ngay << endl;
    return 0;
}