#include <iostream>
using namespace std;

int main()
{
    char c;     cin >> c;
    cout << static_cast<int> (c)<< endl;
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        if(c == 'z' || c == 'Z')
            cout << "a\n";
        else
        {
            if (c >= 'A' && c <= 'Z')
            {
                c +=32;
            }
            ++c;
            cout << c << endl;
        }
    }
    else
    {
        cout << "INVALID" << endl;
    }
    return 0;
}
