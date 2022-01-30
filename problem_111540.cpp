#include <bits/stdc++.h>

using namespace std;

const int constant_n = 1000000;
bool have_i_been_here_wtf[constant_n] = {false};
vector<int> dfs_vector[constant_n];
vector<vector<int>> subvector;
int row = 0;

void dfs_main_function(int k) {
    have_i_been_here_wtf[k] = true;
    subvector[row].push_back(k);
    for (int i: dfs_vector[k]) {
        if (!have_i_been_here_wtf[i]) {
            dfs_main_function(i);
        }
    }
}

int main() {
    subvector.resize(constant_n);
    int n, m;
    cin >> n >> m;
    int tmp, tmp2;
    for (int i = 0; i < m; i++) {
        cin >> tmp >> tmp2;
        dfs_vector[tmp - 1].push_back(tmp2 - 1);
        dfs_vector[tmp2 - 1].push_back(tmp - 1);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (!have_i_been_here_wtf[i]) {
            count++;
            dfs_main_function(i);
            row++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < count; i++) {
        cout << subvector[i].size() << endl;
        for (int j: subvector[i]) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}