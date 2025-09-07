// Header includes and using namespace
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Type Aliases
using ll = long long;

// Main logic for each test case
void solve() {
    ll n;
    cin >> n;

    vector<ll> ans;

    ll power10 = 10;
    for (int k = 1; k <= 18; k++) { 
        ll d = power10 + 1; 
        if (n % d == 0) {
            ans.push_back(n / d);
        }
        power10 *= 10;
        if (d > n) break; 
    }

    if (ans.empty()) {
        cout << 0 << endl;
    } else {
        sort(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for (int i = 0; i < (int)ans.size(); i++) {
            cout << ans[i] << (i + 1 == (int)ans.size() ? '\n' : ' ');
        }
    }
}

// Main function
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Handle test cases
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
