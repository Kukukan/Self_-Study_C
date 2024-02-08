#include<iostream>
#include<cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;

    if (n > 100000) {
        return 0;
    }

    for (long long i = 0; i < 1e9; ) {
        if (i % n == i / n && i % n < n) {
            answer += i;
        }

        if (n % 2 == 0) {
            ++i;
        } else {
            i += (n + 1);
        }
    }

    return answer;
}

int main() {
    long long n;
    cin >> n;
    cout << solution(n) << endl;
    return 0;
}
