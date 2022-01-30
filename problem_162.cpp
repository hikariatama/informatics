#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> arr;
queue<int> q;
int n, m;
void bfs() {
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        int y = q.front();
        q.pop();
        if(y + 1 < m and arr[x][y + 1] == -1) {
            arr[x][y + 1] = arr[x][y] + 1;
            q.push(x);
            q.push(y + 1);
        }

        if(y - 1 > -1 and arr[x][y - 1] == -1) {
            arr[x][y - 1] = arr[x][y] + 1;
            q.push(x);
            q.push(y - 1);
        }

        if(x + 1 < n and arr[x + 1][y] == -1) {
            arr[x + 1][y] = arr[x][y] + 1;
            q.push(x + 1);
            q.push(y);
        }

        if(x - 1 > -1 and arr[x - 1][y] == -1) {
            arr[x - 1][y] = arr[x][y] + 1;
            q.push(x - 1);
            q.push(y);
        }
    }
}

signed main() {
    int a;
    cin >> n >> m;
    arr.resize(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a;
            arr[i][j] = a - 1;
            if(a) {
                q.push(i);
                q.push(j);
            }
        }
    }

    bfs();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
