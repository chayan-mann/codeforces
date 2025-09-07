// Header includes and using namespace
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Type Aliases
using ll = long long;

// Main logic for each test case
void solve() {
    long long n, k;
    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        long long a_i;
        cin >> a_i;

        
        long long c = a_i % (k + 1);

        long long final_value = a_i + c * k;

        cout << final_value << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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