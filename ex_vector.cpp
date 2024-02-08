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
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    /*cout<< v.size() <<" " << v.capacity()<<endl;*/
    for(int i=v.size()-1; i>=0;--i)
    {
        cout<<"Phan tu v["<< i << "] trong vector: "<< v[i]<<endl;
    }
    return 0;
}
