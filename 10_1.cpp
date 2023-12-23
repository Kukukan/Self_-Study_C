#include <bits/stdc++.h>

using namespace std;
template <class R, class T>R Average(int count, T* list)
{
    T sum = 0;
    R avg = 0;
    for(int i=0; i<count; i++)
    {
        sum+= *(list+i);
    }
    avg = (R) sum/count;
    return avg;
}
int main()
{
    int arr1[] = { 10, 20, 15, 12 ,11, 41, 45, 69, 97};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << Average<double, int>(n1, arr1) <<endl;
    return 0;
}