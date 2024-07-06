#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;
    vector<vector<int>> data;
    vector<int> row_data;
    int input;
    for(int counter = 0; counter < n; counter++){
        int i;
        cin >> i; 
        row_data.clear();
        for(int counter2 = 0; counter2 < i; counter2++){
            cin >> input;
            row_data.push_back(input);
        }
        data.push_back(row_data);
    }
    
    int row, column;
    for(int counter = 0; counter < q; counter++){
        cin >> row >> column;
        cout << data[row][column] << "\n";
    }
    return 0;
}