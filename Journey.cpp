#include <bits/stdc++.h>
using namespace std;

double dfs(vector<int> adj[], int node, int par) {
    double sum=0.0;
    for (auto i : adj[node]) {
        if (i != par) sum+=1+dfs(adj, i, node);
    }
    return sum ? sum/(adj[node].size()-(par!=-1)) : 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> adj[n];
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << fixed << setprecision(7) << dfs(adj,0,-1) << '\n';

    return 0;
}
