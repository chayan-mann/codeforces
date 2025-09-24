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
    int a;
    int b;
    cin>>a >> b;
    if (a == b) 
        cout << 0<<endl;
    else if (a % b == 0 || b % a == 0) 
        cout << 1<<endl;
    else {
        cout << 2<<endl;
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