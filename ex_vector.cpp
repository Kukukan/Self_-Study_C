#include <bits/stdc++.h>
using namespace std;
/*
vector<kieu du lieu> ten_vector
push_back()
size(): kich thuoc vector
*/
int main()
{
    vector<int> v;
    //vector<int> v(n); // khai bao vector nhung da co san n phan tu. v[n]: mang cac vectores
    //int a[n] = v(n)
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    //vector<int>::iterator it = v.begin();
    /*cout<< v.size() <<" " << v.capacity()<<endl;*/
    // for(int i=v.size()-1; i>=0;--i)
    // {
    //     cout<<"Phan tu v["<< i << "] trong vector: "<< v[i]<<endl;
    // }

    // for (int x: v)
    // {
    //     cout << x <<endl;
    // }

    //duyet bang iterator
    for (auto it = v.begin(); it!= v.end(); ++it)
    {
        cout << *it << endl;
    }
    return 0;
}
