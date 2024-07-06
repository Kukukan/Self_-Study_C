#include <bits/stdc++.h>
using namespace std;

vector<int> paraseStr(string s) {
    vector<int> res;
    stringstream ss(s);
    char c;
    int a;
    for (int i = 0; i<s.size(); ++i) {
        if (ss >> a) {
            ss >> c;
            res.push_back(a);
        }
    }
    
    return res;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    getline(cin, s);
    vector<int> ans = paraseStr(s);
    for (int i = 0; i < ans.size() ; ++i) {
        cout << ans[i] << endl;
    }
    return 0;
}
