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
    int k, x;
    cin >> k >> x;
    
    for (int i = 0; i < k; i++) {
        x *= 2;  
    }
    
    cout << x << "\n";
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