#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

// Type Aliases
using ll = long long;

// Main logic for each test case
void solve() {
    ll a, b;
    cin >> a >> b;

    ll max_sum = -1;
    vector<ll> candidates;

    ll p = 0; 
    if (b > 0) {
        ll temp_b = b;
        p = __builtin_ctzll(temp_b);
    }
    ll b_o = b / (1LL << p);

    bool a_is_odd = (a % 2 != 0);
    bool b_is_odd = (b % 2 != 0);

    if (a_is_odd == b_is_odd) { 
        if (a_is_odd) { 
            candidates.push_back(1);
            if (b_o > 1) candidates.push_back(b_o);
        } else { 
            for (ll q = 0; q < p; ++q) {
                candidates.push_back(1LL << q);
                if (b_o > 1) candidates.push_back(b_o * (1LL << q)); 
            }
        }
    } else {
        if (!a_is_odd) { 
        } else {
            if (p > 1) {
                for (ll q = 1; q < p; ++q) {
                    candidates.push_back(1LL << q);
                    if (b_o > 1) candidates.push_back(b_o * (1LL << q)); 
                }
            }
        }
    }
    
    for (ll k : candidates) {
        ll current_sum = a * k + b / k;
        if (max_sum == -1) {
            max_sum = current_sum;
        } else {
            max_sum = max(max_sum, current_sum);
        }
    }

    cout << max_sum << "\n";
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