#include <iostream>
#include <set>
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
    for (int i = 0; i< 10; i++)
    {
        s.insert(i);
    }
    cout << "So phan tu trong set: " << s.size() << endl;
    if (s.count(5) !=0)
    {
        cout << "Found !\n";
    }
    else
    {
        cout << "Not Found !\n";
    }
    return 0;
}