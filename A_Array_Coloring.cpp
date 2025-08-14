#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int odd_count = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x % 2 != 0) {
            odd_count++;
        }
    }

    bool total_sum_is_even = (odd_count % 2 == 0);

    if (total_sum_is_even) {
        
        if (n == 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    } else {
        
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}