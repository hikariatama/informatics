#include <bits/stdc++.h>
using namespace std;
#define ft first
#define sd second

int n, x1, x2, y_1, y2, ans;
vector<vector<int>> arr;
vector<vector<pair<int, int>>> cord;

void bfs() {
    queue<int> q;
    q.push(x1);
    q.push(y_1);
    arr[x1][y_1] = 0;
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        int y = q.front();
        q.pop();
        if(x == x2 and y == y2) {
            ans = arr[x][y];
            cout << arr[x][y] << endl;
            return;
        }

        if(x + 2 <= n - 1 and y + 1 <= n - 1 and arr[x + 2][y + 1] == -1) {
            arr[x + 2][y + 1] = arr[x][y] + 1;
            q.push(x + 2);
            q.push(y + 1);
            cord[x + 2][y + 1] = {x, y};
        }

        if(x + 2 <= n - 1 and y - 1 >= 0 and arr[x + 2][y - 1] == -1) {
            arr[x + 2][y - 1] = arr[x][y] + 1;
            q.push(x + 2);
            q.push(y - 1);
            cord[x + 2][y - 1] = {x, y};
        }

        if(x + 1 <= n - 1 and y + 2 <= n - 1 and arr[x + 1][y + 2] == -1) {
            arr[x + 1][y + 2] = arr[x][y] + 1;
            q.push(x + 1);
            q.push(y + 2);
            cord[x + 1][y + 2] = {x, y};
        }

        if(x - 1 >= 0 and y + 2 <= n - 1 and arr[x - 1][y + 2] == -1) {
            arr[x - 1][y + 2] = arr[x][y] + 1;
            q.push(x - 1);
            q.push(y + 2);
            cord[x - 1][y + 2] = {x, y};
        }

        if(x - 2 >= 0 and y + 1 <= n - 1 and arr[x - 2][y + 1] == -1) {
            arr[x - 2][y + 1] = arr[x][y] + 1;
            q.push(x - 2);
            q.push(y + 1);
            cord[x - 2][y + 1] = {x, y};
        }

        if(x - 2 >= 0 and y - 1 >= 0 and arr[x - 2][y - 1] == -1) {
            arr[x - 2][y - 1] = arr[x][y] + 1;
            q.push(x - 2);
            q.push(y - 1);
            cord[x - 2][y - 1] = {x, y};
        }

        if(x - 1 >= 0 and y - 2 >= 0 and arr[x - 1][y - 2] == -1) {
            arr[x - 1][y - 2] = arr[x][y] + 1;
            q.push(x - 1);
            q.push(y - 2);
            cord[x - 1][y - 2] = {x, y};
        }

        if(x + 1 <= n - 1 and y - 2 >= 0 and arr[x + 1][y - 2] == -1) {
            arr[x + 1][y - 2] = arr[x][y] + 1;
            q.push(x + 1);
            q.push(y - 2);
            cord[x + 1][y - 2] = {x, y};
        }
    }
}

signed main() {
    cin >> n;
    cord.resize(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cord[i].push_back({-1, -1});
        }
    }
    arr.resize(n, vector<int>(n, -1));
    cin >> x1 >> y_1;
    cin >> x2 >> y2;
    x1 --;
    x2 --;
    y_1 --;
    y2 --;
    bfs();
    vector<pair<int, int>> path;
    path.resize(ans);
    pair<int, int> currently = cord[x2][y2];
    pair<int, int> start = {x1, y_1};
    int c = 0;
    while(currently != start) {
        path[c] = currently;
        c ++;
        currently = cord[currently.ft][currently.sd];
    }
    cout << x1 + 1 << " " << y_1 + 1 << endl;
    for(int i = c - 1; i > -1; i --) {
        cout << path[i].ft + 1 << " " << path[i].sd + 1 << endl;
    }

    cout << x2 + 1 << " " << y2 + 1;
    return 0;
}
