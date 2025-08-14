#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

ll prefixMinSum(const vector<int>& a) {
    int n = a.size();
    int curMin = a[0];
    ll sum = curMin;
    for (int i = 1; i < n; ++i) {
        curMin = min(curMin, a[i]);
        sum += curMin;
    }
    return sum;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    ll answer = prefixMinSum(a);

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            vector<int> b = a;
            b[i] += b[j];
            b[j] = 0;
            answer = min(answer, prefixMinSum(b));
        }
    }

    cout << answer << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
