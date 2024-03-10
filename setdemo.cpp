#include <iostream>
#include <set>
#include <unordered_set>
/*
ste khong luu cac phan tu trung nhau. Cac phan tu trong set la rieng biet
size(): tong so phan tu trong set
insert(): them 1 ptu vao set, do phuc tap thuat toan O(log(n))
find(): do phuc tap thuat toan O(log(n))
count()
*/
using namespace std;

int main(int argc, char *argv[]) {
    set<int> s;
    multiset<int> ms;
    int n;
    set<string> str;
    for (int i = 0; i< 10; i++)
    {
        s.insert(i);
    }
    // for (auto x : s)
    // {
    //     cout << x << " ";
    // }
    
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;
    // cout << "So phan tu trong set: " << s.size() << endl;
    // if (s.find(5) != s.end())
    // {
    //     cout << "Found !\n";
    // }
    // else
    // {
    //     cout << "Not Found !\n";
    // }
    // s.erase(5);
    // cout << "So phan tu trong set: " << s.size() << endl;
    cout << *s.begin() << endl;     //iterator tro den ptu dau tien
    cout << *s.rbegin() << endl;    //iterator tro den ptu cuoi cung
    // cin >> n;
    // string st;
    // cin.ignore();   //xoa bo dem
    // for (int i = 0; i < n; ++i)
    // {
    //     getline(cin, st);
    //     str.insert(st);
    // }
    // cout << str.size() << endl;

    ms.insert(100);
    ms.insert(200);
    ms.insert(100);
    ms.insert(400);

    cout << ms.size() << endl;
    return 0;
}