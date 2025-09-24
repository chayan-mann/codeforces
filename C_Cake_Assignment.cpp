#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long k;
        unsigned long long x;
        cin >> k >> x;
        unsigned long long S = 1ULL << (k + 1);
        unsigned long long a = x, b = S - x;
        vector<int> ops;
        while (a != b) {
            if (a < b) {
                ops.push_back(1);
                b -= a;
                a += a;
            } else {
                ops.push_back(2);
                a -= b;
                b += b;
            }
        }
        reverse(ops.begin(), ops.end());
        cout << ops.size() << "\n";
        for (size_t i = 0; i < ops.size(); ++i) {
            if (i) cout << ' ';
            cout << ops[i];
        }
        cout << "\n";
    }
    return 0;
}