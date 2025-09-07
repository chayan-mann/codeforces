#include <iostream>
#include <string>
#include <vector>

using namespace std;


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool three_consecutive_dots = false;
    for (int i = 0; i <= n - 3; ++i) {
        if (s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
            three_consecutive_dots = true;
            break; 
        }
    }

    if (three_consecutive_dots) {
        cout << 2 << endl;
    } else {
        int empty_cell_count = 0;
        for (char c : s) {
            if (c == '.') {
                empty_cell_count++;
            }
        }
        cout << empty_cell_count << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve(); 
    }

    return 0;
}