// Header includes and using namespace
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

// Type Aliases
using ll = long long;

bool f(int n, vector<int>& nums){
    unordered_map<int,int> freqMap;

    for(int i=0; i<n; i++){
        freqMap[nums[i]]++;
    }

    for(auto it : freqMap){
        if(it.second >=2)
            return true;
    }
    return false;
}
// Main logic for each test case
void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    if(f(n, nums))
        cout<< "YES"<<endl;
    else
        cout<<"NO" <<endl;
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