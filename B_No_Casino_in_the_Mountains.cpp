#include <iostream>
#include <vector>

using namespace std;

int maxHikes(int n, int k, vector<int>& a) {
    int i = 0, hikes = 0;
    
    while (i <= n - k) {
        // Check if k consecutive days from i are all 0s
        bool canHike = true;
        for (int j = 0; j < k; j++) {
            if (a[i + j] != 0) {
                canHike = false;
                break;
            }
        }

        if (canHike) {
            hikes++;
            i += k + 1; // Skip k days of hike + 1 rest day
        } else {
            i++; // Move forward by one day
        }
    }

    return hikes;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int& x : a) cin >> x;

    cout << maxHikes(n, k, a) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
