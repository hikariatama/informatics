#include <bits/stdc++.h>
using namespace std;

const int constant_n = 1000000;
bool where_have_i_been_wtf[constant_n] = {false};
vector<int> dfs_vector[constant_n];
void dfs_main_function(int k) {
    where_have_i_been_wtf[k] = true;
    for (int i = 0; i < dfs_vector[k].size(); i++) {
        if (!where_have_i_been_wtf[dfs_vector[k][i]]) {
            dfs_main_function(dfs_vector[k][i]);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int input_array[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> input_array[i][j];
            if (input_array[i][j] == 1) {
                dfs_vector[i].push_back(j);
            }
        }
    }
    dfs_main_function(m - 1);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (where_have_i_been_wtf[i]) count++;
    }
    cout << count;
    return 0;
}