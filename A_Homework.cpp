// Header includes and using namespace
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Type Aliases
using ll = long long;


string homework(string& a, string& b, string&c){
    int n = a.size();
    int m = b.size();
    string res = a;

    for(int i=0; i<m; i++){
        if(c[i] == 'D'){
            res += b[i];
        }
        else{
            res.insert(0,1, b[i]);
        }
    }
    return res;
}
// Main logic for each test case
void solve() {
    int n;
    cin >> n;  

    string a;
    cin >> a;  

    int m;
    cin >> m;  

    string b, c;
    cin >> b >> c;  

    string answer = homework(a, b, c);
    cout << answer << endl;
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