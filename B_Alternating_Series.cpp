#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; ++i) {
        if ((i % 2) == 0) {
            a[i] = -1;
        } else {
            a[i] = 3;
        }
    }

    if (n == 2) {
        a[1] = 2;
    } 
    else if (n % 2 == 0) {
        a[n - 1] = 2;
    }

    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << a[i];
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}