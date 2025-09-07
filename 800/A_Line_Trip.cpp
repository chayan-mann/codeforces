// Header includes and using namespace
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Type Aliases
using ll = long long;

int f(int n, int x, vector<int>& nums){
    int max_fuel = nums[0] - 0;  

    for(int i=1; i<n; i++){
        max_fuel = max(max_fuel, nums[i] - nums[i-1]);
    }

    max_fuel = max(max_fuel, 2 * (x - nums[n-1]));  

    return max_fuel;
}


// Main logic for each test case
void solve() {
    int n, x;
    cin >> n >> x;   

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ans = f(n, x, nums);
    cout << ans << "\n";
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