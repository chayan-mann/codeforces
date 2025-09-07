#include<iostream>
#include<algorithm>
using namespace std;

using ll = long long;

ll minCost(ll n){
    ll cost = 0;
    ll x = 0;        
    ll p = 1;  

    while(n > 0){
        ll d = n % 3;    
        n /= 3;

        if(d){
            
            ll term = d * ( 3 * p + x * (p / 3) );
            cost += term;
        }

        x += 1;
        p *= 3;  
    }
    return cost;
}

// Main logic for each test case
void solve() {
    long long n;
    cin >> n;
    cout << minCost(n) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) solve();
    return 0;
}
