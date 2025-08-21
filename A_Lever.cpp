// Header includes and using namespace
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Type Aliases
using ll = long long;

int iterations(int n, vector<int>& a, vector<int>& b) {
    int count = 0;
    bool can_decrement = true; // Flag to control the loop

    while (can_decrement) {
        count++;
        can_decrement = false; // Assume this is the last iteration

        // Step 1: Find and perform ONE decrease.
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                a[i] = a[i] - 1;
                can_decrement = true; // A decrease happened, so loop again.
                break; // <-- FIX: Ensures only ONE decrease occurs.
            }
        }

        if (can_decrement) {
            for (int i = 0; i < n; i++) {
                if (a[i] < b[i]) {
                    a[i] = a[i] + 1;
                    break; 
                }
            }
        }
    }
    return count;
}
// Main logic for each test case
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    int result = iterations(n, a, b);
    cout<< result<<endl;
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