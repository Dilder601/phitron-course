#include <bits/stdc++.h>
using namespace std;

char matrix[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = { {0, 1}, {0, -1}, {-1, 0}, {1, 0} };

int n, m;

bool valid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) {
        return false;
    }
    return true;
}

int dfs(int si, int sj, int& count) {
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && matrix[ci][cj] == '.') {
            count++;
            dfs(ci, cj, count);
        }
    }
    return count;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    vector<int> apartmentRoom;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == '.' && !vis[i][j]) {
                int count = 1;
                int result = dfs(i, j, count);
                apartmentRoom.push_back(result);
            }
        }
    }

    sort(apartmentRoom.begin(), apartmentRoom.end());

    if (apartmentRoom.empty()) {
        cout << "0" << endl;
    }
    else {
        for (int size : apartmentRoom) {
            cout << size << " ";
        }
        cout << endl;
    }

    return 0;
}