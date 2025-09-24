#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

// Type Aliases
using ll = long long;

// Main logic for each test case
void solve() {
    int n;
    cin >> n;

    map<int, int> counts;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        counts[val]++;
    }

    if (counts.size() > 2) {
        cout << "No\n";
        return;
    }

    if (counts.size() == 1) {
        cout << "Yes\n";
        return;
    }

    if (counts.size() == 2) {
        auto it = counts.begin();
        int freq1 = it->second;
        it++;
        int freq2 = it->second;

        if (abs(freq1 - freq2) <= 1) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
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
