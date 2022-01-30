#include <bits/stdc++.h>
using namespace std;

const int fucking_max_n = 1000000;
bool have_i_fucking_been_here_wtf[fucking_max_n] = {false};
vector <int> fucking_vector[fucking_max_n];

void fucking_dfs_function(int k) {
    have_i_fucking_been_here_wtf[k] = true;
    for (int i : fucking_vector[k]) {
        if (!have_i_fucking_been_here_wtf[i]) fucking_dfs_function(i);
    }
}

int main() {
    int fucking_n, fucking_g = 0;
    cin >> fucking_n;
    int fucking_array[fucking_n][fucking_n];
    for (int i = 0; i < fucking_n; i++) {
        for (int j = 0; j < fucking_n; j++) {
            cin >> fucking_array[i][j];
            fucking_g += fucking_array[i][j];
            if (fucking_array[i][j] != 0) {
                fucking_vector[i].push_back(j);
            }
        }
    }
    fucking_g = fucking_g / 2;
    int fucking_counter = 0;
    for (int i = 0; i < fucking_n; i++) {
        if (!have_i_fucking_been_here_wtf[i]) {
            fucking_counter++;
            fucking_dfs_function(i);
        }
    }
    if (fucking_counter == 1 && fucking_n == fucking_g + 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}