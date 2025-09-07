#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define all(a) (a).begin(), (a).end()
#define vec vector
typedef long long ll;

template <typename T, typename U>
ostream& operator<< (ostream &os, const pair<T, U>& a) {
    return os << a.first << " " << a.second;
}
template <typename T, typename U>
istream& operator>> (istream& in, pair<T, U>& a) {
    in >> a.first >> a.second;
    return in;
}

template <typename T>
ostream& operator<< (ostream &os, const vector<T>& a) {
    for (const T& x : a) os << x << " ";
    return os;
}
template <typename T>
istream& operator>> (istream& in, vector<T>& a) {
    for (T& x : a) in >> x;
    return in;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vec<ll> g(n); 
        cin >> g;

        sort(all(g));

        ll ans = 0;
        int st = (n % 2 == 0 ? 1 : 0); 
        for (int i = st; i < n; i += 2) ans += g[i];

        cout << ans << "\n";
    }
}
