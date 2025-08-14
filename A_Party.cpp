#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
int n;

int dfs(int node) {
    int maxDepth = 1; // this node itself
    for (int child : graph[node]) {
        maxDepth = max(maxDepth, 1 + dfs(child));
    }
    return maxDepth;
}

int main() {
    cin >> n;
    graph.assign(n + 1, {}); // employees are 1-indexed
    vector<int> manager(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> manager[i];
        if (manager[i] != -1) {
            graph[manager[i]].push_back(i);
        }
    }

    int result = 0;
    for (int i = 1; i <= n; i++) {
        if (manager[i] == -1) { // root
            result = max(result, dfs(i));
        }
    }

    cout << result << endl;
}
