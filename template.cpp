#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>

// For convenience, you can use this header which includes most standard libraries.
// #include <bits/stdc++.h>

using namespace std;

// Type Aliases for common data types
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;
using vll = vector<ll>;
using vvi = vector<vector<int>>;

// Macros for cleaner code
#define all(v) v.begin(), v.end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// Constants
const ll INF = 1e18;
const int MOD = 1e9 + 7;

// --- Debugging ---
// (Only active when compiled locally)
#ifndef ONLINE_JUDGE
#include "debug.h" // A custom debug header (optional)
#else
#define debug(...)
#endif

// --- Main Logic ---
// Place the code for each test case in this function.
void solve() {
    // Start your code here
    int n;
    cin >> n;
    cout << n << "\n";
}

// --- Main Function ---
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Number of test cases
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}