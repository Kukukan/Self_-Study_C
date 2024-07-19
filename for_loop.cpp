#include <iostream>
#include <thread>
#include <conio.h>
#include <chrono>
#include <algorithm>
using namespace std;

void input(int i, int nums[])
{
    for(i; i < 5; ++i) {
        cout << "input your " << i+1 << " number: ";
        cin >> nums[i];
    }
    cout << i << endl;
}

void sort_nums(int nums[], int i, int j)
{
    cout << i << " " << j << endl;
    int tmp;
    for(i; i < 5-1; ++i) {
        for(j; j < 5-i-1; j++) {
            if(nums[j] > nums[j+1]) {
                tmp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = tmp;
            }
        }
        j = 0;
    }
    cout << i << " " << j << endl;
}

void display_nums(int j, int nums[])
{
    _sleep(2);
    cout << "your line of nums is: ";
    for(j; j < 5; ++j) {
        cout << nums[j] << " ";
    }
}

int main()
{
    int i = 0, j = 0;
    int nums[5] = {0, };
    cout << sizeof(nums) << endl;
    input(i, nums);
    display_nums(i, nums);
    cout << i << endl;
    sort_nums(nums, i, j);
    cout << j << endl;
    display_nums(j, nums);
    return 0;
}
