// Header includes and using namespace
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Type Aliases
using ll = long long;

bool f(int n){
    if(n%3==0){
        return false;
    }
    else{
        return true;
    }
}

// Main logic for each test case
void solve() {
    int n;
    cin >>n;

    if(f(n)){
        cout<< "First" <<endl;
    }
    else{
        cout << "Second" <<endl;
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