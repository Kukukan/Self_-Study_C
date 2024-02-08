#include <bits/stdc++.h>
class Solution
{
    public:
    int reverse(int x)
    {
        long long rev = 0;
        while (x!= 0)
        {
            rev = rev * 10 + x % 10;
            x /= 10;

            if (rev > INT_MAX || rev < INT_MIN)
                return 0;
        }
        return (int)rev;
    }
};
int main()
{
    int num;
    std::cin >> num;
    Solution obj;
    std::cout << obj.reverse(num) << std::endl;
    return 0;
}