#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Input N: " ;
    cin >> n;
    for (int i = 1; i <= 2 * n + 1; ++i)
    {
        for (int j = 1; j <= 2 * n + 1; ++j)
        {
            cout << n - min({i - 1, j - 1, 2 * n - i + 1, 2 * n - j + 1}) << " ";
        }
        cout << endl;
    }
    return 0;
}
