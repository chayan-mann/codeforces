#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
using int64 = long long;
using i128 = __int128_t;

long long sumDigitsUpTo(long long n) {
    if (n <= 0) return 0;
    long long res = 0, factor = 1;
    while (n / factor > 0) {
        long long higher = n / (factor * 10);
        long long curr = (n / factor) % 10;
        long long lower = n % factor;

        res += higher * 45 * factor;

        res += (curr * (curr - 1) / 2) * factor;
        res += curr * (lower + 1);

        factor *= 10;
    }
    return res;
}

long long solveQuery(long long k) {
    long long res = 0;
    long long length = 1, base = 1;

    while (true) {
        long long numbers = 9 * base;
        long long digits = numbers * length;

        if (k > digits) {
            long long l = base, r = base + numbers - 1;
            res += sumDigitsUpTo(r) - sumDigitsUpTo(l - 1);
            k -= digits;
            base *= 10;
            length++;
        } else {
            long long fullNums = k / length;
            long long extra = k % length;

            long long l = base, r = base + fullNums - 1;
            if (fullNums > 0)
                res += sumDigitsUpTo(r) - sumDigitsUpTo(l - 1);

            if (extra > 0) {
                long long nextNum = r + 1;
                string s = to_string(nextNum);
                for (int i = 0; i < extra; i++)
                    res += s[i] - '0';
            }
            return res;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;
        cout << solveQuery(k) << "\n";
    }
    return 0;
}
