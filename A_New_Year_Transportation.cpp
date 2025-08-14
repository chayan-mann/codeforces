#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
using ll = long long;

bool reachable(int n, int t, vector<int>& portals) {
    int pos = 1; // start at cell 1
    while (pos < t) {
        pos += portals[pos - 1]; // jump forward
    }
    return pos == t;
}

void solve() {
    int n, t;
    cin >> n >> t;

    vector<int> portals(n - 1); // resize before reading
    for (int i = 0; i < n - 1; i++) {
        cin >> portals[i];
    }

    if (reachable(n, t, portals))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
