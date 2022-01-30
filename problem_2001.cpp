#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long
queue<int> q;
set<int> used;
map<int, int> path;

bool contains_zero(int num) {
    if(to_string(num).find_first_of('0') != string::npos) return true;
    return false;
}

void add_neighbors_to_queue(int num) {
    int current_num;
    if(num / 1000 < 9) if(!used.count(num + 1000)) {
            if(!contains_zero(num + 1000)) {
                q.push(num + 1000); // 1 цифра + 1
                path.insert(pair<int, int>(num + 1000, num));
            }
        }
    if(num % 1000 > 1) if(!used.count(num - 1)) {
            if(!contains_zero(num - 1)) {
                q.push(num - 1); // Последняя цифра - 1
                path.insert(pair<int, int>(num - 1, num));
            }
        }
    current_num = num % 1000 % 100 % 10 * 1000 + num / 1000 * 100 + num % 1000 / 100 * 10 + num % 1000 % 100 / 10;
    if(!used.count(current_num)) {
        if(!contains_zero(current_num)) {
            q.push(current_num); // Сдвиг вправо
            path.insert(pair<int, int>(current_num, num));
        }
    }
    current_num = num % 1000 / 100 * 1000 + num % 1000 % 100 / 10 * 100 + num % 1000 % 100 % 10 * 10 + num / 1000;
    if(!used.count(current_num)) {
        if(!contains_zero(current_num)) {
            q.push(current_num); // Сдвиг влево
            path.insert(pair<int, int>(current_num, num));
        }
    }
}

void process_for(int to) {
    int current_elem;
    while(!q.empty()) {
        current_elem = q.front();
        q.pop();
        used.insert(current_elem);
//        cout << current_elem << " ";
        if(current_elem == to) {
            break;
        }
        add_neighbors_to_queue(current_elem);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int from, to;
    cin >> from >> to;
    add_neighbors_to_queue(from);
    process_for(to);
    vector<int> local_path;
    while(to != from) {
        local_path.push_back(to);
        to = path[to];
    }
    local_path.push_back(to);
    reverse(local_path.begin(), local_path.end());
    for(auto path_item : local_path) {
        cout << path_item << "\n";
    }
}