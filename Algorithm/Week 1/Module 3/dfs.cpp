#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> v[N];
bool vis[N];

void dfs(int srs) {
    cout << srs << endl;
    vis[srs] = true;

    for (int child : v[srs]) {
        if (vis[child] == false) {
            dfs(child);
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    while (e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    dfs(0);

    return 0;
}