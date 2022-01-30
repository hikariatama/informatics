#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <vector<int>> a(n, vector<int>(n, 0));
    vector <int> d(n, -1);
    vector <int> p(n, -1);
    vector <int> ans;
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) cin >> a[i][j];
    int first_vortex, end_vortex;
    cin >> first_vortex >> end_vortex;
    queue <int> bfs_queue;
    d[first_vortex - 1] = 0; // Set the path length to first vortex equal to zero
    bfs_queue.push(first_vortex - 1); // Add first vortex to queue
    while(!bfs_queue.empty()) { // While we have a vortexes to process
        int front_elem = bfs_queue.front(); // Retrieve first elem
        for(int i = 0; i < n; i++){ // Process its neighbors
            if(a[i][front_elem] && d[i] == -1) { // If the neighbor is not processed
                d[i] = d[front_elem] + 1; // Set the path length to it
                p[i] = front_elem; // Add it to possible path
                bfs_queue.push(i); // Add to processing queue
            }
        }
        bfs_queue.pop(); // Remove current processing queue items
    }
    cout << d[end_vortex - 1] << endl; // Output the length of the shortest path to end_vortex
    int i = end_vortex - 1;
    ans.push_back(end_vortex - 1);
    if (d[end_vortex - 1] > 0){
        for (int j = 0; j < d[end_vortex - 1]; j++) { // Jumping search of path through p vector
            ans.push_back(p[i]);
            i = p[i];
        }
        for (int k = ans.size() - 1; k >= 0; k--) cout << ans[k] + 1 << " "; // Output of this path
    }
    return 0;
}