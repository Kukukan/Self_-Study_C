/******************************************************************************

Quick Sort ap dung phan hoach lomuto

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];     //phan tu ben phai cung
    int i = (l - 1);
    int j;
    for(j=l; j<r; ++j)
    {
        if(arr[j] <= pivot)
        {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    //dua chot ve giua
    ++i;
    swap(arr[i], arr[r]);
    return i;   //vi tri chot sau phan hoach
}

void QuickSort(int arr[], int l, int r)
{
    if(l >= r)
        return;
    int p = partition(arr,l,r);
    QuickSort(arr,l,p-1);
    QuickSort(arr,p+1,r);
}
int main()
{
    int arr[1000], n;
    cin>>n;
    srand(time(NULL));
    for(int i=0; i<n; ++i)
    {
        arr[i] = rand() %1000;
    }
    QuickSort(arr,0,n-1);
    for(int i=0; i<n; ++i)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}
