// Dijkstra algo to find the shortest path to any vortex in graph

#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX

signed main() {
    // Apply classic optimizations
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, from, to;
    cin >> n >> from >> to;
    // Due to we start arrays from 0
    from--;
    to--;
    // Define adjacency matrix
    vector<vector<int>> adjacency_matrix(n, vector<int>(n));
    // Input it
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) {
            cin >> adjacency_matrix[i][j];
            adjacency_matrix[i][j] = (adjacency_matrix[i][j] == -1) ? 0 : adjacency_matrix[i][j];
    }
    // Define sub-vectors: Selected, distance, path_to
    // Fill in with false as all vortexes are unselected
    vector<int> sel(n, 0);
    // Fill in with infinity as we don't know if we have path_to to any vortex
    vector<int> distance_to(n, INF);
    // But fill -1 as first vortex
    distance_to[from] = 0;
    // Fill in with -1 as we don't know if we have path_to to any vortex
    vector<int> path_to(n, -1);

    int minimal_distance = 0, minimal_vortex;
    while(minimal_distance < INF) {
        minimal_distance = INF;
        minimal_vortex = -1;
        // Find new working vortex, which is not selected and minimal distanced
        for (int j = 0; j < n; j++) {
            if (sel[j] == 0 && distance_to[j] < minimal_distance) {
                minimal_distance = distance_to[j];
                minimal_vortex = j;
            }
        }
        // If we ain't find vortex, break from loop
        if(minimal_distance != INF) {
            // Mark this vortex as selected
            sel[minimal_vortex] = 1;
            // Process vortex
            for (int j = 0; j < n; j++) {
                // If distance via minimal_vortex is shorter, than we know now
                if (adjacency_matrix[minimal_vortex][j] != 0 &&
                    distance_to[minimal_vortex] + adjacency_matrix[minimal_vortex][j] < distance_to[j]) {
                    // Replace distance and path to this vortex
                    distance_to[j] = distance_to[minimal_vortex] + adjacency_matrix[minimal_vortex][j];
                    path_to[j] = minimal_vortex;
                }
            }
        }
    }

    cout << ((distance_to[to] != INF) ? distance_to[to] : -1);
    return 0;
}