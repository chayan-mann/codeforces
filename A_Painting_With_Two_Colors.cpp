#include <iostream>
using namespace std;


bool f(int n, int a, int b) {
    if (a == n || b == n) return true;
    return (a + b <= n + 1);
}

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    // if (f(n, a, b)) cout << "YES\n";
    // else cout << "NO\n";

    bool blue = ((n % 2) == (b % 2));

    bool red = ((n % 2) == (a % 2));
    
    bool red_hidden = (a <= b);

    if (blue && (red || red_hidden)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
